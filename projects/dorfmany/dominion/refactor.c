/*
Yevgeniy Dorfman
dorfmany
CS 362-400
Summer 2015
Assignment 2

Refactored cards:

1.adventurer
2.smithy
3.council room
4.feast
5.mine

For all of these I moved code found inside of the switch statement into their own functions. I created new local variables where necessary in the functions to prevent having to pass too many variables. Functions protypes for each new function found below:

int adventurerCard(int player, struct gameState *state);
int smithyCard(int player, struct gameState *state, int handPos);
int councilRoomCard(int player, struct gameState *state, int handPos);
int feastCard(int player, struct gameState *state, int choice1);
int mineCard(int player, struct gameState *state, int choice1, int choice2, int handPos);

Introduced bugs:

1.adventurer: Changed drawntreasure to 1, the main while loop will not only loop until 1 treasure card is drawn
2.smithy: Changed loop function to loop 5 times, smithy now draws 5 cards instead of 3.
3.council room: Changed trash flag in discardCard call to 1, card will now be trashed instead of discarded.
4.feast: Changed supplyCount comparison to check against <= 1, user will now be told no cards of selected choice remain even if there is one

*/
