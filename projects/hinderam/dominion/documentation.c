/*
Documentation file for Assignment #2:

The smithy card:
The design of the smithy card is so that the player who uses it with their action is able to draw 3
additional cards to their hand. This is implemented as the playCard function sees that the card
played is a smithy card. So when the smithy case is encountered the drawCard method is called 3 
times so 3 cards are added to your hand. Lastly, the smithy card is then discarded through the 
discardCard function.


The Adventurer Card:
The design of the adventurer card is so that when played, the current player draws cards from
their deck until they have drawn 2 treasure cards. To implement this, the playCard function 
sees that the card played is an adventurer card. The top card of the deck is drawn and then
continues to be drawn until the number of treasure cards drawn is 2. (An if statement is used
to increment the treasure counter if it is a copper, silver or gold card). If the deck is 
empty during this, it is reshuffled and the player will continue to draw cards until 2 
treasure cards are reached. Once two treasure cards are drawn, the non-treasure cards in the
temporary hand are put into the discard pile.


discardCard() method:
This is used to remove cards from the player's hand. The first thing it does is check to see if 
the card is meant to be trashed or put into the discard pile. trashFlag is used to throw a flag
on whether or not the card should be trashed. If it is not trashed and just discarded it is 
removed from the player's hand and put in the playedCards pile. The hand count is then adjusted
based on its position in the array.


updateCoins() method:
This counts how many coins a player has in their hand. It adds up the values of the gold (3),
silver(2) and copper(1) coins. It is passed a player, gameState and bonus. The bonus, if 
there is one, is added to the value of the coins.

*/