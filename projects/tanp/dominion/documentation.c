//Philip Tan
//CS 362 SE II
//Assignment 2 - Dominion Game Documentation - documentation.txt

//SMITHY AND ADVENTURER CARDS:

//SMITHY:
//Smithy is listed as a variable of enum type CARD in dominion.h. The code resides in a switch function that selects the card and performs the actions that the Smithy card should. Specifically, Smithy adds 3 cards to the players hand using a loop that calls the drawCard function 3 times. Once finished, the discard function is called, which ends the Smithy cards functions.


//ADVENTURER:

//Adventurer is listed as a variable of enum type CARD in donimion.h as well. The adventurer card reveals cards from a players deck until it reveals 2 treasure cards.  Those treasure cards are kept in the players hand and the rest of the cards are discarded. We see in the code that a loop is used to draw cards with a variable that keeps track of the number of treasure cards. When that variable reaches 2, the loop ends. All other cards drawn are discarded back into the deck.


//DISCARDCARD() AND UPDATECOINS() METHODS:

//DISCARDCARD():

//The discardCard method takes the handPos index, the currentPlayer, the struct holding all the variables, and a flag that marks trashed cards as its parameters.  If the card is not trashed, then it is added to the played cards pile. handPos is a variable keeping track of the position of the card in the players hand. If the trash flag is 0, the top card of the played card pile is set to the card passed to the hand position entered into the function argument.  When a played card is set to -1, that means it has been played. If the last card in the hand is played, then the counter for the number of cards in hand is reduced. Otherwise, if there is only one card in hand, the counter is also reduced by 1.  Otherwise, the discarded card is replaced with the last card in hand, and the last card is set to a -1 value, and then the counter is reduced by 1.

//The discardCard function simply removes a card, and deducts from a hand counter variable.


//UPDATECOINS():

//The updateCoins function first resets the coin count (in case the coin counter variable was not cleared before), then adds up a number for each treasure card in a players hand.  Coppers are worth 1, silvers worth 2, golds worth 3. If there are bonus coins such as those that come along with some of the action cards, then those are added as well.  This function simply calculates the current number of coins in the players hand.
