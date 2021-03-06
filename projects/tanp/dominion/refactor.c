//Philip Tan
//CS 362 SE II
//Assignment 2 - Dominion Game Documentation - refactor.txt

//I decided to change the council room, feast, and mine cards in addition to the smithy and adventurer cards.

//SMITHY:
//Smithy is now in a function called Smithy_Ref. It takes handPos, currentPlayer, and the gameState struct as parameters.

//To introduce a bug, I have changed the drawcard function to draw only 2 cards instead of 3.


//ADVENTURER:
//Adventurer is now in a function called Adventurer_Ref. It takes currentPlayer, and the gameState struct as parameters.

//To introduce a bug, I have removed the cardDrawn == gold condition from the drawnTreasure increment. I have also changed the while loop to loop 3 times instead of 2.


//FEAST:
//Feast is now in a function called Feast_Ref. It takes currentPlayer, choice1, and the gameState struct as parameters.

//To introduce a bugs, I did two things, first I changed the updateCoins so that instead of allowing a card costing up to 5 to be gained, only a card up to cost of 4 can be gained. Then I also changed the variable that the while loop condition uses to stay at 1, so the while loop can never break.


//COUNCIL ROOM:
//Council Room is now in a function called CouncilRoom_Ref. It takes currentPlayer, handPos, and the gameState struct as parameters.

//To introduce a bug I changed the number of buys to be +2 instead of +1.


//MINE:
//The Mine card is now refactored into a function called Mine_Ref. It takes currentPlayer, handPos, choice1, choice2, and the struct gameState as parameters.

//To introduce a bug, I changed the gainCard parameter of 2, that tells it to add the card to hand, to a 3.