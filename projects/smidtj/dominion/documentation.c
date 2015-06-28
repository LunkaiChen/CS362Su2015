Documentation - Jesse Smidt
smithy card:
	The smithy function calls the drawCard() function 3 times, adding three cards to the current player's hand.
	It then calls discardCard() on the smithy card that was just played (i.e. the handPos and on the currentPlayer).

adventurer card:
	This card is a little more complicated than the smithy card.  
	In a while loop that tests the condition that the number of drawn treasure cards is less than 2, the card:
		-checks if the deck is empty?
			-if yes, shuffles discards to form new deck
		-draws a card
		-if the card is a treasure card?
			-increments the drawn treasure counter
		-otherwise:
			-puts this card in a temporary hand
			-removes the card from the players hand
	A while loop then discards each card in the temporary hand until it is deleted.

discardCard():
	This function removes a card from the player's hand and either destroys (trashes) it, or places it in the played pile.
	peusdocode:
	if the trash flag is not set?
		- add card to played cards array
		- increment played cards counter
	- set played card to -1 (indicating badvalue if accessed - cards are enummed {0,1,2, ... , n})
	if the removal of the card empties the hand?
		- decrement the handcount
	else if the removal doesn't empty the hand, but leaves one remaining card?
		- decrement the handcount
	otherwise:
		- make second to last card the last card in hand
		- set previous last card to -1
		- decrement the handcount

updateCoins():
	This function simply counts the purchasing power of a player and sets it to the state variable
	-first it sets the count 0
	-it then counts the number of treasure cards in the player's hand, adding them to the state coin count by their value
	-it then adds any bonus values if passed
