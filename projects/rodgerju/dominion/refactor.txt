Adventurer Refactor:

The switch statement was changed to make a call to:

playAdventurer(struct gameState *state)

function.  Everything was copied directly from the switch statement to the new function.
In addition the card effect function was changed to remove the vairable drawn treasure because
it was no longer used.  I copied all of the relevant variable declarations from cardEffect() into
playAdventurer.

The bug was introduced by changing what the card drawn is checked against.  The file uses the
enumerated values of copper, silver, and gold.  I changed this to the numbers they represent.
This was done incorrectly.  I used the values 3, 4, 5 (province, copper, silver respectively
as opposed to 4, 5, 6).  Because province and gold have been swapped, the bug is somewhat 
subtle because it would require a fairly late game observance.  In addition, this is double trouble
because it is possible for the enumerated values to be changed at a later date causing other errors
even if this was correct.

In addition, this card didn't seem to have a discard command like all the others so that was added in.
Also the card didn't handle the situation where it can't draw two treasures.  This was not fixed.

Prototype added to dominion_helpers.h

Smithy Refactor:

As before the switch statement was changed, the prototype was added, and a new function call was added
to the switch statement.  This card is fairly simple so introducing a bug that isn't completely obvious
is somewhat difficult.  The bug was introduced by adding an equal sign to the for statement.  This
should cause four cards to be drawn.

Steward refactor:

Same as before with the all the normal changes (prototype, switch statement, etc).  The error imbedded
was to change the discardCard() function call for trashing the two selected cards so that the trash flag
is set to zero.  This means that the cards will be discarded instead of trashed.  Actually this will
cause the cards to be put into the played section, not discarded immediately.

Sea Hag refactor:

This card was not changed at all.  However, I a couple of the lines have an error.

state->discard[i][state->discardCount[i]] = state->deck[i][state->deckCount[i]--];

What this line should do is put set the next element in the discard array equal to the top element in
the deck array.  Because we are using deck count, on the right hand side of the equals, we need to go
less (if deck count is 2, the 1 is the second element).  However the binary operand (--) is after the
statement so it should try to access an element that is no longer accounted for by the array.  This
is most likely the wrong card, but could actually be out of bounds garbage data.

This line is similar:

state->deck[i][state->deckCount[i]--] = curse;

Further, I believe that the increment functions are actually changing the values of the variables, and
not just accessing them.  This causes a lot more issues.

Village refactor:

Same changes as before.  The bug added to this card was fairly simple, but in a slightly different vein
than the other bugs.  This bug passes the wrong value into the function call.  Instead of having the current
player draw cards, it has the next player drawing cards.  This is somewhat interesting because it will
look very correct and it requires the person debugging to understand why some of the aspects of the card
are correct and why others are incorrect.

  
