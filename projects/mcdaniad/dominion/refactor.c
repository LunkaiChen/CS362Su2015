Smithy

Created cardSmithy() to implement Smithy in its own function. Function is declared in
dominion.h and defined at the end of dominion.c.

BUG: Trashes Smithy card instead of placing it in the Played pile (flag in discardCard() set to 1)

-----

Adventurer

Created cardAdventurer() to implement Adventurer in its own function. Function is declared in
dominion.h and defined at the end of dominion.c. Variables drawntreasure, cardDrawn, and z
moved to function to serve as local variables.

BUG: Removed copper from the treasure check, so drawing a card of that type will not increment
the drawntreasure variable.

-----

Village

Created cardVillage() to implement Village in its own function. Function is declared in
dominion.h and defined at the end of dominion.c.

BUG: Increments number of actions instead of adding 2.