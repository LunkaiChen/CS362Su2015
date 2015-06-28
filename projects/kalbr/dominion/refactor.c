Title: Refactor
Author: Ryan Kalb

6/28/15
- Took contents and dependent variables for Adventurer Card and placed in into its own function. The function is called 
int adventurerCard(int currentPlayer, struct gameState *state); it takes the currentPlayer and game state
- Added int councilRoomCard(int currentPlayer, struct gameState *state, int handPos); This replaces councilroom logic in cardEffect()
- Added int mineCard(int currentPlayer, struct gameState *state, int handPos, int choice1, int choice2);
Takes in information for the mineCard and is now a seperate function
- Added int villageCard(int currentPlayer, struct gameState *state, int handPos); This replaces villagecard in cardEffect
- Added smithyCard() replaces instance in card Effect.