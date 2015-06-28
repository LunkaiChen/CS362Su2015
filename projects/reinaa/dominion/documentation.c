;;; -*- mode: org; -*-

* Adventurer
  Until two treasure cards have been drawn, draw cards. Non-treasure
  cards are put into a temporary hand, while treasure cards are put in
  the player's hand. Once two treasure cards have been drawn, the
  temporary hand is discarded. If the deck is depleted and a card needs
  to be drawn, the discard pile is shuffled and becomes the new draw
  pile.

* Smithy
  Three cards are drawn. The smithy card is then discarded.

* discardCard()
  If trashFlag is set, the card is removed from play; otherwise, it is
  added to the playedCards array, which will eventually be shuffled back
  into the deck. The array that holds the player's hand is then updated
  to remove the card. This is done by ensuring the card is at the last
  position of the array (by swapping if necessary), then shrinking the
  size of the array by 1.

* updateCoins()
  The number of coins is first set to zero. Then the function iterates
  over each card in the player's hand, adding coins if it's a treasure
  card. Finally a bonus is added (used if a card that directly increases
  coins is played)
