Smithy Card refactored into its own function.

Added:
void smithyCard(struct gameState *state, int currentPlayer, int handPos);
to dominion_helpers.h

Bug added to Smithy Card:  draws 2 cards instead of 3

Adventurer Card refactored into its own function.

Added 
void adventurerCard(struct gameState *state, int currentPlayer);
to dominion_helpers.h

Bug added to Adventurer Card:  drawnTreasure decrements instead of increments

Village Card refactored into its own function.  
	
Added:
void villageCard(struct gameState *state, int currentPlayer, int handPos);
to dominion_helpers.h

Bug added to Village Card:  draws 2 cards instead of 1

Steward Card refactored into its own function.
	
Added
void stewardCard(int choice1, int choice2, int choice3, struct gameState *state, int currentPlayer, int handPos);
to dominion_helpers.h

bug added to stewardCard(): adds 5 coins instead of 2

Council Room Card refactored into its own function

Added:
void councilRoomCard(struct gameState *state, int currentPlayer, int handPos);
to dominion_helpers.h

Bug added to councilRoomCard():  draws a card for the wrong player
