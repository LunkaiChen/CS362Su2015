Smithy Card

	The 'smithy' is a kingdom card. Its value, as can be seen in the query
	function 'getCost()' of the file 'dominion.c,' is hardcoded to four
	currency units. Upon playing a 'smithy' card, the 'cardEffect()' function
	is invoked by 'playCard()', and relevant actions are executed that modify
	the game's state. Specifically, playing it adds cards to the current
	player's hand by invoking the 'drawCard()' routine three times. The played
	'smithy' card is then discarded from the player's hand by calling
	'discardCard()'.
