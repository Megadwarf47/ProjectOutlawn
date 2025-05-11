// Copyright BattleDash. All Rights Reserved.

#pragma once

#include <string>

namespace Kyber
{
struct GameLevel
{
    const char* level;
    const char* name;
};

static GameLevel s_game_levels[] = {
    { "_pvz/Levels/Coastal/Level_COOP_Coastal/Level_COOP_Coastal", "Driftwood Shores (Ops)" },
    { "_pvz/Levels/Coastal/Rush_Coastal_001/Rush_Coastal_001", "Driftwood Shores" },
    { "_pvz/Levels/COOP_Suburbia/Level_COOP_Suburbia/Level_COOP_Suburbia", "Level_COOP_Suburbia" },
    { "_pvz/Levels/Desert/Level_COOP_Desert/Level_COOP_Desert", "Level_COOP_Desert" },
    { "_pvz/Levels/Desert/Level_COOP_Palms/Level_COOP_Palms", "Crash Course" },
    { "_pvz/Levels/Desert/Level_COOP_001/Level_COOP_001", "Level_COOP_001" },
    { "_pvz/Levels/Level_Frontend_Gen3/Level_Frontend_Gen3", "Level_Frontend_Gen3" },
    { "_pvz/Levels/Mainstreet/Level_COOP_Mainstreet/Level_COOP_Mainstreet", "Level_COOP_Mainstreet" },
    { "_pvz/Levels/Sandbox/Level_Arena_Sandbox/Level_Arena_Sandbox", "Level_Arena_Sandbox" },
    { "_pvz/Levels/Sandbox/Level_COOP_Sandbox/Level_COOP_Sandbox", "Level_COOP_Sandbox" },
    { "_pvz/Levels/Sandbox/Level_Dylan_Mainstreet/Level_Dylan_Mainstreet", "Dylan_Mainstreet" },
    { "_pvz/Levels/Sandbox/Level_Shawbs_Sandbox/Level_Shawbs_Sandbox", "Shawbs_Sandbox" },
    { "_pvz/Levels/Sandbox/Level_Suburbia2/Level_Suburbia2", "Main Street" },
    { "_pvz/Levels/Sandbox/Level_SuburbiaC/Level_SuburbiaC", "SuburbiaC" },
};

GameLevel GetGameLevel(const char* level);
} // namespace Kyber
