Robert Ottolia
CS362-Assignment 2
Dominion Game Documentation

Smithy--
If the card passed to cardEffect() is a Smithy, the current player
draws three more cards.  Current card then added to the played pile.

Adventurer--
If the card passed to cardEffect() is an Adventurer, the current player keeps drawing cards from their deck 
until two treasure cards are drawn. If deck becomes empty during drawing process, discard pile is shuffled 
and added to the deck. If the cards pulled during the draw are not treasure cards, they are added to a temporary
hand.  The temporary hand is then added to the discard pile.

discardCards()--
Has four parameters:
handPos-gives the position of the card in the player's hand to be removed
currentPlayer-integer that determines the player whose hand is effected
state-pointer to the game state (game details)
trashFlag-determines whether or not card will be added to the played pile

If the trash flag is < 1, the card is  first added to the played pile and the playedCardCount incremented.
The card then indicated by handPos is then set to -1.  If the card to be discarded is at the end of the 
player's hand or is the only card in the player's hand, the number of cards in hand is decremented.  Otherwise,
the discarded card is replaced with the last card in hand and the last card is set to -1 before the number
of cards in hand is decremented

updateCoins()--
Has four parameters:
currentPlayer-integer that determines which player's coins are updated
state-pointer to the game state(game details)
bonus-amount of coins to be added on top of treasure cards in player's hand

This function goes through the current player's hand, adding up the treasure cards.
A running total of the coins is kept in the game state. Copper adds 1 coin, silver adds 2, and gold adds 3.
Any bonuses are added to the total before the function returns.