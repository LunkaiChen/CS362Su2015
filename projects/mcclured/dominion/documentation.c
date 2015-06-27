adventurer card
	1. If treasure cards are less than two, if current player's deck count less than 1, then shuffle deck
	2. Draw card
	3. If drawn card is copper, silver, or gold--the treasure increases
 	4. Otherwise, the temporary hand of cards is increased and contains the drawn card
	5. While the card hand is greater than or equal to zero, player discards a card
smithy card
	1. Draws three cards
	2. Discard card
discardCard()
	1. If card not trashed, it is then added to the Played pile
	2. In the case that the last card is played or if there is only one card in hand, reduce number of cards in hand
	4. Or replace the discarded card with the last card in hand, set last card to -1, and reduce number of cards in hand
updateCoins()
	1. Walks through the players hand and adds coins for each Treasure card  
	2. Copper, Silver, and Gold increases the coins by 1, 2, and 3 respectively 
	3. Bonus is added to coins
