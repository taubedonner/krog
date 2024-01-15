//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once

#include <cstddef>
#include <array>
#include <utility>

#include <implot.h>
#include <imgui.h>

#include <IconsCodicons.h>

namespace ImGui {

    namespace Spectrum {

        enum class Font {
            Default = 0,
            Large = 1
        };

		 constexpr ImVec4 ColorConvertU32ToFloat4(ImU32 in) {
            float s = 1.0f / 255.0f;
            return {
                (float)((in >> IM_COL32_R_SHIFT) & 0xFF) * s,
                (float)((in >> IM_COL32_G_SHIFT) & 0xFF) * s,
                (float)((in >> IM_COL32_B_SHIFT) & 0xFF) * s,
                (float)((in >> IM_COL32_A_SHIFT) & 0xFF) * s};
        }

        namespace Colors {

            enum Palette : uint32_t {
                GRAY50 = 0, GRAY75, GRAY100, GRAY200, GRAY300, GRAY400, GRAY500, GRAY600, GRAY700, GRAY800, GRAY900,
                RED100, RED200, RED300, RED400, RED500, RED600, RED700, RED800, RED900, RED1000, RED1100, RED1200, RED1300, RED1400,
                ORANGE100, ORANGE200, ORANGE300, ORANGE400, ORANGE500, ORANGE600, ORANGE700, ORANGE800, ORANGE900, ORANGE1000, ORANGE1100, ORANGE1200, ORANGE1300, ORANGE1400,
                YELLOW100, YELLOW200, YELLOW300, YELLOW400, YELLOW500, YELLOW600, YELLOW700, YELLOW800, YELLOW900, YELLOW1000, YELLOW1100, YELLOW1200, YELLOW1300, YELLOW1400,
                CHARTREUSE100, CHARTREUSE200, CHARTREUSE300, CHARTREUSE400, CHARTREUSE500, CHARTREUSE600, CHARTREUSE700, CHARTREUSE800, CHARTREUSE900, CHARTREUSE1000, CHARTREUSE1100, CHARTREUSE1200, CHARTREUSE1300, CHARTREUSE1400, CELERY100,
                CELERY200, CELERY300, CELERY400, CELERY500, CELERY600, CELERY700, CELERY800, CELERY900, CELERY1000, CELERY1100, CELERY1200, CELERY1300, CELERY1400,
                GREEN100, GREEN200, GREEN300, GREEN400, GREEN500, GREEN600, GREEN700, GREEN800, GREEN900, GREEN1000, GREEN1100, GREEN1200, GREEN1300, GREEN1400,
                SEAFOAM100, SEAFOAM200, SEAFOAM300, SEAFOAM400, SEAFOAM500, SEAFOAM600, SEAFOAM700, SEAFOAM800, SEAFOAM900, SEAFOAM1000, SEAFOAM1100, SEAFOAM1200, SEAFOAM1300, SEAFOAM1400,
                CYAN100, CYAN200, CYAN300, CYAN400, CYAN500, CYAN600, CYAN700, CYAN800, CYAN900, CYAN1000, CYAN1100, CYAN1200, CYAN1300, CYAN1400,
                BLUE100, BLUE200, BLUE300, BLUE400, BLUE500, BLUE600, BLUE700, BLUE800, BLUE900, BLUE1000, BLUE1100, BLUE1200, BLUE1300, BLUE1400,
                INDIGO100, INDIGO200, INDIGO300, INDIGO400, INDIGO500, INDIGO600, INDIGO700, INDIGO800, INDIGO900, INDIGO1000, INDIGO1100, INDIGO1200, INDIGO1300, INDIGO1400,
                PURPLE100, PURPLE200, PURPLE300, PURPLE400, PURPLE500, PURPLE600, PURPLE700, PURPLE800, PURPLE900, PURPLE1000, PURPLE1100, PURPLE1200, PURPLE1300, PURPLE1400,
                FUCHSIA100, FUCHSIA200, FUCHSIA300, FUCHSIA400, FUCHSIA500, FUCHSIA600, FUCHSIA700, FUCHSIA800, FUCHSIA900, FUCHSIA1000, FUCHSIA1100, FUCHSIA1200, FUCHSIA1300, FUCHSIA1400,
                MAGENTA100, MAGENTA200, MAGENTA300, MAGENTA400, MAGENTA500, MAGENTA600, MAGENTA700, MAGENTA800, MAGENTA900, MAGENTA1000, MAGENTA1100, MAGENTA1200, MAGENTA1300, MAGENTA1400
            };

            constexpr struct  Light {
                static constexpr std::array<std::pair<const char*, ImVec4>, 193> Values = { {
                    { "GRAY50", ColorConvertU32ToFloat4(IM_COL32(255, 255, 255, 255)) },
                    { "GRAY75", ColorConvertU32ToFloat4(IM_COL32(253, 253, 253, 255)) },
                    { "GRAY100", ColorConvertU32ToFloat4(IM_COL32(248, 248, 248, 255)) },
                    { "GRAY200", ColorConvertU32ToFloat4(IM_COL32(230, 230, 230, 255)) },
                    { "GRAY300", ColorConvertU32ToFloat4(IM_COL32(213, 213, 213, 255)) },
                    { "GRAY400", ColorConvertU32ToFloat4(IM_COL32(177, 177, 177, 255)) },
                    { "GRAY500", ColorConvertU32ToFloat4(IM_COL32(144, 144, 144, 255)) },
                    { "GRAY600", ColorConvertU32ToFloat4(IM_COL32(109, 109, 109, 255)) },
                    { "GRAY700", ColorConvertU32ToFloat4(IM_COL32(70, 70, 70, 255)) },
                    { "GRAY800", ColorConvertU32ToFloat4(IM_COL32(34, 34, 34, 255)) },
                    { "GRAY900", ColorConvertU32ToFloat4(IM_COL32(0, 0, 0, 255)) },
                    { "RED100", ColorConvertU32ToFloat4(IM_COL32(255, 235, 231, 255)) },
                    { "RED200", ColorConvertU32ToFloat4(IM_COL32(255, 221, 214, 255)) },
                    { "RED300", ColorConvertU32ToFloat4(IM_COL32(255, 205, 195, 255)) },
                    { "RED400", ColorConvertU32ToFloat4(IM_COL32(255, 183, 169, 255)) },
                    { "RED500", ColorConvertU32ToFloat4(IM_COL32(255, 155, 136, 255)) },
                    { "RED600", ColorConvertU32ToFloat4(IM_COL32(255, 124, 101, 255)) },
                    { "RED700", ColorConvertU32ToFloat4(IM_COL32(247, 92, 70, 255)) },
                    { "RED800", ColorConvertU32ToFloat4(IM_COL32(234, 56, 41, 255)) },
                    { "RED900", ColorConvertU32ToFloat4(IM_COL32(211, 21, 16, 255)) },
                    { "RED1000", ColorConvertU32ToFloat4(IM_COL32(180, 0, 0, 255)) },
                    { "RED1100", ColorConvertU32ToFloat4(IM_COL32(147, 0, 0, 255)) },
                    { "RED1200", ColorConvertU32ToFloat4(IM_COL32(116, 0, 0, 255)) },
                    { "RED1300", ColorConvertU32ToFloat4(IM_COL32(89, 0, 0, 255)) },
                    { "RED1400", ColorConvertU32ToFloat4(IM_COL32(67, 0, 0, 255)) },
                    { "ORANGE100", ColorConvertU32ToFloat4(IM_COL32(255, 236, 204, 255)) },
                    { "ORANGE200", ColorConvertU32ToFloat4(IM_COL32(255, 223, 173, 255)) },
                    { "ORANGE300", ColorConvertU32ToFloat4(IM_COL32(253, 210, 145, 255)) },
                    { "ORANGE400", ColorConvertU32ToFloat4(IM_COL32(255, 187, 99, 255)) },
                    { "ORANGE500", ColorConvertU32ToFloat4(IM_COL32(255, 160, 55, 255)) },
                    { "ORANGE600", ColorConvertU32ToFloat4(IM_COL32(246, 133, 17, 255)) },
                    { "ORANGE700", ColorConvertU32ToFloat4(IM_COL32(228, 111, 0, 255)) },
                    { "ORANGE800", ColorConvertU32ToFloat4(IM_COL32(203, 93, 0, 255)) },
                    { "ORANGE900", ColorConvertU32ToFloat4(IM_COL32(177, 76, 0, 255)) },
                    { "ORANGE1000", ColorConvertU32ToFloat4(IM_COL32(149, 61, 0, 255)) },
                    { "ORANGE1100", ColorConvertU32ToFloat4(IM_COL32(122, 47, 0, 255)) },
                    { "ORANGE1200", ColorConvertU32ToFloat4(IM_COL32(97, 35, 0, 255)) },
                    { "ORANGE1300", ColorConvertU32ToFloat4(IM_COL32(73, 25, 1, 255)) },
                    { "ORANGE1400", ColorConvertU32ToFloat4(IM_COL32(53, 18, 1, 255)) },
                    { "YELLOW100", ColorConvertU32ToFloat4(IM_COL32(251, 241, 152, 255)) },
                    { "YELLOW200", ColorConvertU32ToFloat4(IM_COL32(248, 231, 80, 255)) },
                    { "YELLOW300", ColorConvertU32ToFloat4(IM_COL32(248, 217, 4, 255)) },
                    { "YELLOW400", ColorConvertU32ToFloat4(IM_COL32(232, 198, 0, 255)) },
                    { "YELLOW500", ColorConvertU32ToFloat4(IM_COL32(215, 179, 0, 255)) },
                    { "YELLOW600", ColorConvertU32ToFloat4(IM_COL32(196, 159, 0, 255)) },
                    { "YELLOW700", ColorConvertU32ToFloat4(IM_COL32(176, 140, 0, 255)) },
                    { "YELLOW800", ColorConvertU32ToFloat4(IM_COL32(155, 120, 0, 255)) },
                    { "YELLOW900", ColorConvertU32ToFloat4(IM_COL32(133, 102, 0, 255)) },
                    { "YELLOW1000", ColorConvertU32ToFloat4(IM_COL32(112, 83, 0, 255)) },
                    { "YELLOW1100", ColorConvertU32ToFloat4(IM_COL32(91, 67, 0, 255)) },
                    { "YELLOW1200", ColorConvertU32ToFloat4(IM_COL32(72, 51, 0, 255)) },
                    { "YELLOW1300", ColorConvertU32ToFloat4(IM_COL32(54, 37, 0, 255)) },
                    { "YELLOW1400", ColorConvertU32ToFloat4(IM_COL32(40, 26, 0, 255)) },
                    { "CHARTREUSE100", ColorConvertU32ToFloat4(IM_COL32(219, 252, 110, 255)) },
                    { "CHARTREUSE200", ColorConvertU32ToFloat4(IM_COL32(203, 244, 67, 255)) },
                    { "CHARTREUSE300", ColorConvertU32ToFloat4(IM_COL32(188, 233, 42, 255)) },
                    { "CHARTREUSE400", ColorConvertU32ToFloat4(IM_COL32(170, 216, 22, 255)) },
                    { "CHARTREUSE500", ColorConvertU32ToFloat4(IM_COL32(152, 197, 10, 255)) },
                    { "CHARTREUSE600", ColorConvertU32ToFloat4(IM_COL32(135, 177, 3, 255)) },
                    { "CHARTREUSE700", ColorConvertU32ToFloat4(IM_COL32(118, 156, 0, 255)) },
                    { "CHARTREUSE800", ColorConvertU32ToFloat4(IM_COL32(103, 136, 0, 255)) },
                    { "CHARTREUSE900", ColorConvertU32ToFloat4(IM_COL32(87, 116, 0, 255)) },
                    { "CHARTREUSE1000", ColorConvertU32ToFloat4(IM_COL32(72, 96, 0, 255)) },
                    { "CHARTREUSE1100", ColorConvertU32ToFloat4(IM_COL32(58, 77, 0, 255)) },
                    { "CHARTREUSE1200", ColorConvertU32ToFloat4(IM_COL32(44, 59, 0, 255)) },
                    { "CHARTREUSE1300", ColorConvertU32ToFloat4(IM_COL32(33, 44, 0, 255)) },
                    { "CHARTREUSE1400", ColorConvertU32ToFloat4(IM_COL32(24, 31, 0, 255)) },
                    { "CELERY100", ColorConvertU32ToFloat4(IM_COL32(205, 252, 191, 255)) },
                    { "CELERY200", ColorConvertU32ToFloat4(IM_COL32(174, 246, 157, 255)) },
                    { "CELERY300", ColorConvertU32ToFloat4(IM_COL32(150, 238, 133, 255)) },
                    { "CELERY400", ColorConvertU32ToFloat4(IM_COL32(114, 224, 106, 255)) },
                    { "CELERY500", ColorConvertU32ToFloat4(IM_COL32(78, 207, 80, 255)) },
                    { "CELERY600", ColorConvertU32ToFloat4(IM_COL32(39, 187, 54, 255)) },
                    { "CELERY700", ColorConvertU32ToFloat4(IM_COL32(7, 167, 33, 255)) },
                    { "CELERY800", ColorConvertU32ToFloat4(IM_COL32(0, 145, 18, 255)) },
                    { "CELERY900", ColorConvertU32ToFloat4(IM_COL32(0, 124, 15, 255)) },
                    { "CELERY1000", ColorConvertU32ToFloat4(IM_COL32(0, 103, 15, 255)) },
                    { "CELERY1100", ColorConvertU32ToFloat4(IM_COL32(0, 83, 13, 255)) },
                    { "CELERY1200", ColorConvertU32ToFloat4(IM_COL32(0, 64, 10, 255)) },
                    { "CELERY1300", ColorConvertU32ToFloat4(IM_COL32(0, 48, 7, 255)) },
                    { "CELERY1400", ColorConvertU32ToFloat4(IM_COL32(0, 34, 5, 255)) },
                    { "GREEN100", ColorConvertU32ToFloat4(IM_COL32(206, 248, 224, 255)) },
                    { "GREEN200", ColorConvertU32ToFloat4(IM_COL32(173, 244, 206, 255)) },
                    { "GREEN300", ColorConvertU32ToFloat4(IM_COL32(137, 236, 188, 255)) },
                    { "GREEN400", ColorConvertU32ToFloat4(IM_COL32(103, 222, 168, 255)) },
                    { "GREEN500", ColorConvertU32ToFloat4(IM_COL32(73, 204, 147, 255)) },
                    { "GREEN600", ColorConvertU32ToFloat4(IM_COL32(47, 184, 128, 255)) },
                    { "GREEN700", ColorConvertU32ToFloat4(IM_COL32(21, 164, 110, 255)) },
                    { "GREEN800", ColorConvertU32ToFloat4(IM_COL32(0, 143, 93, 255)) },
                    { "GREEN900", ColorConvertU32ToFloat4(IM_COL32(0, 122, 77, 255)) },
                    { "GREEN1000", ColorConvertU32ToFloat4(IM_COL32(0, 101, 62, 255)) },
                    { "GREEN1100", ColorConvertU32ToFloat4(IM_COL32(0, 81, 50, 255)) },
                    { "GREEN1200", ColorConvertU32ToFloat4(IM_COL32(5, 63, 39, 255)) },
                    { "GREEN1300", ColorConvertU32ToFloat4(IM_COL32(10, 46, 29, 255)) },
                    { "GREEN1400", ColorConvertU32ToFloat4(IM_COL32(10, 32, 21, 255)) },
                    { "SEAFOAM100", ColorConvertU32ToFloat4(IM_COL32(206, 247, 243, 255)) },
                    { "SEAFOAM200", ColorConvertU32ToFloat4(IM_COL32(170, 241, 234, 255)) },
                    { "SEAFOAM300", ColorConvertU32ToFloat4(IM_COL32(140, 233, 226, 255)) },
                    { "SEAFOAM400", ColorConvertU32ToFloat4(IM_COL32(101, 218, 210, 255)) },
                    { "SEAFOAM500", ColorConvertU32ToFloat4(IM_COL32(63, 201, 193, 255)) },
                    { "SEAFOAM600", ColorConvertU32ToFloat4(IM_COL32(15, 181, 174, 255)) },
                    { "SEAFOAM700", ColorConvertU32ToFloat4(IM_COL32(0, 161, 154, 255)) },
                    { "SEAFOAM800", ColorConvertU32ToFloat4(IM_COL32(0, 140, 135, 255)) },
                    { "SEAFOAM900", ColorConvertU32ToFloat4(IM_COL32(0, 119, 114, 255)) },
                    { "SEAFOAM1000", ColorConvertU32ToFloat4(IM_COL32(0, 99, 95, 255)) },
                    { "SEAFOAM1100", ColorConvertU32ToFloat4(IM_COL32(12, 79, 76, 255)) },
                    { "SEAFOAM1200", ColorConvertU32ToFloat4(IM_COL32(18, 60, 58, 255)) },
                    { "SEAFOAM1300", ColorConvertU32ToFloat4(IM_COL32(18, 44, 43, 255)) },
                    { "SEAFOAM1400", ColorConvertU32ToFloat4(IM_COL32(15, 31, 30, 255)) },
                    { "CYAN100", ColorConvertU32ToFloat4(IM_COL32(197, 248, 255, 255)) },
                    { "CYAN200", ColorConvertU32ToFloat4(IM_COL32(164, 240, 255, 255)) },
                    { "CYAN300", ColorConvertU32ToFloat4(IM_COL32(136, 231, 250, 255)) },
                    { "CYAN400", ColorConvertU32ToFloat4(IM_COL32(96, 216, 243, 255)) },
                    { "CYAN500", ColorConvertU32ToFloat4(IM_COL32(51, 197, 232, 255)) },
                    { "CYAN600", ColorConvertU32ToFloat4(IM_COL32(18, 176, 218, 255)) },
                    { "CYAN700", ColorConvertU32ToFloat4(IM_COL32(1, 156, 200, 255)) },
                    { "CYAN800", ColorConvertU32ToFloat4(IM_COL32(0, 134, 180, 255)) },
                    { "CYAN900", ColorConvertU32ToFloat4(IM_COL32(0, 113, 159, 255)) },
                    { "CYAN1000", ColorConvertU32ToFloat4(IM_COL32(0, 93, 137, 255)) },
                    { "CYAN1100", ColorConvertU32ToFloat4(IM_COL32(0, 74, 115, 255)) },
                    { "CYAN1200", ColorConvertU32ToFloat4(IM_COL32(0, 57, 93, 255)) },
                    { "CYAN1300", ColorConvertU32ToFloat4(IM_COL32(0, 42, 70, 255)) },
                    { "CYAN1400", ColorConvertU32ToFloat4(IM_COL32(0, 30, 51, 255)) },
                    { "BLUE100", ColorConvertU32ToFloat4(IM_COL32(224, 242, 255, 255)) },
                    { "BLUE200", ColorConvertU32ToFloat4(IM_COL32(202, 232, 255, 255)) },
                    { "BLUE300", ColorConvertU32ToFloat4(IM_COL32(181, 222, 255, 255)) },
                    { "BLUE400", ColorConvertU32ToFloat4(IM_COL32(150, 206, 253, 255)) },
                    { "BLUE500", ColorConvertU32ToFloat4(IM_COL32(120, 187, 250, 255)) },
                    { "BLUE600", ColorConvertU32ToFloat4(IM_COL32(89, 167, 246, 255)) },
                    { "BLUE700", ColorConvertU32ToFloat4(IM_COL32(56, 146, 243, 255)) },
                    { "BLUE800", ColorConvertU32ToFloat4(IM_COL32(20, 122, 243, 255)) },
                    { "BLUE900", ColorConvertU32ToFloat4(IM_COL32(2, 101, 220, 255)) },
                    { "BLUE1000", ColorConvertU32ToFloat4(IM_COL32(0, 84, 182, 255)) },
                    { "BLUE1100", ColorConvertU32ToFloat4(IM_COL32(0, 68, 145, 255)) },
                    { "BLUE1200", ColorConvertU32ToFloat4(IM_COL32(0, 53, 113, 255)) },
                    { "BLUE1300", ColorConvertU32ToFloat4(IM_COL32(0, 39, 84, 255)) },
                    { "BLUE1400", ColorConvertU32ToFloat4(IM_COL32(0, 28, 60, 255)) },
                    { "INDIGO100", ColorConvertU32ToFloat4(IM_COL32(237, 238, 255, 255)) },
                    { "INDIGO200", ColorConvertU32ToFloat4(IM_COL32(224, 226, 255, 255)) },
                    { "INDIGO300", ColorConvertU32ToFloat4(IM_COL32(211, 213, 255, 255)) },
                    { "INDIGO400", ColorConvertU32ToFloat4(IM_COL32(193, 196, 255, 255)) },
                    { "INDIGO500", ColorConvertU32ToFloat4(IM_COL32(172, 175, 255, 255)) },
                    { "INDIGO600", ColorConvertU32ToFloat4(IM_COL32(149, 153, 255, 255)) },
                    { "INDIGO700", ColorConvertU32ToFloat4(IM_COL32(126, 132, 252, 255)) },
                    { "INDIGO800", ColorConvertU32ToFloat4(IM_COL32(104, 109, 244, 255)) },
                    { "INDIGO900", ColorConvertU32ToFloat4(IM_COL32(82, 88, 228, 255)) },
                    { "INDIGO1000", ColorConvertU32ToFloat4(IM_COL32(64, 70, 202, 255)) },
                    { "INDIGO1100", ColorConvertU32ToFloat4(IM_COL32(50, 54, 168, 255)) },
                    { "INDIGO1200", ColorConvertU32ToFloat4(IM_COL32(38, 41, 134, 255)) },
                    { "INDIGO1300", ColorConvertU32ToFloat4(IM_COL32(27, 30, 100, 255)) },
                    { "INDIGO1400", ColorConvertU32ToFloat4(IM_COL32(20, 22, 72, 255)) },
                    { "PURPLE100", ColorConvertU32ToFloat4(IM_COL32(246, 235, 255, 255)) },
                    { "PURPLE200", ColorConvertU32ToFloat4(IM_COL32(238, 221, 255, 255)) },
                    { "PURPLE300", ColorConvertU32ToFloat4(IM_COL32(230, 208, 255, 255)) },
                    { "PURPLE400", ColorConvertU32ToFloat4(IM_COL32(219, 187, 254, 255)) },
                    { "PURPLE500", ColorConvertU32ToFloat4(IM_COL32(204, 164, 253, 255)) },
                    { "PURPLE600", ColorConvertU32ToFloat4(IM_COL32(189, 139, 252, 255)) },
                    { "PURPLE700", ColorConvertU32ToFloat4(IM_COL32(174, 114, 249, 255)) },
                    { "PURPLE800", ColorConvertU32ToFloat4(IM_COL32(157, 87, 244, 255)) },
                    { "PURPLE900", ColorConvertU32ToFloat4(IM_COL32(137, 61, 231, 255)) },
                    { "PURPLE1000", ColorConvertU32ToFloat4(IM_COL32(115, 38, 211, 255)) },
                    { "PURPLE1100", ColorConvertU32ToFloat4(IM_COL32(93, 19, 183, 255)) },
                    { "PURPLE1200", ColorConvertU32ToFloat4(IM_COL32(71, 12, 148, 255)) },
                    { "PURPLE1300", ColorConvertU32ToFloat4(IM_COL32(51, 16, 106, 255)) },
                    { "PURPLE1400", ColorConvertU32ToFloat4(IM_COL32(35, 15, 73, 255)) },
                    { "FUCHSIA100", ColorConvertU32ToFloat4(IM_COL32(255, 233, 252, 255)) },
                    { "FUCHSIA200", ColorConvertU32ToFloat4(IM_COL32(255, 218, 250, 255)) },
                    { "FUCHSIA300", ColorConvertU32ToFloat4(IM_COL32(254, 199, 248, 255)) },
                    { "FUCHSIA400", ColorConvertU32ToFloat4(IM_COL32(251, 174, 246, 255)) },
                    { "FUCHSIA500", ColorConvertU32ToFloat4(IM_COL32(245, 146, 243, 255)) },
                    { "FUCHSIA600", ColorConvertU32ToFloat4(IM_COL32(237, 116, 237, 255)) },
                    { "FUCHSIA700", ColorConvertU32ToFloat4(IM_COL32(224, 85, 226, 255)) },
                    { "FUCHSIA800", ColorConvertU32ToFloat4(IM_COL32(205, 58, 206, 255)) },
                    { "FUCHSIA900", ColorConvertU32ToFloat4(IM_COL32(182, 34, 183, 255)) },
                    { "FUCHSIA1000", ColorConvertU32ToFloat4(IM_COL32(157, 3, 158, 255)) },
                    { "FUCHSIA1100", ColorConvertU32ToFloat4(IM_COL32(128, 0, 129, 255)) },
                    { "FUCHSIA1200", ColorConvertU32ToFloat4(IM_COL32(100, 6, 100, 255)) },
                    { "FUCHSIA1300", ColorConvertU32ToFloat4(IM_COL32(71, 14, 70, 255)) },
                    { "FUCHSIA1400", ColorConvertU32ToFloat4(IM_COL32(50, 13, 49, 255)) },
                    { "MAGENTA100", ColorConvertU32ToFloat4(IM_COL32(255, 234, 241, 255)) },
                    { "MAGENTA200", ColorConvertU32ToFloat4(IM_COL32(255, 220, 232, 255)) },
                    { "MAGENTA300", ColorConvertU32ToFloat4(IM_COL32(255, 202, 221, 255)) },
                    { "MAGENTA400", ColorConvertU32ToFloat4(IM_COL32(255, 178, 206, 255)) },
                    { "MAGENTA500", ColorConvertU32ToFloat4(IM_COL32(255, 149, 189, 255)) },
                    { "MAGENTA600", ColorConvertU32ToFloat4(IM_COL32(250, 119, 170, 255)) },
                    { "MAGENTA700", ColorConvertU32ToFloat4(IM_COL32(239, 90, 152, 255)) },
                    { "MAGENTA800", ColorConvertU32ToFloat4(IM_COL32(222, 61, 130, 255)) },
                    { "MAGENTA900", ColorConvertU32ToFloat4(IM_COL32(200, 34, 105, 255)) },
                    { "MAGENTA1000", ColorConvertU32ToFloat4(IM_COL32(173, 9, 85, 255)) },
                    { "MAGENTA1100", ColorConvertU32ToFloat4(IM_COL32(142, 0, 69, 255)) },
                    { "MAGENTA1200", ColorConvertU32ToFloat4(IM_COL32(112, 0, 55, 255)) },
                    { "MAGENTA1300", ColorConvertU32ToFloat4(IM_COL32(84, 3, 42, 255)) },
                    { "MAGENTA1400", ColorConvertU32ToFloat4(IM_COL32(60, 6, 29, 255)) }
                } };

                constexpr std::pair<const char*, ImVec4> operator[](uint32_t idx) const {
                    return Values[idx];
                }

                constexpr ImVec4 operator()(uint32_t idx) const {
                    return operator[](idx).second;
                }
            } Light;

            constexpr struct  Darkest {
                static constexpr std::array<std::pair<const char*, ImVec4>, 193> Values = { {
                    { "GRAY50", ColorConvertU32ToFloat4(IM_COL32(0, 0, 0, 255)) },
                    { "GRAY75", ColorConvertU32ToFloat4(IM_COL32(14, 14, 14, 255)) },
                    { "GRAY100", ColorConvertU32ToFloat4(IM_COL32(29, 29, 29, 255)) },
                    { "GRAY200", ColorConvertU32ToFloat4(IM_COL32(48, 48, 48, 255)) },
                    { "GRAY300", ColorConvertU32ToFloat4(IM_COL32(75, 75, 75, 255)) },
                    { "GRAY400", ColorConvertU32ToFloat4(IM_COL32(106, 106, 106, 255)) },
                    { "GRAY500", ColorConvertU32ToFloat4(IM_COL32(141, 141, 141, 255)) },
                    { "GRAY600", ColorConvertU32ToFloat4(IM_COL32(176, 176, 176, 255)) },
                    { "GRAY700", ColorConvertU32ToFloat4(IM_COL32(208, 208, 208, 255)) },
                    { "GRAY800", ColorConvertU32ToFloat4(IM_COL32(235, 235, 235, 255)) },
                    { "GRAY900", ColorConvertU32ToFloat4(IM_COL32(255, 255, 255, 255)) },
                    { "RED100", ColorConvertU32ToFloat4(IM_COL32(87, 0, 0, 255)) },
                    { "RED200", ColorConvertU32ToFloat4(IM_COL32(110, 0, 0, 255)) },
                    { "RED300", ColorConvertU32ToFloat4(IM_COL32(138, 0, 0, 255)) },
                    { "RED400", ColorConvertU32ToFloat4(IM_COL32(167, 0, 0, 255)) },
                    { "RED500", ColorConvertU32ToFloat4(IM_COL32(196, 7, 6, 255)) },
                    { "RED600", ColorConvertU32ToFloat4(IM_COL32(221, 33, 24, 255)) },
                    { "RED700", ColorConvertU32ToFloat4(IM_COL32(238, 67, 49, 255)) },
                    { "RED800", ColorConvertU32ToFloat4(IM_COL32(249, 99, 76, 255)) },
                    { "RED900", ColorConvertU32ToFloat4(IM_COL32(255, 129, 107, 255)) },
                    { "RED1000", ColorConvertU32ToFloat4(IM_COL32(255, 158, 140, 255)) },
                    { "RED1100", ColorConvertU32ToFloat4(IM_COL32(255, 183, 169, 255)) },
                    { "RED1200", ColorConvertU32ToFloat4(IM_COL32(255, 205, 195, 255)) },
                    { "RED1300", ColorConvertU32ToFloat4(IM_COL32(255, 223, 217, 255)) },
                    { "RED1400", ColorConvertU32ToFloat4(IM_COL32(255, 237, 234, 255)) },
                    { "ORANGE100", ColorConvertU32ToFloat4(IM_COL32(72, 24, 1, 255)) },
                    { "ORANGE200", ColorConvertU32ToFloat4(IM_COL32(92, 32, 0, 255)) },
                    { "ORANGE300", ColorConvertU32ToFloat4(IM_COL32(115, 43, 0, 255)) },
                    { "ORANGE400", ColorConvertU32ToFloat4(IM_COL32(138, 55, 0, 255)) },
                    { "ORANGE500", ColorConvertU32ToFloat4(IM_COL32(162, 68, 0, 255)) },
                    { "ORANGE600", ColorConvertU32ToFloat4(IM_COL32(186, 82, 0, 255)) },
                    { "ORANGE700", ColorConvertU32ToFloat4(IM_COL32(210, 98, 0, 255)) },
                    { "ORANGE800", ColorConvertU32ToFloat4(IM_COL32(232, 116, 0, 255)) },
                    { "ORANGE900", ColorConvertU32ToFloat4(IM_COL32(249, 137, 23, 255)) },
                    { "ORANGE1000", ColorConvertU32ToFloat4(IM_COL32(255, 162, 59, 255)) },
                    { "ORANGE1100", ColorConvertU32ToFloat4(IM_COL32(255, 188, 102, 255)) },
                    { "ORANGE1200", ColorConvertU32ToFloat4(IM_COL32(253, 210, 145, 255)) },
                    { "ORANGE1300", ColorConvertU32ToFloat4(IM_COL32(255, 226, 181, 255)) },
                    { "ORANGE1400", ColorConvertU32ToFloat4(IM_COL32(255, 239, 213, 255)) },
                    { "YELLOW100", ColorConvertU32ToFloat4(IM_COL32(53, 36, 0, 255)) },
                    { "YELLOW200", ColorConvertU32ToFloat4(IM_COL32(68, 47, 0, 255)) },
                    { "YELLOW300", ColorConvertU32ToFloat4(IM_COL32(86, 62, 0, 255)) },
                    { "YELLOW400", ColorConvertU32ToFloat4(IM_COL32(103, 77, 0, 255)) },
                    { "YELLOW500", ColorConvertU32ToFloat4(IM_COL32(122, 92, 0, 255)) },
                    { "YELLOW600", ColorConvertU32ToFloat4(IM_COL32(141, 108, 0, 255)) },
                    { "YELLOW700", ColorConvertU32ToFloat4(IM_COL32(161, 126, 0, 255)) },
                    { "YELLOW800", ColorConvertU32ToFloat4(IM_COL32(180, 144, 0, 255)) },
                    { "YELLOW900", ColorConvertU32ToFloat4(IM_COL32(199, 162, 0, 255)) },
                    { "YELLOW1000", ColorConvertU32ToFloat4(IM_COL32(216, 181, 0, 255)) },
                    { "YELLOW1100", ColorConvertU32ToFloat4(IM_COL32(233, 199, 0, 255)) },
                    { "YELLOW1200", ColorConvertU32ToFloat4(IM_COL32(247, 216, 4, 255)) },
                    { "YELLOW1300", ColorConvertU32ToFloat4(IM_COL32(249, 233, 97, 255)) },
                    { "YELLOW1400", ColorConvertU32ToFloat4(IM_COL32(252, 243, 170, 255)) },
                    { "CHARTREUSE100", ColorConvertU32ToFloat4(IM_COL32(32, 43, 0, 255)) },
                    { "CHARTREUSE200", ColorConvertU32ToFloat4(IM_COL32(42, 56, 0, 255)) },
                    { "CHARTREUSE300", ColorConvertU32ToFloat4(IM_COL32(54, 72, 0, 255)) },
                    { "CHARTREUSE400", ColorConvertU32ToFloat4(IM_COL32(66, 88, 0, 255)) },
                    { "CHARTREUSE500", ColorConvertU32ToFloat4(IM_COL32(79, 105, 0, 255)) },
                    { "CHARTREUSE600", ColorConvertU32ToFloat4(IM_COL32(93, 123, 0, 255)) },
                    { "CHARTREUSE700", ColorConvertU32ToFloat4(IM_COL32(107, 142, 0, 255)) },
                    { "CHARTREUSE800", ColorConvertU32ToFloat4(IM_COL32(122, 161, 0, 255)) },
                    { "CHARTREUSE900", ColorConvertU32ToFloat4(IM_COL32(138, 180, 3, 255)) },
                    { "CHARTREUSE1000", ColorConvertU32ToFloat4(IM_COL32(154, 198, 11, 255)) },
                    { "CHARTREUSE1100", ColorConvertU32ToFloat4(IM_COL32(170, 216, 22, 255)) },
                    { "CHARTREUSE1200", ColorConvertU32ToFloat4(IM_COL32(187, 232, 41, 255)) },
                    { "CHARTREUSE1300", ColorConvertU32ToFloat4(IM_COL32(205, 246, 72, 255)) },
                    { "CHARTREUSE1400", ColorConvertU32ToFloat4(IM_COL32(225, 253, 132, 255)) },
                    { "CELERY100", ColorConvertU32ToFloat4(IM_COL32(0, 47, 7, 255)) },
                    { "CELERY200", ColorConvertU32ToFloat4(IM_COL32(0, 61, 9, 255)) },
                    { "CELERY300", ColorConvertU32ToFloat4(IM_COL32(0, 77, 12, 255)) },
                    { "CELERY400", ColorConvertU32ToFloat4(IM_COL32(0, 95, 15, 255)) },
                    { "CELERY500", ColorConvertU32ToFloat4(IM_COL32(0, 113, 15, 255)) },
                    { "CELERY600", ColorConvertU32ToFloat4(IM_COL32(0, 132, 15, 255)) },
                    { "CELERY700", ColorConvertU32ToFloat4(IM_COL32(0, 151, 20, 255)) },
                    { "CELERY800", ColorConvertU32ToFloat4(IM_COL32(13, 171, 37, 255)) },
                    { "CELERY900", ColorConvertU32ToFloat4(IM_COL32(45, 191, 58, 255)) },
                    { "CELERY1000", ColorConvertU32ToFloat4(IM_COL32(80, 208, 82, 255)) },
                    { "CELERY1100", ColorConvertU32ToFloat4(IM_COL32(115, 224, 107, 255)) },
                    { "CELERY1200", ColorConvertU32ToFloat4(IM_COL32(147, 237, 131, 255)) },
                    { "CELERY1300", ColorConvertU32ToFloat4(IM_COL32(180, 247, 162, 255)) },
                    { "CELERY1400", ColorConvertU32ToFloat4(IM_COL32(213, 252, 202, 255)) },
                    { "GREEN100", ColorConvertU32ToFloat4(IM_COL32(10, 44, 28, 255)) },
                    { "GREEN200", ColorConvertU32ToFloat4(IM_COL32(7, 59, 36, 255)) },
                    { "GREEN300", ColorConvertU32ToFloat4(IM_COL32(0, 76, 46, 255)) },
                    { "GREEN400", ColorConvertU32ToFloat4(IM_COL32(0, 93, 57, 255)) },
                    { "GREEN500", ColorConvertU32ToFloat4(IM_COL32(0, 111, 69, 255)) },
                    { "GREEN600", ColorConvertU32ToFloat4(IM_COL32(0, 130, 82, 255)) },
                    { "GREEN700", ColorConvertU32ToFloat4(IM_COL32(0, 149, 98, 255)) },
                    { "GREEN800", ColorConvertU32ToFloat4(IM_COL32(28, 168, 114, 255)) },
                    { "GREEN900", ColorConvertU32ToFloat4(IM_COL32(52, 187, 132, 255)) },
                    { "GREEN1000", ColorConvertU32ToFloat4(IM_COL32(75, 205, 149, 255)) },
                    { "GREEN1100", ColorConvertU32ToFloat4(IM_COL32(103, 222, 168, 255)) },
                    { "GREEN1200", ColorConvertU32ToFloat4(IM_COL32(137, 236, 188, 255)) },
                    { "GREEN1300", ColorConvertU32ToFloat4(IM_COL32(177, 244, 209, 255)) },
                    { "GREEN1400", ColorConvertU32ToFloat4(IM_COL32(214, 249, 228, 255)) },
                    { "SEAFOAM100", ColorConvertU32ToFloat4(IM_COL32(18, 43, 42, 255)) },
                    { "SEAFOAM200", ColorConvertU32ToFloat4(IM_COL32(19, 57, 55, 255)) },
                    { "SEAFOAM300", ColorConvertU32ToFloat4(IM_COL32(16, 73, 70, 255)) },
                    { "SEAFOAM400", ColorConvertU32ToFloat4(IM_COL32(3, 91, 88, 255)) },
                    { "SEAFOAM500", ColorConvertU32ToFloat4(IM_COL32(0, 108, 104, 255)) },
                    { "SEAFOAM600", ColorConvertU32ToFloat4(IM_COL32(0, 127, 121, 255)) },
                    { "SEAFOAM700", ColorConvertU32ToFloat4(IM_COL32(0, 146, 140, 255)) },
                    { "SEAFOAM800", ColorConvertU32ToFloat4(IM_COL32(0, 165, 159, 255)) },
                    { "SEAFOAM900", ColorConvertU32ToFloat4(IM_COL32(26, 185, 178, 255)) },
                    { "SEAFOAM1000", ColorConvertU32ToFloat4(IM_COL32(66, 202, 195, 255)) },
                    { "SEAFOAM1100", ColorConvertU32ToFloat4(IM_COL32(102, 218, 211, 255)) },
                    { "SEAFOAM1200", ColorConvertU32ToFloat4(IM_COL32(139, 232, 225, 255)) },
                    { "SEAFOAM1300", ColorConvertU32ToFloat4(IM_COL32(179, 242, 237, 255)) },
                    { "SEAFOAM1400", ColorConvertU32ToFloat4(IM_COL32(215, 248, 244, 255)) },
                    { "CYAN100", ColorConvertU32ToFloat4(IM_COL32(0, 41, 68, 255)) },
                    { "CYAN200", ColorConvertU32ToFloat4(IM_COL32(0, 54, 88, 255)) },
                    { "CYAN300", ColorConvertU32ToFloat4(IM_COL32(0, 69, 108, 255)) },
                    { "CYAN400", ColorConvertU32ToFloat4(IM_COL32(0, 86, 128, 255)) },
                    { "CYAN500", ColorConvertU32ToFloat4(IM_COL32(0, 103, 147, 255)) },
                    { "CYAN600", ColorConvertU32ToFloat4(IM_COL32(0, 121, 167, 255)) },
                    { "CYAN700", ColorConvertU32ToFloat4(IM_COL32(0, 140, 186, 255)) },
                    { "CYAN800", ColorConvertU32ToFloat4(IM_COL32(4, 160, 205, 255)) },
                    { "CYAN900", ColorConvertU32ToFloat4(IM_COL32(23, 180, 221, 255)) },
                    { "CYAN1000", ColorConvertU32ToFloat4(IM_COL32(57, 199, 234, 255)) },
                    { "CYAN1100", ColorConvertU32ToFloat4(IM_COL32(96, 216, 243, 255)) },
                    { "CYAN1200", ColorConvertU32ToFloat4(IM_COL32(134, 230, 250, 255)) },
                    { "CYAN1300", ColorConvertU32ToFloat4(IM_COL32(170, 242, 255, 255)) },
                    { "CYAN1400", ColorConvertU32ToFloat4(IM_COL32(206, 249, 255, 255)) },
                    { "BLUE100", ColorConvertU32ToFloat4(IM_COL32(0, 38, 81, 255)) },
                    { "BLUE200", ColorConvertU32ToFloat4(IM_COL32(0, 50, 106, 255)) },
                    { "BLUE300", ColorConvertU32ToFloat4(IM_COL32(0, 64, 135, 255)) },
                    { "BLUE400", ColorConvertU32ToFloat4(IM_COL32(0, 78, 166, 255)) },
                    { "BLUE500", ColorConvertU32ToFloat4(IM_COL32(0, 92, 200, 255)) },
                    { "BLUE600", ColorConvertU32ToFloat4(IM_COL32(6, 108, 231, 255)) },
                    { "BLUE700", ColorConvertU32ToFloat4(IM_COL32(29, 128, 245, 255)) },
                    { "BLUE800", ColorConvertU32ToFloat4(IM_COL32(64, 150, 243, 255)) },
                    { "BLUE900", ColorConvertU32ToFloat4(IM_COL32(94, 170, 247, 255)) },
                    { "BLUE1000", ColorConvertU32ToFloat4(IM_COL32(124, 189, 250, 255)) },
                    { "BLUE1100", ColorConvertU32ToFloat4(IM_COL32(152, 206, 253, 255)) },
                    { "BLUE1200", ColorConvertU32ToFloat4(IM_COL32(179, 222, 254, 255)) },
                    { "BLUE1300", ColorConvertU32ToFloat4(IM_COL32(206, 234, 255, 255)) },
                    { "BLUE1400", ColorConvertU32ToFloat4(IM_COL32(227, 243, 255, 255)) },
                    { "INDIGO100", ColorConvertU32ToFloat4(IM_COL32(26, 29, 97, 255)) },
                    { "INDIGO200", ColorConvertU32ToFloat4(IM_COL32(35, 39, 125, 255)) },
                    { "INDIGO300", ColorConvertU32ToFloat4(IM_COL32(46, 50, 158, 255)) },
                    { "INDIGO400", ColorConvertU32ToFloat4(IM_COL32(58, 63, 189, 255)) },
                    { "INDIGO500", ColorConvertU32ToFloat4(IM_COL32(73, 78, 216, 255)) },
                    { "INDIGO600", ColorConvertU32ToFloat4(IM_COL32(90, 96, 235, 255)) },
                    { "INDIGO700", ColorConvertU32ToFloat4(IM_COL32(110, 115, 246, 255)) },
                    { "INDIGO800", ColorConvertU32ToFloat4(IM_COL32(132, 136, 253, 255)) },
                    { "INDIGO900", ColorConvertU32ToFloat4(IM_COL32(153, 157, 255, 255)) },
                    { "INDIGO1000", ColorConvertU32ToFloat4(IM_COL32(174, 177, 255, 255)) },
                    { "INDIGO1100", ColorConvertU32ToFloat4(IM_COL32(194, 196, 255, 255)) },
                    { "INDIGO1200", ColorConvertU32ToFloat4(IM_COL32(212, 213, 255, 255)) },
                    { "INDIGO1300", ColorConvertU32ToFloat4(IM_COL32(227, 228, 255, 255)) },
                    { "INDIGO1400", ColorConvertU32ToFloat4(IM_COL32(240, 240, 255, 255)) },
                    { "PURPLE100", ColorConvertU32ToFloat4(IM_COL32(50, 16, 104, 255)) },
                    { "PURPLE200", ColorConvertU32ToFloat4(IM_COL32(67, 13, 140, 255)) },
                    { "PURPLE300", ColorConvertU32ToFloat4(IM_COL32(86, 16, 173, 255)) },
                    { "PURPLE400", ColorConvertU32ToFloat4(IM_COL32(106, 29, 200, 255)) },
                    { "PURPLE500", ColorConvertU32ToFloat4(IM_COL32(126, 49, 222, 255)) },
                    { "PURPLE600", ColorConvertU32ToFloat4(IM_COL32(145, 70, 236, 255)) },
                    { "PURPLE700", ColorConvertU32ToFloat4(IM_COL32(162, 94, 246, 255)) },
                    { "PURPLE800", ColorConvertU32ToFloat4(IM_COL32(178, 119, 250, 255)) },
                    { "PURPLE900", ColorConvertU32ToFloat4(IM_COL32(192, 143, 252, 255)) },
                    { "PURPLE1000", ColorConvertU32ToFloat4(IM_COL32(206, 166, 253, 255)) },
                    { "PURPLE1100", ColorConvertU32ToFloat4(IM_COL32(219, 188, 254, 255)) },
                    { "PURPLE1200", ColorConvertU32ToFloat4(IM_COL32(230, 207, 255, 255)) },
                    { "PURPLE1300", ColorConvertU32ToFloat4(IM_COL32(240, 224, 255, 255)) },
                    { "PURPLE1400", ColorConvertU32ToFloat4(IM_COL32(248, 237, 255, 255)) },
                    { "FUCHSIA100", ColorConvertU32ToFloat4(IM_COL32(70, 14, 68, 255)) },
                    { "FUCHSIA200", ColorConvertU32ToFloat4(IM_COL32(93, 9, 92, 255)) },
                    { "FUCHSIA300", ColorConvertU32ToFloat4(IM_COL32(120, 0, 120, 255)) },
                    { "FUCHSIA400", ColorConvertU32ToFloat4(IM_COL32(146, 0, 147, 255)) },
                    { "FUCHSIA500", ColorConvertU32ToFloat4(IM_COL32(169, 19, 170, 255)) },
                    { "FUCHSIA600", ColorConvertU32ToFloat4(IM_COL32(191, 43, 191, 255)) },
                    { "FUCHSIA700", ColorConvertU32ToFloat4(IM_COL32(211, 65, 213, 255)) },
                    { "FUCHSIA800", ColorConvertU32ToFloat4(IM_COL32(228, 91, 229, 255)) },
                    { "FUCHSIA900", ColorConvertU32ToFloat4(IM_COL32(239, 120, 238, 255)) },
                    { "FUCHSIA1000", ColorConvertU32ToFloat4(IM_COL32(246, 149, 243, 255)) },
                    { "FUCHSIA1100", ColorConvertU32ToFloat4(IM_COL32(251, 175, 246, 255)) },
                    { "FUCHSIA1200", ColorConvertU32ToFloat4(IM_COL32(254, 199, 248, 255)) },
                    { "FUCHSIA1300", ColorConvertU32ToFloat4(IM_COL32(255, 220, 250, 255)) },
                    { "FUCHSIA1400", ColorConvertU32ToFloat4(IM_COL32(255, 235, 252, 255)) },
                    { "MAGENTA100", ColorConvertU32ToFloat4(IM_COL32(83, 3, 41, 255)) },
                    { "MAGENTA200", ColorConvertU32ToFloat4(IM_COL32(106, 0, 52, 255)) },
                    { "MAGENTA300", ColorConvertU32ToFloat4(IM_COL32(133, 0, 65, 255)) },
                    { "MAGENTA400", ColorConvertU32ToFloat4(IM_COL32(161, 0, 78, 255)) },
                    { "MAGENTA500", ColorConvertU32ToFloat4(IM_COL32(186, 22, 93, 255)) },
                    { "MAGENTA600", ColorConvertU32ToFloat4(IM_COL32(209, 43, 114, 255)) },
                    { "MAGENTA700", ColorConvertU32ToFloat4(IM_COL32(227, 69, 137, 255)) },
                    { "MAGENTA800", ColorConvertU32ToFloat4(IM_COL32(241, 97, 156, 255)) },
                    { "MAGENTA900", ColorConvertU32ToFloat4(IM_COL32(252, 124, 173, 255)) },
                    { "MAGENTA1000", ColorConvertU32ToFloat4(IM_COL32(255, 152, 191, 255)) },
                    { "MAGENTA1100", ColorConvertU32ToFloat4(IM_COL32(255, 179, 207, 255)) },
                    { "MAGENTA1200", ColorConvertU32ToFloat4(IM_COL32(255, 202, 221, 255)) },
                    { "MAGENTA1300", ColorConvertU32ToFloat4(IM_COL32(255, 221, 233, 255)) },
                    { "MAGENTA1400", ColorConvertU32ToFloat4(IM_COL32(255, 236, 243, 255)) },
                } };

                constexpr std::pair<const char*, ImVec4> operator[](uint32_t idx) const {
                    return Values[idx];
                }

                constexpr ImVec4 operator()(uint32_t idx) const {
                    return operator[](idx).second;
                }

            } Darkest;

        }; // Colors

        struct  Props {
            bool IsDark = true;
            float FontSize = 0.0f;
            ImVec2 Padding = {};
            ImVec2 WindowPadding = {};

            ImVec2 IconSize = {};
            ImVec2 ButtonMinSize = {};

            [[nodiscard]] auto Color(uint32_t idx) const {
                return IsDark ? Colors::Darkest(idx) : Colors::Light(idx);
            }
        };

		 void ShowStyleEditor(bool* p_open);

		 void Init(float fontSize = 16);

		 void StyleColorsLight();

		 void StyleColorsDark();

		 const Props& GetProps();

		 ImFont* GetFont(Font font);

    } // ImGui::Spectrum

     bool ColoredButton(const char* label, const ImVec4& bgColor, const ImVec4& fgColor, const ImVec2& size);

     bool DisablingButton(const char* label, bool disabled = false, const ImVec2& size = {0, 0});

     bool DisablingColoredButton(const char* label, const ImVec4& bgColor, const ImVec4& fgColor, bool disabled = false, const ImVec2& size = {0, 0});

     void SeparatorV();

} // ImGui

namespace ImPlot {

	 void PlotTextColored(const ImVec4& color, const char* text, double x, double y, const ImVec2& pixel_offset = {0, 0}, ImPlotTextFlags flags = 0);

} // ImPlot
