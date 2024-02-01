//
// Created by Nikita Zarudniy on 11/3/2023.
//

#pragma once

#include "krog/application.h"

extern kr::Application *kr::CreateApp();

int main([[maybe_unused]] int argc, [[maybe_unused]] char **argv) {
    auto app = kr::CreateApp();
    app->Run();
    delete app;

    return 0;
}

#ifdef WIN32

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow) {
    auto CommandLineToArgvA_ = [](int *argc, char ***argv) {
        // Get the command line arguments as wchar_t strings
        wchar_t **wargv = CommandLineToArgvW(GetCommandLineW(), argc);
        if (!wargv) {
            *argc = 0;
            *argv = nullptr;
            return;
        }

        // Count the number of bytes necessary to store the UTF-8 versions of those strings
        int n = 0;
        for (int i = 0; i < *argc; i++) {
            n += WideCharToMultiByte(CP_UTF8, 0, wargv[i], -1,
                                     nullptr, 0, nullptr, nullptr) + 1;
        }

        // Allocate the argv[] array + all the UTF-8 strings
        *argv = (char **) malloc((*argc + 1) * sizeof(char *) + n);
        if (!*argv) {
            *argc = 0;
            return;
        }

        // Convert all wargv[] --> argv[]
        char *arg = (char *) &((*argv)[*argc + 1]);
        for (int i = 0; i < *argc; i++) {
            (*argv)[i] = arg;
            arg += WideCharToMultiByte(CP_UTF8, 0, wargv[i], -1,
                                       arg, n, nullptr, nullptr) + 1;
        }
        (*argv)[*argc] = nullptr;
    };

    char **szArgList;
    int nArgs;

    CommandLineToArgvA_(&nArgs, &szArgList);
    if (szArgList == nullptr) {
        wprintf(L"CommandLineToArgvA failed\n");
        return 1;
    }

    for (int i = 0; i < nArgs; i++) {
        printf("%d: %s\n", i, szArgList[i]);
    }

    auto ret = main(nArgs, szArgList);
    free(szArgList);

    return ret;
}

#endif
