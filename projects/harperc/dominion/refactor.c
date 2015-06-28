Adventurer Refactor
Simply calling the played_adventuruer function in the statemachine instead.
had to pass in some values like state and the current player but most values
could be local.

Adventurer Bugs
Initialized the temphand array to 4 instead of MAX_HAND

Smithy Refactor
Moved to smithy_played had to pass in the state and handPos and current player

Smithy Bug
Left the comment saying +3 cards but changed the for loop to loop through 4 times

CouncilRoom Refactor
Same thing as the rest of them

CouncilRoom Bug
Removed the check for the current player so the current player ends up getting a 5th card

Village Refactor
Moved to its own function needed to pass the same 3 things in again

Village Bug
Trashing the cards that are discarded instead of a regular discard

Great Hall Refactor
Same 3 things needed to be passed in but calling great_hall_played in the switch statement 
