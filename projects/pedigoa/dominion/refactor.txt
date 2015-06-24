Adam Pedigo
CS362.400
refactor.txt

Assignment 2
----------------
Refactored Cards
----------------
adventurer, smithy, council room, feast, garden

For each card refactor, first existing code was copied into a separate function.
Necessary parameters were added for each function call (mostly game state, player number, etc).
Unnecessary variables existing in cardEffect() were commented out and equivalent local
variables added to the refactored functions.  Previous code remains in the
switch but is commented out

----
Bugs
----
gardens:
changed return value from -1 to 1 (not sure what this will do)

adventurer:
changed initial value of drawntreasure from 0 to -1 (will draw until
3 treasure cards are drawn instead of 2)

smithy:
function call to discardCard() is passed value 1 instead of 0 (trash flag
set?)

council room:
starting for loop index changed from 0 to 1 (will skip player 0's card draw)
