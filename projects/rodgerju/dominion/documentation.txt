Cards are played by passing the location of the card within the players hand.  Other information
is passed such as the current gamestate choices relevant to the card.  playCard then checks various
information, return -1 if any of it fails.  It checks that the phase is correct, that the player
has enough actions left, that the card is actually an action card and then it plays the card.  The
card is checked to be an action based on enumerated values for strings.  The strings are the
card names.  Part of the card effect is to discard the card appropriately.  This often means that it
gets put to the played pile but could also be put into the trashed pile.  If the card failed to play it also returns
-1.  After this, numActions is decremented and coins are updated based on some cards.

Smithy is a fairly simple card in that the player draws 3 cards off the top of their deck.  Draw card
functions are called three times for the current player and then the card is put into the played pile.

Adventurer is slightly more complicated.  The idea behind the card is that the players draws cards off
the top of the deck and puts the treasures into their hand while the other cards get put into a 
a temporary zone where they are not in play.  Should the players deck be emptied then the discard pile
is shuffled and becomes the new deck.  Note that temporary zone is not the discard pile.  Once the 
player puts two treasures in their hand the cards in the temp zone are put into the discard pile.
Should the player never darw two treasures but cycle through all of the cards, then the effect ends
with the results as stands.  The code accomplishes this by creating a temporary hand to hold the none
treasure cards.  Each card is drawn to the players hand, but if it isn't a treasure then the card is 
moved to the temporary hand and the card is removed from the players hand.  Each treasure card
is enumerated and compared in that manner.  Finally, the deck is shuffled if there are no cards left
to draw.  This is where an issue occurs in how the code handles the game rules.  The code is done
through a while loop that counts when treasures are drawn.  The only way to exit the loop is to draw
two treasures.  However, as mentioned above there is another option for exiting the loop.  It seems
that the game handles the situation of shuffling an empty discard pile by returning a -1 in the 
shuffle() function.  However, that is not handled by the code with something along the lines of a break
statement.  While it is fairly rare to occur, this could in fact cause an infinite loop.  After exiting
this loop a new while loop is entered to send all the cards in the temporary hand to the players discard
pile.  Another error was encountered because the adventurer was not put into the played section of the 
game.   