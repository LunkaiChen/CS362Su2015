refactor - Jesse Smidt
Functionality was removed from large switch statement in cardEffect() and added to 5 individual functions.
These fucntions can be found at the top of dominion.c.
functions refactored:
playSmithy():
	bug: card only draws 2 cards
playVillage():
	bug: card now DOUBLES number of actions instead of just adding 2
playGreat_hall():
	NO BUGS INTRODUCED - should function properly
playMinion();
	bug: the choices are switched - the card will now do the opposite of what was selected.
playAdventurer():
	bug: non treasure cards are now placed on the deck instead of the discard pile.

