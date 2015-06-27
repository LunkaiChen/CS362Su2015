Refactor.txt - Becky Solomon

========
Instructions: Pick five cards implemented in dominion.c. Choose 3 cards of your choice and smithy and adventurer cards are mandatory. Refactor the code so that these cards are implemented in their own functions, rather than as part of the switch statement in cardEffect. You should call the functions for these cards in the appropriate place in cardEffect. Check in your changes, with appropriate git commit messages. Document your changes in a text file in your dominion source directory, called “refactor.txt.” Your implementation of at least 4 of these 5 cards should be incorrect in some way, i.e., you should introduce subtle bugs that are hard to catch in your changes. Introducing bugs in smithy and adventurer is mandatory.  Write information of your bugs also in refactor.txt.  Later in this class, other students will test your code, so try to keep your bugs not superficial. Refactored program should compile without any error.
=======
Added playSmithy() function declaration at line 12 of dominion_helpers.h
Added playSmithy() function definition at line 646 of dominion.c
Added call to playSmithy() function at line 876 of dominion.c

Added playAdventurer() function declaration at line 13 of dominion_helpers.h
Added playAdventurer() function definition at line 659 of dominion.c
Added call to playAdventurer() function at line 835 of dominion.c

Added playCouncilRoom() function declaration at line 14 of dominion_helpers.h
Added playCouncilRoom() function definition at line 687 of dominion.c
Added call to playCouncilRoom() function at line 839 of dominion.c

Added playFeast() function declaration at line 15 of dominion_helpers.h
Added playFeast() function definition at line 714 of dominion.c
Added call to playFeast() function at line 843 of dominion.c

Added playMine() function declaration at line 16 of dominion_helpers.h
Added playMine() function definition at line 773 of dominion.c
Added call to playMine() function at line 850 of dominion.c


