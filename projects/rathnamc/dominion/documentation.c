Christopher Rathnam
CS362 - Assignment 2
06/27/2015

SMITHY CARD
Location in Code: Dominion.c - cardEffect Function, switch case smithy
Desc: The smithy card is an action card. It will allow the player to draw 3 more cars to the player's current drawing. After 
      card will be discarded.
	  
ADVENTURER CARD
Location in Code: Dominion.c - cardEffect Function, switch case adventurer
Desc: The adventurer card is an action card. It's suppose is to search for 2 treasure cards with in the deck. If two cards are 
not found, the deck will be reshuffled. If a card is found, it is added to the players hand. A side hand will be set up until two
treasure cards are located. The drawntreasure variable is used to search for the treasure cars. Once one if found, the variable is increaed
to keep track of how many have been located.

updateCoins():

This method tallies up the coin values of Gold, Silver, and Cooper in a players current hand and adds it to their totals.
The takes 3 arguments, the struct gameState, which passes in the card information. The struct utlizes the dominion.h file. 
The player, identifies the current player, and the bonus, which adds any bonus coin values to the total.

discardCard():

This method removes cards from the players hand. it first checks to see if the card is meant to be trashed.
If not the card is added back to the players pile. 
It takes 4 arguments:
currentPlayer - identifies which is the current player.
handPos - states the position of the card.
trashFlag - throws a flag to decide if a card should be discarded.

The state arguement calls a struct which stores the card information that will be utilized.
