/*

Smithy card: When a smithy card is played, the player must draw
	three cards. The user then discards the smithy card.

Adventurer card: When the adventurer card is drawn and while the
	drawn Treasure is less than two, the deck must be shuffled if the 
	current player has an empty deck. The player then must draw one card. 
	If the card is Copper, Silver, or Gold, then the Treasure increases by one. 
	Otherwise, the temp hand is the most recently drawn card. While the temp 
	hand is greater than one, then the player must discard a drawn card.

discardCard(): If the card is not trashed, the card is added to the
	Played pile. If the last card in hand is played or only one card is
	in the hand, it must be discarded. Otherwise, the discarded card must
	be replaced with the last card in hand.

	updateCoins(): The coin count is set to zero. For ever Treasure card 
	the player has, the coin count increases by one (copper), two (silver), 
	or three (gold). Then a bonus is added to the coin count.

*/