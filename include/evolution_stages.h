#ifndef GUARD_EVOLUTION_STAGES_H
#define GUARD_EVOLUTION_STAGES_H

// --- STAGE 1 EVOLUTION POKÉMON (Base Forms & Single-Stage Non-Legendary) ---
extern const u16 gStage1EvoMons[];

// --- STAGE 2 EVOLUTION POKÉMON (Intermediate Forms AND Final Forms of 2-Stage Lines) ---
extern const u16 gStage2EvoMons[];

// --- STAGE 3 EVOLUTION POKÉMON (Final Forms of 3-Stage Lines) ---
extern const u16 gStage3EvoMons[];


// Macro to get the number of Pokémon in each stage array (defined in the .c file)
extern const u32 gStage1EvoMonsCount;
extern const u32 gStage2EvoMonsCount;
extern const u32 gStage3EvoMonsCount;

#endif // GUARD_EVOLUTION_STAGES_H