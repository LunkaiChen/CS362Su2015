/****

=====Smithy=========
The smithy card allows the user to draw three cards. The for loop calls the "drawCard" method three times, then the smithy card is discarded. 

=====Adventurer=====
The adventurer card allows the user to place up to 2 treasure card in his hand. For each draw, the code checks whether the deck is empty and shuffles the cards if needed. If the card drawn is a treasure card (e.g. copper, silver or gold), the treasure count is incremented. Otherwise the card is placed in the array "temphand." Once the user has collected two treasure cards, the drawn cards are discarded. 

=====discardCard()==
The discardCard method takes in 4 variables: int handPos, int currentPlayer, struct gameState *state and int trashFlag. The method first checks whether the card is marked as a trashFlag. If not, it is placed in the played pile. The played card is then set to -1. 

The method then checks for three conditions: (1) whether the card is the last card in the hand, (2) whether there is only one card in hand or (3) none of the above. If conditions (1) or (2) are met, the number of cards in the player's hand is reduced. If the third condition is met, the discarded card is replaced with the last card in hand and the last card is set to -1. Then the total number of cards in the player's hand is reduced. 

=====updateCoins()==

The updateCoins method takes in 3 variables: int player, struct gameState *state and int bonus. The method first initializes the coin ocunt to 0. It then iterates through the cards in the player's hands and counts each instance of a treasure card. 

The value added to the coin count for each coin type are as follows: copper = 1, silver = 2 and gold = 3. At the end of the method, the value of bonus is added to the coin count. 

***/
      
      