/*Sarah Newport
June 28 2015
documentation.txt (documentation.c)
*/

/*
 *Smithy
*Effect: awards the user “+3 cards” during the action.
*
*Code Implementation: Smithy is part of the CARD enumeration. Upon a call the ‘for loop’ 
*is performed that runs the drawCard() method three times. This ‘for loop’ executes the 3 
*additional cards for the user in gameplay. After the loop is performed then discardCard() 
*is called which discards smithy from the user’s hand.
*/

/*
 *Adventurer
*Effect: ”Reveal cards from your deck until you reveal 2 Treasure cards. Put those 
*Treasure cards in your hand and discard the other revealed cards.”
*Code Implementation: Adventurer is part of the CARD enurmeration. Upon a call to the 
*card, we enter into a while loop. This loop continues until the counter is 2 or greater. 
*If the card is copper, silver, or gold - the counter is increased by 1. The loop will 
*continue until the stop condition is reached.
*/

/*
 *discardCard(): puts the played card into the played card pile of the user.
*The function first checks to see if the card was played, if it was then it is moved to 
*the played card pile. The card is then removed from the user’s hand by either 
*decrementing the players hand count by 1 (or by moving the card to the last slot in the 
*hand and decrementing the hand count by 1).
*/

/*
 *UpdateCoins(): this function will count the number of coins a user can spend during the 
*turn. This function resets the coin value every turn and adds the coins of each treasure *card.
*/