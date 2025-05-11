// Copyright BattleDash. All Rights Reserved.

#pragma once

#include <Render/Windows/Window.h>

#include <Base/Version.h>

namespace Kyber
{
class CreditsWindow : public Window
{
public:
    // clang-format off
    const char* credits[11] = {
        ("Outlawn v" + KYBER_VERSION).c_str(),
        "Contributors:"
        "Silkker",
        "FlashHit",
        "bwarlDB",
        "zefanjajobse",
        "MixaDoDs",
        "Twig6943",
        "Special Thanks:",
        "ArmchairDevelopers",
        "CargoPants"
    };
    // clang-format on

    CreditsWindow();
    ~CreditsWindow();
    void Draw() override;
    bool IsEnabled() override;
};
} // namespace Kyber
