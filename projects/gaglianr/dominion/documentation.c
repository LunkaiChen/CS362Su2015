/******************************************************************************
 * Author:		Rich Gagliano
 * Date Created:	06/28/2015
 * Date Modified:	06/28/2015
 * File Name:		documentation.c
 * 
 * Overview: 
 * 	Provides documentation for the implementation of smithy and adventurer
 * 	cards, as well as discardCard() and updateCoins() methods in line
 * 	with the requirements of assignment 2. 
 *
 *****************************************************************************/



/******************************************************************************
 * smithy - card documentation
 * 
 * The smithy card is part of the CARD enumeration. When cardEffect() is called
 * a switch is performed on which card is being utilized.  In the case the card
 * is equal to the 'smithy' in the CARD enumeration, the drawCard() method is
 * called 3 times for the current player to execute the '+3 Cards' action. Then,
 * discardCard() is called to discard the smithy card from the players hand,
 * and 0 since this is not a curse.
 * 
 *****************************************************************************/


/******************************************************************************
 * adventurer - card documentation
 * 
 * The adventurer card is part of the CARD enumeration. When cardEffect() is 
 * called a switch is performed on which card is being utilized.  In the case
 * the card is equal to the 'adventurer' in the CARD enumeration, the program
 * enters a while() loop.  This loop continues until the drawntreasure counter
 * is 2 or greater.  drawntreasure starts at 0.  If there are no cards in 
 * the player's deck, the player shuffles their discard pile into their deck.
 * the player then draws a card. If the card is a copper, silver, or gold
 * the drawn treasure counter is increased by 1.  Otherwise the drawn card is
 * placed in a temporary hand.  This continues until the while loop stop
 * condition is reached. There is a potential here for an infinite loop, if
 * if there are not 2 treasures in the player's discard/deck.
 * 
 * Once the 2 treasures have been drawn, a second while() loop executes that
 * continues until the temporary hand is empty. Inside this loop, the temporary
 * cards are discarded one at a time.
 * 
 * Once this loop is finished, 0 is returned to signify that this is not a 
 * curse.
 * 
 *****************************************************************************/


/******************************************************************************
 * discardCard() - documentation
 * 
 * The discardCard method takes 4 parameters, an integer for hand position,
 * an integer to denote the current player, the gameState struct, and
 * an integer to state whether the discarded card should go to the played
 * pile, or the trash pile.
 * 
 * The function begins by checking the trashFlag.  If the card was played,
 * the card is added to the played pile.
 * 
 * Then the game state is modified so that the played card is an invalid
 * index.
 * 
 * Then the card is removed from the player's hand by either just reducing the
 * player's handcount by 1, or moving the played card to the last card in 
 * hand and reducing the hand count by 1.
 * 
 * Once this is completed, 0 is returned to signify that this is not a curse.
 * 
 *****************************************************************************/


/******************************************************************************
 * updateCoins() - documentation
 * 
 * The updateCoins method takes 3 parameters, an integer to denote the current 
 * player, the gameState struct, and an integer for any bonus amount to be 
 * added.
 * 
 * The function begins by setting the current game state's coins to 0, and then
 * looping through the current players hand, adding 1 coin for copper, 2 for
 * silver, and 3 for gold cards.
 * 
 * Once completed, the provided bonus is added to the game state's coins, and
 * 0 is returned to signify that this is not a curse.
 * 
 *****************************************************************************/
