/****

Global Notes: Once the code was refactored, the code for each card in the switch statement under cardEffect() was replaced with the corresponding new function. 

=====Smithy=========
The Smithy card has been added as a new method called "playSmithy." the method takes in the following variables: int currentPlayer, int handPOs, struct gameState *state.

[BUG]
- Two actions are added when the Smithy is played: state->numActions = state->numActions + 2;

=====Adventurer=====
The Adventurer card has been added as a new method called "playAdventurer." The method takes in the following variables: int currentPlayer, struct gameState *state. 

[BUG]
- The while statement has been changed from while(drawntreasure <2) to while(drawntreasure <3)
- The option to check for copper as a treasure card has been removed: if (cardDrawn == copper || cardDrawn == silver || cardDrawn == gold) to if (cardDrawn == silver || cardDrawn == gold)

=====CouncilRoom====
The Council Room card has been added as a new method called "playCouncil_room." The method takes in the following variables: int handPos, int currentPlayer, struct gameState *state.

[BUG]
- Instead of incrementing the number of buys, the number of buys is decremented (state->numBuys--;)

=====Village========
The Village card has been added as a new method called "playVillage." The method takes in the following variables: int currentPlayer, int handPos, struct gameState *state.

[BUG]
- An additional draw card option added under the code to add two actions. 

=====Remodel========
The Remodel card has been added as a new method called "playRemodel." The method takes in the following variables: int currentPlayer, int handPos, int choice1, int choice2, struct gameState *state. 

[BUG]
No bugs introduced. 


***/