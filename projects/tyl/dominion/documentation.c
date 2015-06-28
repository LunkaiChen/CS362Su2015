/*
Loyd Maverick Ty
CS362 Assignment #2
documentation.c
*/

/*
smithy
The smithy is an enum card type in dominion.h. It is a 4-coin cost action card, the getCost() function will return 4 for this card. It takes one action point to play, and it allows the user to draw 3 additional cards to their hands when played. The cardEffect() function will loop 3 times using drawCard() function and at the end it will use discardCard() function. The discardCard() function will put the user's hand into the played pile and it does not trash any cards.
*/

/*
adventure
The adventure is an enum card type in dominion.h. It is a 6-coin cost action card, the getCost() in dominion.c function will return 6 for this card. It takes one action point to play, and it allows the user to draw cards from their decks until 2 treasure cards have been found, and then the drawn cards other than the two treasure cards are discared into the played pile. The cardEffect() function will keep track of the drawntreasure count. It will loop until the count gets to 2. It will reshuffle the deck if the deck is empty. It will draw cards and check if it is a treasure card, it will increment the treasure count if not, it will put the drawn card into a temporary hand and remove the drawn card from the hand. At the end of the loop, it will discard both the temporary hand and the playing hand into the played pile, it does not trash any cards.
*/

/*
discardCard()
The discardCard() function takes in int handPos, int currentPlayer, struct gameState *state, int trashFlag as inputs. If the trashFlag is less than 1, then it will place the card in hand into the playedcard pile and increment the played pile count. After it is out of the if statement, it will set the played card to -1 and then remove the card from the player's hand. To remove the card from the player's hand, it will check if the last card in the hand array is played and reduce the number of cards in the hand. If it is not, then it will check if there is only one card in hand and then reduce the number of cards in hand. Then finally, if it fails both checks then it will replace the discarded card with the last card in hand, set the last card to -1, and reduce the number of cards in hand.
*/

/*
updateCoins()
The updateCoins() function takes in int player, struct gameState *state, int bonus as inputs. It will reset the coin count of the state to 0. It will loop through the number of cards in the player's hand and check for treasures and incremeent the state coin by the proper amount of the treasure card. It will then increment the state coin count with the bonus amount.
*/