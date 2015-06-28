Documentation of Adventurer Card, Smithy Card, discardCard(), and updateCoins()

adventurer card
	1. While treasure cards is less than 2, if current player's deck count is less than 1, then shuffle the deck
	2. Draw a card
	3. If drawn card is equal to copper, silver, or gold, then treasure increases by 1
	4.Else, temp hand is increased by 1 and includes the new drawn card
	5. While temp is greater than or equal to 0, player discards a card

smithy card
	1. Current player draws 3 cards
	2. discard 1 card

discardCard()
	1. If card is not trashed, then add card to Played pile
	2. If last card in hand is played or only 1 card remains in hand, discard that last card
	3. Or replace the discarded card with the last card in hand, set the last card to -1, and reduce number of cards in hand.

updateCoins()
	1. reset coin count to 0
	2. For every treasure card in player's hand, add coin amount of 1 for every copper, add coin amount of 2 for every silver, add coin amount of 3 for every gold
	3. Bonus is added to coin amount