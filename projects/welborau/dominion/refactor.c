Refactor.c

refactoring adventurer card
	1. created a function called use_adventurer that takes in 3 parameters (player, gameState, and handPos)
	2. removed switch case adventurer card section and placed inside adventurer function
	3. error introduced (increases the handCount instead of reducing the handCount when playing the card)

refactoring smithy card
	1. created a function called use_smithy that takes in 3 parameters (player, gameState, and handPos)
	2. removed switch case smithy code and placed inside smithy function
	3. error introduced (draws 4 cards instead of 3)

refactoring feast card
	1. created a function called use_feast
	that takes in 3 parameters (player, gameState, and handPos)
	2. removed switch case feast code and placed inside feast function
	3. error introduced (set 5 card value to 1 instead of -1)

refactoring great_hall card
	1. created a function called use_great_hall that takes in 3 parameters (player, gameState, and handPos)
	2. removed switch case great_hall code and placed inside great_hall function
	3. no error introduced. 

refactoring village
	1. created a function called use_village that takes in 3 parameters (player, gameState, and handPos)
	2. removed switch case village code and placed inside use_village function
	3. error introduced (substracted 2 from numActions instead of add 2)
