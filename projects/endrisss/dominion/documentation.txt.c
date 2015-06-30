Seth Endriss-Dygert
endrisss
06/24/2015
CS 362 Summer 2015
Assignment 2
documentation.txt


*************************************************
cardEffect function, smithy switch case:
The smithy card adds three cards to the current player's hand. Within the cardEffect function is the card switch. When the current card is smithy the switch will enter into the smithy case. The drawCard function is called three times passing in the currentPlayer and state parameters. The card is then discarded using the discardCard function passing the handPos, currentPlayer, and 0. Finally the cardEffect function returns 0 to exit the function.

*************************************************
cardEffect function, adventurer switch case:
The adventurer card reveals cards from the player's deck until two treasure cards are revealed. The treasure cards are then moved into the player's hand and the other revealed cards are moved into the discard pile. Within the cardEffect function is the card switch. When the current card is adventurer the switch will enter into the adventurer case. 

A while loop is entered until the number of drawn treasure cards reaches two. If the deck is empty the discarded cards are shuffled back into the deck with the shuffle function. The drawCard function is called and the top card is compared to the copper, silver, and gold types to determine if the drawn card is a treasure card. If a treasure card is encountered the drawn treasure counter is incremented. If a treasure card is not encountered the card is moved into a temporary hand. The while loop then loops back to the beginning.

Once two treasure cards have been drawn, as indicated by the drawn treasure counter the carts within the temporary hand are moved into the discarded card pile and the cardEffect function returns 0 to exit the function.

*************************************************
discardCard function:
The discardCard function removes a card from a player's hand. The function takes the following parameters:
int handPos: the position of the card within the player's hand
int currentPlatyer: the current player
struct gameState *state: a pointer to the structure which represents the games current state
int trashFlag: flag to indicate if the card should be moved to the trash [>= 1] or moved to the discard pile [0]

The function first checks the trash flag. If the trash flag is not set, that is the flag is <= 0, the card is added to the game state's set of played card.

The function sets the played card flag for the current player and hand position to -1.

If the player has one or two cards in their hand, prior to the discard, then the hand count is decremented. Otherwise the discarded card is replaced with the last card in the hand, the last card is set to -1, and then the hand count is decremented.

Finally the function returns 0.

*************************************************
updateCoins function:
The updateCoins function updates the value of the coins for the current player.
int player: the current player
struct gameState *state: a pointer to the structure which represents the games current state
int bonus: the value of the bonus coins the player has received by non-treasure cards

The function first resets the coin count. Then the player's hand is iterated through and the value of the copper, silver, and gold coins are added to the game state's coin count. Coppers are one coin, silvers are two coins, and golds are three coins. The function then adds the value of the bonus to the coin count and returns 0.
