#ifndef _DOMINION_HELPERS_H
#define _DOMINION_HELPERS_H

#include "dominion.h"

int drawCard(int player, struct gameState *state);
int updateCoins(int player, struct gameState *state, int bonus);
int discardCard(int handPos, int currentPlayer, struct gameState *state, 
		int trashFlag);
int gainCard(int supplyPos, struct gameState *state, int toFlag, int player);
int getCost(int cardNumber);
int cardEffect(int card, int choice1, int choice2, int choice3, 
	       struct gameState *state, int handPos, int *bonus);
void playAdventurer(int temphand[], struct gameState *state, int currentPlayer);
void playSmithy(int currentPlayer, struct gameState *state, int handPos);
void playVillage(int currentPlayer, struct gameState *state, int handPos);
void playBaron(int currentPlayer, struct gameState *state, int choice1);
void playCouncilRoom(int currentPlayer, struct gameState *state, int handPos);
#endif
