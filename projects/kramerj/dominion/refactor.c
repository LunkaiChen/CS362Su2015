Smithy:
I simply created a function and then copied the existing code over. I passed in currentPlayer, state pointer, and handPos. 
Bug: I changed the for loop from i < 3 to i <= 3

Adventurer:
I copied over the logic of the code, plus 3 variables: cardDrawn, temphand[], and drawntreasure. 
Bug: In the second if statement and the first else, right after where temphand[z]=cardDrawn, the state->handCount[currentPlayer]—- is changed to state->handCount[currentPlayer]++. With —- it is supposed to remove the top of the card, but with ++ it will do the opposite. 

Council_Room:
I simply copied the code over and created the function. I passed in currentPlayer, state pointer, and handPos. 
Bug: In the second for loop the i changed from 0 to 1. 

Village:
I, once again, simply copied the code over and created the function. I passed in currentPlayer, state pointer, and handPos. 
Bug: In the discardCard function I changed the zero to one. Instead of discardCard(handPos, currentPlayer, state, 0) it is now discardCard(handPos, currentPlayer, state, 1).

Minion:
I copied over the code / logic from the case statement. I passed into the function currentPlayer, gameState *state, choice1, choice2, handPos.
Bug: In the first else if statement I changed choice2 to choice1. 


