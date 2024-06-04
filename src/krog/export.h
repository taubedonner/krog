//
// Created by Nikita Zarudniy on 11/3/2023.
//

#ifndef KROG_SRC_KROG_EXPORT_H_
#define KROG_SRC_KROG_EXPORT_H_

#ifdef _WIN32
#ifdef KROG_EXPORT
#define KROG_API __declspec(dllexport)
#else
#define KROG_API __declspec(dllimport)
#endif
#else
#define KROG_API
#endif

#endif  // KROG_SRC_KROG_EXPORT_H_
