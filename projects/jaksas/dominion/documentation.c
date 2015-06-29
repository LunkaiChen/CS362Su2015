/***************************************************************************
Smith - When this card is played during a player's action phase, the player
	may draw three cards from his/her deck and add them to his/her hand for
	that turn. The corresponding function proceeds by 
		1. Determining the current player from the state struct
		2. Loops three times, calling the drawCard function on the current
			player
		3. Calls the discard card function in order to discard the smithy
			card
***************************************************************************
***************************************************************************
Adventurer - Upon playing this card, the player draws cards from his/her 
	deck until two treasure cards are revealed. These treasure cards
	are added to the player's hand for that turn; non-treasure cards 
	are discarded. The corresponding function proceeds by
		1. Determining the current player
		2. While 2 treasure cards have not been drawn
			A. Reshuffle the deck if necessary (the player's deck is empty)
			B. Draw a card and add it to the last position in the player's
				hand
			C. If the card is treasure, add it to the player's hand and
				increment the treasure card counter
			D. Otherwise place the card in a temporary hand array and
				decrement the size of the player's hand (effectively 
				removing that card from the player's hand)
		3. While the temporary hand array is not empty, discard the
			cards from the temporary hand array using discardCard
			function
***************************************************************************
***************************************************************************
updateCoins 
** Description: During the buying phase of the game, when treasure
	cards are cashed in, this function totals up the value of coins in the
	players hand, allowing the purchase of other cards. 
** Parameters: 
	int player: The player currently taking a turn
	gameState state: Structure containing global game information
	int bonus: Possible bonus to the purchasing power of the player (in
		addition to cashed in coin cards)
** Returns: 0 upon success
** Preconditions: None
** Postconditions: The 'coins' member which tracks the player's remaining
	money during a turn is modified to reflect the cashing in of the 
	coin cards and the possible bonus
***************************************************************************

***************************************************************************
discardCard  
** Description: Handles the disposal of a card after it is played or 
	trashed. Checks if the card should be moved to the played deck or to the 
	trash pile. The card is then removed from the player's hand and the vacated 
	position in the hand is filled by the last card in the player's hand array 
	assuming the played card is not the last card.
** Parameters: 
	int handPos: The position of the card to be discarded in the player's 
		hand array
	int currentPlayer: The player owning the card to be discarded
	gameState state: Structure containing global game information
	int trashFlag: Set to > 0 if the card is to be trashed
** Returns: 0 upon success
** Preconditions: None
** Postconditions: Card is removed from player's hand per the above 
	description
***************************************************************************/