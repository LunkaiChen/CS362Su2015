/******************************************************************************
 * Author:		Rich Gagliano
 * Date Created:	06/28/2015
 * Date Modified:	06/28/2015
 * File Name:		refactor.c
 * 
 * Overview:
 * 	Details the changes to dominion.c and dominion.h to satisfy the
 * 	requirements for requirement 3 of assignment2.
 * 
 *****************************************************************************/


/******************************************************************************
 * smithy - refactor
 * 
 * Refactored the smithy card by adding a prototype to dominion.h for a new 
 * function smithyCardEffect().  To start with smithyCardEffect() contained
 * the exact code originally found in cardEffect(). The cardEffect() function
 * was modified to return the results of smithyCardEffect() rather than
 * performing the card effects within the switch.
 * 
 *****************************************************************************/

/******************************************************************************
 * adventurer - refactor
 * 
 * Refactored the adventurer card by adding a prototype to dominion.h for a new 
 * function adventurerCardEffect().  To start with adventurerCardEffect() 
 * contained the exact code originally found in cardEffect(). The cardEffect() 
 * function was modified to return the results of adventurerCardEffect() rather 
 * than performing the card effects within the switch.
 * 
 *****************************************************************************/

/******************************************************************************
 * councilroom - refactor
 * 
 * Refactored the councilroom card by adding a prototype to dominion.h for a new 
 * function councilroomCardEffect().  To start with councilroomCardEffect() 
 * contained the exact code originally found in cardEffect(). The cardEffect() 
 * function was modified to return the results of councilroomCardEffect() rather 
 * than performing the card effects within the switch.
 * 
 *****************************************************************************/

/******************************************************************************
 * minion - refactor
 * 
 * Refactored the minion card by adding a prototype to dominion.h for a new 
 * function minionCardEffect().  To start with minionCardEffect() 
 * contained the exact code originally found in cardEffect(). The cardEffect() 
 * function was modified to return the results of minionCardEffect() rather 
 * than performing the card effects within the switch.
 * 
 *****************************************************************************/