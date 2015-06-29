/*****************************************************************************************
Refactoring for dominion.c:

The logic for each of the following five cards has been moved from the long switch statement in 
the cardEffect function and encapsulated in its own function: 
1. Adventurer 
2. Council Room
3. Feast
4. Mine
5. Smithy

The variables 'temphand' (integer array), 'cardDrawn' (integer), and 'x' (integer) have been 
removed from the cardEffect function since each of these variables was only needed for one
of the cards now handled in a separate function. They are replaced by local variables in the
appropriate functions. 

/*****************************************************************************************
BUGS
/*****************************************************************************************
The following bugs have been introduced: 

Adventurer - This bug is rather fiendish ... the variable temphand should be initialized
to size MAX_HAND. Instead it is initialized to size MAX_DECK. However, both constants
are defined to the identical value (500) so this bug will require experimenting with
different values in order to produce any kind of error. 

Council Room - The function contains a 'for' loop that draws a card for each other player 
other than the player of the council card. The line that checks whether or not 
the player is the current player has been bugged. Instead of "if ( i != currentPlayer)"
the line is now "if (i = currentPlayer)" which will assign i to the current player's
number, draw a card, and then continue the loop. Unless the player is the last
player, this will result in an endless loop.  

Feast - The loop control variable 'x' has been misplaced inside the loop 
checking the validity of the player's choice, and the loop itself has been changed
from a 'while' loop to a 'do while' loop. The loop will always only run once as a
result. This bug will produce a failure when the player attempts to buy an invalid
card; s/he won't be properly prompted for another card.

Smithy - The trashFlag (the fourth parameter of the discardCard function called 
at the end of the playSmithy function) is incorrectly set. It had been 0 (not set) and
is now 1 (set). When this integer argument is greater than 0 (flag is set), the card 
will not be added to the played pile. 
/*****************************************************************************************

