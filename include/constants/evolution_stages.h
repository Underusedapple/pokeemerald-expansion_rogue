#ifndef GUARD_EVOLUTION_STAGES_H
#define GUARD_EVOLUTION_STAGES_H

#include "constants/species.h"

// This file contains the declarations for arrays listing non-Legendary/Mythical
// Pokémon species categorized by their maximum evolutionary stage (1, 2, or 3).
// These lists are used for various game logic checks.
// The actual definitions (the lists themselves) are now located in src/data/evolution_stages.c

// This section is protected from the assembly preprocessor (__ASSEMBLER__)
// to prevent "bad instruction" errors when included in assembly files.
// --- STAGE 1 EVOLUTION POKÉMON (Base Forms & Single-Stage Non-Legendary) ---
// Base forms (Bulbasaur, Caterpie, Klink) and Single-stage species (Tauros, Lapras, Pincurchin).
#define gStage1EvoMons

// --- STAGE 2 EVOLUTION POKÉMON (Intermediate Forms AND Final Forms of 2-Stage Lines) ---
// Examples: Ivysaur, Fearow, Raticate (intermediates) and Gyarados, Electabuzz (final 2-stage).
#define gStage2EvoMons

// --- STAGE 3 EVOLUTION POKÉMON (Final Forms of 3-Stage Lines) ---
// Examples: Venusaur, Charizard, Salamence.
#define gStage3EvoMons


// Macro to get the number of Pokémon in each stage array (defined in the .c file)
#define gStage1EvoMonsCount
#define gStage2EvoMonsCount
#define gStage3EvoMonsCount

#endif // GUARD_EVOLUTION_STAGES_H