SMITHY
Loop 3 times:
  - Draw card from library into hand.
Discard smithy card from the player's hand.

ADVENTURER
Loop until treasure counter is 2:
  - If library is empty:
    + Shuffle discard and add to library.
  - Draw card from library as top card of player hand.
  - If drawn card is copper, silver, or gold:
    + Increment treasure counter.
  - If drawn card is anything else:
    + Add card to temp hand.
    + Remove the top card from player hand.
    + Increment temp hand counter.
Loop until temp hand counter is < 0:
  - Set top card in temp hand to discarded state.
  - Decrement temp hand counter.

DISCARDCARD()
If card is not trashed (removed from game):
  - Add card to "playedCards" pile.
Change card position to -1 in hand.
If the discarded card is the last in the player's hand (array):
  - Decrement the number of cards in hand.
If the number of cards in player's hand = 1:
  - Decrement the number of cards in hand.
Else:
  - Replace the discarded card in the array with the last card from the player's hand.
  - Set last card in player's hand array to -1.
  - Decrement the number of cards in hand.

UPDATECOINS()
Reset the coin counter (part of game state) to 0.
Loop while player has cards in hand:
  - If card is copper, add 1 to coin counter.
  - If card is silver, add 2 to coin counter.
  - If card is gold, add 3 to coin counter.
Add variable bonus to coin counter.
