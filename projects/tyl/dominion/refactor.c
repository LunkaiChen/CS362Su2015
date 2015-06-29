/*
refactor.txt
*/

//Added void adventurerCard(int currentPlayer, struct gameSate *state) function definition in dominion.c
//Added void adventurerCard(int currentPlayer, struct gameSate *state) function declaration in dominion.h

//Added void smithyCard(int currentPlayer, struct gameState *state, int handPos) function definition in dominion.c
//Added void smithyCard(int currentPlayer, struct gameState *state, int handPos) function declaration in dominion.h

//Added void council_roomCard(int currentPlayer, struct gameState *state, int handPos) function definition in dominion.c
//Added void council_roomCard(int currentPlayer, struct gameState *state, int handPos) function declaration in dominion.h

//Added void feastCard(int currentPlayer, struct gameState *state, int handPos, int choice1) function definition in dominion.c
//Added void feastCard(int currentPlayer, struct gameState *state, int handPos, int choice1) function declaration in dominion.h

//Added int mineCard(int currentPlayer, struct gameState *state, int handPos, int choice1, int choice2) function definition in dominion.c
//Added int mineCard(int currentPlayer, struct gameState *state, int handPos, int choice1, int choice2) function declaration in dominion.h

/*
Introduced bug to adventererCard() function in dominion.c
Instead of increasing treasure count if drawncard is copper, silver or gold, it will only increase the treasure count if the drawn card is copper

Introduced bug to smithyCard() function in dominion.c
It no longer discards the card after being played

Introduced bug to council_roomCard() function in dominion.c
It no longer increases the state buy count

Introduced bug to feastCard() function in dominion.c
It also stops allowing the player to buy cards when the choice card is too expensive
*/