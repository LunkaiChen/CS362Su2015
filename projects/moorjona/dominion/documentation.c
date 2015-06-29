CS 362 - 400
Assignment 2
6/28/2015
Jonathon Moore


Smithy Card

Smithy case will call drawCard() 3 times for the currentPlayer.  Then it calls discardCard() on the Smithy card that was just played at the valued stored at handpos.  0 is returned.




Adventurer Card

Adventurer case will call drawCard() from the deck until two treasure cards (copper, silver, or gold) are reached.  If the deck runs out before those two treasure cards are drawn then shuffle() is called on the player's deck.  As cards are drawn they are first put into the current player's hand, then the card is checked to see if it is a treasure card; if it is not a treasure card then the card is added to a temphand[] array and removed from the player's hand.

After two treasure cards have been drawn, all the cards in temphand[] array are then added to state->discard[][] for that player.  discardCard() is not called to remove the Adventurer Card from the hand.  0 is returned.



int discardCard(int handPos, int currentPlayer, struct gameState *state, int trashFlag)

discardCard() appears to be misnamed as it does not add a card to the discard pile, but instead adds a card from the hand into the state->playedCards[] array.  If trashFlag is set to 1, the card is instead removed from the game.  The card is set by the integer passed in by handPos.

The card is "removed" from players hand by first setting the card in that position to a value of -1.  This causes a 'hole' in the player's hand, which is filled by moving the last card in state->hand[currentPlayer][] to the position of the discarded card.  (If the card removed was the last card in the player's hand this step is ignored.)  Finally state->handCount[currentPlayer] is reduced by 1.

discardCard() always returns a value of 0.



int updateCoins(int player, struct gameState *state, int bonus)

The function loops through all cards in state->hand[player][] and adds 1 for every copper card, 2 for every silver card, and 3 for every gold card.  It then adds the total of bonus, which is passed to the function, and stores that value in state->coins.

updateCoins() always returns a value of 0.