Adam Pedigo
CS362.400
Documentation.txt

-----
Cards
-----

smithy:

When played, the smithy card adds 3 cards to the player's hand.
This is achieved by calling the drawCard() function 3 times, then
calling the discardCard() function to remove the smithy card from
the player's hand.

adventurer:

When played, the adventure card reveals cards from the player's deck
until 2 treasure cards are revealed.  These 2 treasure cards are added
to the player's hand and all other revealed cards are discarded.
This is achieved by calling the drawCard() function and checking if it is
a treasure card.  If so, it remains in the player's hand.  If not, it
is added to a temporary hand.  This process loops until 2 treasure cards
have been drawn.  Then the temporary hand is discarded by adding the count
of the cards to the discardCount variable.

---------
Functions
---------

discardCard(int handPos, int currentPlayer,
struct gameState *state, int trashFlag):

The parameters represent the card's position index, the player's number,
a pointer to the game's state, and a flag for whether or not the card is
to be trashed.  The function removes the card at handPos belonging to
currentPlayer according to the state preserved in state.  If trashFlag is
set, the card is added to the trash pile, else it is added to the discard pile.

updateCoins(int player, struct gameState *state, int bonus):

The parameters represent the player's number, a pointer to the game's state,
and an amount of bonus coins to be awarded.  The function adds an amount of coins
equal to the bonus parameter to the player whose number is represented by the 
player parameter according to the game state represented by the state parameter.
