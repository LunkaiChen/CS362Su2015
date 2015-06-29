Smithy:
It has a cost value of 4, from the getCost function.
When case smithy is called, it loops through drawCard function call three times, effectively drawing 3 cards for the current player.
It then calls the discardCard function on the current hand position, with the trash flagged as 0 which puts it back in the deck.

Adventurer:
Since it is lower than or equal to itself, it is an action card.
It has a cost value of 6, from the getCost function.
While it has drawn less than two treasure cards(drawtreasure < 2), it shuffles if deck is empty, then draws a card for the current player.
	if the card that was drawn is a treasure, then it increments drawtreasure by 1, else it stores the drawn card in the temp hand array.
	Once 2 treasure cards have been drawn, all cards stored in temphand are discarded from the current players hand.

discardCard:
If trashFlag variable is lower than 1, then the card is added back to the pile.
The card is then set as played.
If the current card is the last card in the hand array, then the number of cards in hand is reduced by 1.
If there is only one card in the hand array, then hand is reduced by 1.
In any other circumstance then the discarded card is replaced with the last card in hand, set to -1 then the hand is reduced by 1.

updateCoins:
Coin count is first set to 0.
updateCoins then loops through each treasure, adding 1 if copper, 2 if silver, 3 if gold.
In then adds any bonus that was set.