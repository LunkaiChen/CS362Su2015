Smithy
Gameplay: Action card. +3 cards.

Implementation: Calls drawCard() three times, to add 3 cards to the currentPlayer's hand (adding a card to 
the hand, decrementing deckCount and incrementing the handCount). Then calls discardCard() to discard the
Smithy card from the hand, which adds Smithy to the Played pile.

-----

Adventurer
Gameplay: Action card. Reveals cards from your deck until you reveal 2 Treasure cards. Puts the Treasure
cards in your hand and discards revealed cards.

Implementation: Tracks number of Treasure cards drawn with drawntreasure variable. While drawntreasure is
less than 2, draws a card and checks to see if it is a Treasure. If so, increments drawntreasure. If not,
adds the drawn card to a temphand array and increments the variable z. Once 2 Treasures have been drawn 
exiting the while loop), loops through the temphand array from 0 to z-1, discarding cards in the array.


-----

discardCard()
Implementation: Receives 4 arguments: handPos (which # card in the hand is being discarded?), currentPlayer 
which player is discarding?), state (contains information about number of players and cards available in the
deck) and trashFlag (determines whether card is Trashed or Played). When called, adds the card to the
Trashed or Played pile as appropriate. Removes the card from the player's hand (decrementing handCount). If
not the last card in the hand, replaces with the last card in the player's hand.

-----

updateCoins()
Implementation: Receives 3 arguments: player (for which player are we updating coins?), state (contains
information about number of players and cards available in the deck), and bonus (does the palyer receive a
coin bonus?). Resets coin count, then adds coins for each Treasure card in the player's hand. Then, adds
bonus to number of coins.