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
