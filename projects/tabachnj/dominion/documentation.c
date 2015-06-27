Submit a file called documentation.txt that contains documentation of smithy, adventurer cards. Documentation should contain your understanding of smithy and adventurer cards (code). It should also contain documentation of your understanding of discardCard() and updateCoins() method.  Keep your documentation short, though there is no upper limit. Documentation.txt file should contain at least 100 words.

smithy:
The smithy card, implemented in a switch in the function cardEffect() in dominion.c, uses a for loop to call the function drawCard() three times adding three cards to the players hand. After adding three cards to the hand the smithy card is discarded by calling the discardCard() function. 

The card is able to be used in a switch as it is a defined in dominion.h as the 14th enum variable giving it a value of 13 for the purposes of the switch. 

The card has an assigned cost of 4 coins as a constant defined in interface.h

adventurer:
The adventurer card is implemented in a switch in the function in dominion.c cardEffect(). Within the switch, this card draws card until two new treasure cards are added to the player's hand. The code starts with a while loop ensuring that fewer than two treasure cards have been drawn using the counter drawntreasure which is initialized to zero prior to the switch. Within the loop the deck is checked to ensure that there are cards in it, if not the discard pile is suffled and put into the deck. Next, the draw card is called. If the card is a treasure card, the counter is incremented and the while loop repeats. If the card is not a treasure card it is put in a holding deck (temphand) and another counter is incremented, and the handcount variable in the struct state for this player is decremented so that we can draw the next card. After two treasure cards are drawn, the temporary hand is discarded. 

The card is able to be used in a switch as it is a defined in dominion.h as the 8th enum variable giving it a value of 7 for the purposes of the switch. 

The card has an assigned cost of 6 coins as a constant defined in interface.h

discardCard():
Parameters: 
1. integer representing the position in the player's hand
2. integer representing the current player
3. struct contianing the game's state
4. integer representing if the card is in the trash

This function is designed to remove a card from the player's hand. 

If the trash flag is not set the function places the card in the playedCards array in the state struct, and increments the number of played cards. 

The function then begins removing the card from the player's hand by setting the value in it's position in the hand to -1, which is not a valid card value. 

The series of if-else statements do the job of removing the card by replacing it with another card from the hand. If the card was at the end of the hand, the number of cards in the hand is decreased by decrementing the handCount of the current player. If this card was the only card in the hand the card count is again decreased by decrementing the handCount. If the card is someplace in the middle of the hand it is replaced by the last card in the hand by setting the card at the current position equal to the card at the end of the hand. The card at the end is then set to -1 and the handCount is then decremented. 

updateCoins():
Parameters: 
1. integer representing the player
2. struct containing the state of the game
3. integer representing the added bonus coins. 

The function is designed to calculate the number of coins the player should get with a possible bonus. 

The number of coins in the state structure is set to zero. A for loop is used to iterate through the hand searching for treasure coins. If a copper is found the number of coins is increased by one, if a silver is found the number is increased by two, and if a gold is found the number is increased by 3. After the for loop concluded the bonus is added to the number of coins. 
