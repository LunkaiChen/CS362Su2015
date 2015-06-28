CS 362 
Assignment 2 – Documentation.txt -renamed to .c per instructions on Piazza
Rob Sparks, sparksro@onid.oregonstate.edu

Understanding Documentation
Card Smithy  
	-Called in switch()
	-calls drawCard() and draws 3 cards
	-calls discardCard() and discards card from hand
	- Cost of smithy card is 4. {from getCost()}

Cards Adventurer
	-Called in switch
	-Cost of adventurer card is 6.   {from getCost()}
	-While drawntreasure is less that 2:
		-Conditionally shuffles, discards and adds to the deck.
		-Calls drawCard() and sets most recently drawn card as top card. Additionally records if 		its a coin card.
	-While z (not sure exaclty what z is yet) is greater than 0
		-discards all cards in play
Method discardCard()
	-takes as arguments number of handPos, number of currentPlayer, struct player state, and 	number  to trash flag.
	-if trash flag is less than 1 adds card to played file and sets played card state to -1.
	-if the last card is played reduces player card count by one
	-if there is one card in players hand reduces card count by one.
		- else replaces discarded card with last card in hand.
		- else sets last card to -1
		- reduces number of cards in had

Method updateCoins()
	-takes as arguments player number, struct gameState, number of bonuses
	-resets coin counts to 0
	-recounts the current hand and resets coin count accordingly
	-adds a bonus
