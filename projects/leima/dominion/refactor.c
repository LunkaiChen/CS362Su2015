Removed case: smithy from cardEffect() function
Added if statement for card==smithy
Added smithyAction() function to end of dominion.c file.
Added smithyAction function prototype to beginning of dominion.c file.

Encased the switch statement within an else statement

Removed case: adventurer from cardEffect() function
Added if statement for card==adventurer
Added adventurerAction() function to end of dominion.c file.
Added adventurerAction function prototype to beginning of dominion.c file.
Moved variables int cardDrawn and int z = 0 to adventurerAction function.

Removed case: council_room from cardEffect() function
Added if statement for card==council_room
Added council_roomAction() function to end of dominion.c file.
Added council_roomAction function prototype to beginning of dominion.c file.

Removed case: village from cardEffect() function
Added if statement for card==village 
Added village Action() function to end of dominion.c file.
Added village Action function prototype to beginning of dominion.c file.

Removed case: great_hall from cardEffect() function
Added if statement for card==great_hall
Added great_hallAction() function to end of dominion.c file.
Added great_hallAction function prototype to beginning of dominion.c file.




Bugs introduced:

In great_hallAction(),
	discardCard(handPos, currentPlayer, state, 1);
should be:
	discardCard(handPos, currentPlayer, state, 0);


In villageAction(),
	//+1 Actions
	state->numActions = state->numActions ++;
should be:
	//+2 Actions
	state->numActions = state->numActions + 2;


In smithyAction(),
	for (i = 0; i <= 3; i++)
	should be for (i = 0; i < 3; i++)


In council_roomAction(),
	if ( i == currentPlayer )
should be:
	if ( i != currentPlayer )