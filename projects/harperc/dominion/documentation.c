Smithy Documenation
The smithy card is an action card that when played allows you to draw 3 more
cards. After the card is played, as in all action cards the card is discarded.

Adventurer Documentation
The adventurer card is less straightforward than the smithy. The adventuruer
card is an action card that when played allows you to keep drawing from your
deck until 2 coin cards are drawn (copper, silver, gold). All of the cards that
you drew in trying to get those cards are then discarded and the discard pile
is reshuffled and drawing continues if  the deck empties before the second 
coin card is drawn.

discardCard() Documentation
The discardCard function is how to take a card from your hand and put it into
the discard pile it also handles if it needs to be trashed. First if the card
is trashed it removes the card from the game. However if it is simply discarded
the current player's discard pile is added to and then the card in the hand is
set to -1. Then the card in the hand is dealt with. There are 2 simple cases 
and a not simple case. In the first case the last card in your hand was played
and so the length of the hand can simply be reduced and the card will never be 
reached. In the second simple case the card is your only card and can simply be
removed. In the last case though the card has been played from the middle of 
your hand so all of the other cards in your hand need to be moved around so then
the discarding card is at the end and then it is removed as in the first case.

updateCoins() Documentation
update Coins is a function to determine how many coins a player has to be able
to buy with on their turn. So to determine this the coins in the players hand
are added up with copper being worth 1, silver 2, and gold 3. And then any
bonuses from action cards played are applied and then the value is saved in the
current state of the game.

