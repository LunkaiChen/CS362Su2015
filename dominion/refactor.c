Cards with Refactored Code:

smithy:

int playSmithy(int handPos, int currentPlayer, struct gameState *state)

Pasted the original code in this function and placed it at the end of dominion.c
Put function prototype in dominion.h

added function call in the switch statement in cardEffect:
playSmithy(handPos, currentPlayer, state);

Bugs added:
changed i<3 to i<2 in for loop which will result in drawing 2 cards instead of 3.
changed discardCard(handPos, currentPlayer, state, 0); to discardCard(handPos, currentPlayer, state, 1); 
This should result in card being trashed instead of being added to the played pile.

adventurer:

int playAdventurer(int handPos, int currentPlayer, struct gameState *state)

Pasted the original code in this function and placed it at the end of dominion.c
Put function prototype in dominion.h

added function call in the switch statement in cardEffect:
playAdventurer(handPos, currentPlayer, state);


Bugs added:
changed while(drawntreasure<2 to while(drawntreasure<3 //should result in 3 treasure cards drawn
Also changed (cardDrawn == copper || cardDrawn == silver || cardDrawn == gold) to (cardDrawn == copper || cardDrawn == silver || cardDrawn == gold || cardDrawn == estate)
This will count estate card as a treasure card.

village:

int playVillage(int handPos, int currentPlayer, struct gameState *state)

Pasted the original code in this function and placed it at the end of dominion.c
Put function prototype in dominion.h

added function call in the switch statement in cardEffect:
playVillage(handPos, currentPlayer, state);

Bugs added:
added for loop (Will draw 2 cards instead of 1)
int i;
//+1 Card
for (i = 0, i<2, i++)
{
   drawCard(currentPlayer, state);
}
Also changed: discardCard(handPos, currentPlayer, state, 0); to discardCard(handPos, currentPlayer, state, 1); 
This will cause card to be trashed instead of discarded

council room:

int playCouncilRoom(int handPos, int currentPlayer, struct gameState *state)

Pasted the original code in this function and placed it at the end of dominion.c
declared int i to be used as for loop counter

Put function prototype in dominion.h
added function call in the switch statement in cardEffect:
playCouncilRoom(handPos, currentPlayer, state);

Bugs added:
changed state->numBuys++; to state->numActions++; 
This will increment the number of actions cards a player can use instead of incrementing the number of buys a player can make
Also changed: discardCard(handPos, currentPlayer, state, 0); to discardCard(handPos, currentPlayer, state, 1); 
This will cause card to be trashed instead of discarded

minion:

int playMinion(int choice1, int choice2, int handPos, int currentPlayer, struct gameState *state)

Pasted the original code in this function and placed it at the end of dominion.c
declared int i to be used as for loop counter
declared int j to be used as a second for loop counter
Put function prototype in dominion.h

added function call in the switch statement in cardEffect:
playMinion(choice1, choice2, handPos, currentPlayer, state);

Bugs added:
changed state->numActions++; to state->numBuys++;
This will allow the player to make one more buy instead of increasing the number of action cards able to be played
Also changed discardCard(handPos, i, state, 0); to discardCard(handPos, i, state, 1);
This will cause cards to be trashed instead of discarded.
