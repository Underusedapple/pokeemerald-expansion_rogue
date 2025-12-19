#include "constants/flags.h"
#include "global.h"
#include "event_data.h"

// static const u32 sLevelCapFlagMap[][2] =
// {
//     {FLAG_BADGE01_GET, 10},
//     {FLAG_BADGE02_GET, 20},
//     {FLAG_BADGE03_GET, 30},
//     {FLAG_BADGE04_GET, 40},
//     {FLAG_BADGE05_GET, 50},
//     {FLAG_BADGE06_GET, 60},
//     {FLAG_BADGE07_GET, 70},
//     {FLAG_BADGE08_GET, 80},
//     {FLAG_IS_CHAMPION, 100},
// };


static const u32 sBattleMonLevelMap[9][2] =
{
    {FLAG_BADGE01_GET, 5},
    {FLAG_BADGE02_GET, 15},
    {FLAG_BADGE03_GET, 25},
    {FLAG_BADGE04_GET, 35},
    {FLAG_BADGE05_GET, 45},
    {FLAG_BADGE06_GET, 55},
    {FLAG_BADGE07_GET, 65},
    {FLAG_BADGE08_GET, 75},
    {FLAG_IS_CHAMPION, 100},
};
u8 GetPokeArenaEnemyMonLevel(void)
{
    
    for (u8 i = 0; i < ARRAY_COUNT(sBattleMonLevelMap); i++)
    {
        if (!FlagGet(sBattleMonLevelMap[i][0]))
            return sBattleMonLevelMap[i][1];
    }
    u8 highestLevel = ARRAY_COUNT(sBattleMonLevelMap) - 1;
    return sBattleMonLevelMap[highestLevel][1];
}