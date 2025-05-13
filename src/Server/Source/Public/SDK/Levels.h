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
    { "_pvz/Levels/Coastal/Level_COOP_Coastal/Level_COOP_Coastal", "SHARKBITE SHORES" },
    { "_pvz/Levels/Coastal/Level_COOP_Coastal/Level_COOP_Coastal", "PORT SCALLYWAG" },
    { "_pvz/Levels/Desert/Level_COOP_Desert/Level_COOP_Desert", "JEWEL JUNCTION" },
    { "_pvz/Levels/Desert/Level_COOP_Palms/Level_COOP_Palms", "CRASH COURSE" },
    { "_pvz/Levels/Mainstreet/Level_COOP_Mainstreet/Level_COOP_Mainstreet", "GARDEN CENTER" },
    { "_pvz/Levels/Mainstreet/Level_COOP_Mainstreet/Level_COOP_Mainstreet", "CHOMP TOWN" },
    { "_pvz/Levels/COOP_Suburbia/Level_COOP_Suburbia/Level_COOP_Suburbia", "SUBURBAN FLATS" },
    { "_pvz/Levels/COOP_Suburbia/Level_COOP_Suburbia/Level_COOP_Suburbia", "ZOMBOSS ESTATE" }, //Not sure
    { "_pvz/Levels/Sandbox/Level_SuburbiaC/Level_SuburbiaC", "WALL-NUT HILLS" },
    { "_pvz/Levels/Sandbox/Level_Suburbia2/Level_Suburbia2", "MAIN STREET" },
    { "_pvz/Levels/Coastal/Rush_Coastal_001/Rush_Coastal_001", "DRIFTWOOD SHORES" },
    { "_pvz/Levels/Desert/Rush_Desert_001/Rush_Desert_001", "CACTUS CANYON" },
};

GameLevel GetGameLevel(const char* level);
} // namespace Kyber

// Unknown
// "_pvz/Levels/Coastal/Level_COOP_Coastal/Arena"
// "_pvz/Levels/COOP_Suburbia/Level_COOP_Suburbia/Stage"
// "_pvz/Levels/Mainstreet/Level_COOP_Mainstreet/Arena"
// "_pvz/Levels/Desert/Rush_Desert_001/1_Crashsite"
// "_pvz/Levels/Desert/Rush_Desert_001/2_Trailer_Park"
// "_pvz/Levels/Desert/Rush_Desert_001/3_Suburbs"
// "_pvz/Levels/Desert/Rush_Desert_001/4_Resort"
// "_pvz/Levels/Desert/Rush_Desert_001/6_Golf_Course"
