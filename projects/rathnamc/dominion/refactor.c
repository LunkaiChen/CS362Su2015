Christopher Rathnam
CS362 - Assignment 2
06/27/2015

I introduced 5 errors. The functions I changed were council_room, feast, smithy, Steward, and adventurer.
They are placed in there own functions and named the follow: 

council_roomEffect, feastEffect, smithyEffect, StewardEffect, adventurerEffect

In this program 5 bugs were introduced

1. In function council_roomEffect:
	 The error that was introduced is that numBuys are increased by 2 instead of 1.

2. In function feastEffect: 
	 The error that I introduced was x=1, the condition for loop on is not intialised to 1. Therefore this loop will never be executed

3. In function smithyEffect: 
	 The error that was introduced was instead of 3 cards, 2 were picked.

4. In function StewardEffect: 
	  This function is suppose to discard the card at the end of the hand. I introduced an error by removing the line that performs that action.
	  Therefore the program will not call discard() and the card will not be removed.
	  
5. In function adventurerEffect: 
	  The error introduced here is small, but large. The value of current player was not passed to the array but it was declared.
	  This will not allow use to get the current value of the player therefore everything will get loaded incorrectly and the program will 
	  be completely wrong.