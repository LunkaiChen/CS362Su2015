CS 362 
Refactor – refactor.txt -renamed to .c per instructions on Piazza
Rob Sparks, sparksro@onid.oregonstate.edu

-Made some readability and organization mods to dominion.c to make future mods 
easier.  More to come in the future as I only really touched stuff I am working
on now. -if you are a ta/ instructor and have some problems with this sorry but
I have some vision problems and this helps me read it and keep track of where
I am working in the document.  

-Moved funcionallity of village card to void villageCard() function. -no bug yet.
-Moved funcionallity of sea_hag card to void sea_hagCard() function. -no bug yet.
-Moved funcionallity of remodel card to void remodelCard() function. -no bug yet.
-Moved funcionallity of smithy card to void smithyCard() function. -no bug yet.
-Moved funcionallity of adventure card to void adventureCard() function. -no bug yet.

-After refactor of current code, code compiles in same manor as orginal distributed
version with c 161:10 warning for variable u not being used when it actually is using there
included MakeFile.

- introduced bug in remodleCard swaped choice1 and choice2 in first if statement
  original: if ( (getCost(state->hand[currentPlayer][choice1]) + 2) > getCost(choice2) )
  
- introduced bug in smithyCard. Changed for loop so its over indexing by one.

- introduced bug in adventureCard. Eliminated the z++ incrementer after 
    temphand[z]=cardDrawn; in first while loop.
    
- introduced bug in villageCard.  Changed number of actions that it adds from 
    2 to 3.

- introduced bug in sea_hagCard.  Made i == to currentPlayer as aposed to i !=

-After bug refactor a compile returns same results as above and compiles exactly the 
  same using the included Makefile.
