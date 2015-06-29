/***************************************************\
| Jonathan Beaty								    
| beatyj@onid.oregonstate.edu 						
| CS362 Summer 2015								    
| Assignment # 2 									
| refactor.c								   	    
| 													
| This file tells which cards have been refactored	
| and what bugs have been introduced				
\***************************************************/

All bugs are made inside the ref methods. Methods get called in cardEffect() for each case.

Changed Cards:

/***************/
Adventurer card
/***************/

The refactored function is called adventurer_ref.

Bugs:
Drawn treasure is initially set to 1 instead of 0 so the count is off by 1
and the player initally starts with 1 fake treasure

/***************/
Embargo Card
/***************/

The refactored function is called embargo_ref.

Bugs:
+3 coins are added instead of +2 

/***************/
Feast Card
/***************/

The refactored function is called feast_ref.

Bugs:
Reset Hand shuld be i=0 so for loop is off by 1 for reset

/***************/
Salvager Card
/***************/

The refactored function is called salvager_ref.

Bugs:
If case should be for choice1 not choice2

/***************/
Smithy card 
/***************/

The refactored function is called smithy_ref.

Bugs:
Set i < 4 instead of 3 thus 4 cards are drawn instead of 3.
