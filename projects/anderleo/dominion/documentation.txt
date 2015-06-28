DOCUMENTATION FILE - ASSIGNMENT 2

Smithy Card
===========
When the smithy card case is triggered, the program immediately encounters a for loop that calls the drawCard
method 3 times, passing in the currentPlayer and state as arguments.  Next, the discardCard() method is called,
passing the handPos of the smithy card, the currentPlayer and state as arguments.

This is the equivalent of the smithy card's real actions which is to draw 3 more cards for the player who then immediately
discards the smithy card.


Adventurer Card
===========
When the adventurer card case is triggered, the program immediately encounters a while loop that tracks the number of treasures
drawn and will terminate when the player has drawn two. This while loop handles the following: 
	An if statement at the loops beginning manages shuffling of an empty deck.
	The drawCard method is then called, passing the currentPlayer and state as arguments. 
	The top card of the deck is then drawn.
	An if statement checks to see whether the card is a copper, silver, or gold treasure card.
		If the card is a treasure card, our treasure counter is incremented.
		Else it is simply added to the temp-hand and the temp-hand count is incremented.
Next, a while loop will empty the temp hand using calls to discard		

discardCard() Method
===========
The discardCard() method receives the following variables as arguments: supplyPos (int), gameState *state (struct), toFlag (int), player (int).
When the discardCard method is called, the initial item is an if statement that checks to see if the trashFlag is set to indicate removal of a card.
    If not, the card is discarded normally and the discarded card is added to the played pile. 
    The played pile is then incremented.
The played card is then set to -1 to indicate discard.
A series of if/else-if/else statements is then encounterd that handle how to handle the hand after removal of the card.
The initial if statement checks to see if the last card in the and was played, decrementing the handCount of the player if so.
Else if that isn't the case and the player is on the last card in their hand, the handCount of the player is also decremented.
Else, the discarded card is replaced with the last card in the palyers hand, the last card is set to -1, and the handCount of the player is decremented.

updateCoins() Method
============
The updateCoins method receives the following variables as arguments: player (int), gameState *state (struct), bonus (int).
When the updateCoisn method is called, it initializes a loop-counter, sets the coins member of state to 0, and enters a for loop that is limited
such that the loop-counter must be less than the player's handCount. This loop increments over the players hand and updates the players coins if a 
treasure card is encountered, such that:
	If a copper is found, coins are incremented by 1.
	Else if a silver is found, coins are incremented by 2.
	Else if a gold is found, coins are incremented by 3.
Finally, the bonus (if any) is added to the coins value.
 







