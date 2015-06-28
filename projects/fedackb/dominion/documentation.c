Smithy Card

	The 'smithy' is a kingdom card. Its value, as can be seen in the query
	function 'getCost()' of the file 'dominion.c,' is hardcoded to four
	currency units. Upon playing a 'smithy' card, the 'cardEffect()' function
	is invoked by 'playCard()', and relevant actions are executed that modify
	the game's state. Specifically, playing it adds cards to the current
	player's hand by invoking the 'drawCard()' routine three times. The played
	'smithy' card is then discarded from the player's hand by calling
	'discardCard()'.

Adventurer Card

	The 'adventurer' is a kingdom card. Its value, as can be seen in the query
	function 'getCost()' of the file 'dominion.c,' is hardcoded to six currency
	units. Upon playing an 'adventurer' card, the 'cardEffect()' function is
	invoked by 'playCard()', and relevant actions are executed that modify the
	game's state. Specifically, playing it adds cards for the current player by
	invoking 'drawCard()' until the count of 'drawntreasure' cards (initially
	zero) reaches two. Treasure cards are enumerated as 'copper', 'silver', or
	'gold', and remain in the current player's hand. Non-treasure cards are
	stored in the temporary array 'temphand'. After drawing two treasure cards,
	each card in the temporary hand is then discarded by directly modifying the
	'discard' and 'discardCount' data members of the given game's state.

discardCard() Method

	The 'discardCard()' method receives 'handPos', an integer that identifies
	the card to act upon in the given player's hand; 'currentPlayer', an
	integer that identifies from which player to discard a card; 'state', a
	reference to the game's state, and 'trashFlag', an integer that encodes
	whether or not the discarded card is trashed. The only possible return
	value is zero, which indicates success. As a post-condition, the game's
	state is modified. Specifically, discarding a card modifies the 'hand',
	'handPos', and 'handCount' game state data members to reflect one fewer
	card in the player's hand. If the card is not trashed, the 'playedCards'
	and 'playedCardCount' data members are also updated to represent moving the
	discarded card from the player's hand to his/her deck of played cards.

updateCoins() Method

	The 'updateCoins()' method receives 'player', an integer that identifies
	the affected player; 'state', a reference to the game's state; and 'bonus',
	an integer representing bonus currency. The only possible return value is
	zero, which indicates success. As a post-condition, the game's state is
	modified. The routine iterates over the cards in the given player's hand
	and accumulates the total amount of treasures. Bonus coins are added to
	this amount, and the final total is stored in the 'coins' game state data
	member.
