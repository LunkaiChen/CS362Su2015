These are  the card that were refactored:

From the funciton cardEffect, the following cards were refactored from their individual case statement code
to individual funcitons. 

	Adventurer: The adventurer case code has been refactored to funciton playAdventurerCard 
	- error introduced by removing the silver treasure in the "if (cardDrawn == copper...)"
	
	Smithy: The smithy case code has been refactored to funciton playSmithyCard 
        - error introduced by having the for loop start at 1 instead of 0

	
 	Village: The village case code has been refactored to funciton playVillageCard 
	- error introduced by changing the numActions to +1 instead of +2
	
	Great_Hall: The great_Hall case code has been refactored to funciton playGreathallCard 
	- no error introduced

	Remodel: The remodel case code has been refactored to funciton playRemodelCard 
	- error introduced by swapping choice1 and choice2 in the first if statement of the function 