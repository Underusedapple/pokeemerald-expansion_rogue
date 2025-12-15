#include "global.h"
#include "item_choices.h"
#include "constants/items.h" // Assuming this has all your ITEM_ID definitions

// This list should contain the ITEM_IDs (e.g., ITEM_POTION, ITEM_ANTIDOTE) 
// that fit your desired classifications (HEALTH_RECOVERY, FIELD_USE, etc.).
const u16 gStarterItemsChoices[] = {
    ITEM_POTION,
    ITEM_FULL_HEAL,
    ITEM_GREAT_BALL,
    ITEM_RARE_CANDY,
    ITEM_X_ATTACK,
    ITEM_PP_MAX,
};

// Calculate the count of items in the list.
const u32 gStarterItemsChoicesCount = ARRAY_COUNT(gStarterItemsChoices);