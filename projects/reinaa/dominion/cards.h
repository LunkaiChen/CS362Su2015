#ifndef REINAA_DOMINION_CARDS
#define REINAA_DOMINION_CARDS
#include "dominion.h"
#include "dominion_helpers.h"

int adventurerEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);

int tributeEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);

int smithyEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);

int villageEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);

int great_hallEffect(struct gameState *state, int handPos);

#endif
