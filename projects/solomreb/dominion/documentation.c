Documentation.txt - Becky Solomon

========
Instructions: Submit a file called documentation.txt that contains documentation of smithy, adventurer cards. Documentation should contain your understanding of smithy and adventurer cards (code). It should also contain documentation of your understanding of discardCard() and updateCoins() method.  Keep your documentation short, though there is no upper limit. Documentation.txt file should contain at least 100 words. 
=========

Smithy card
-The functionality for the Smithy card is located starting at line 831 of dominion.c inside the switch statement of the cardEffect() function.
-The Smithy card is an action card that, when played, allows the player to draw 3 cards from the deck. To do so, it calls drawCard() inside a loop that is executed 3 times. 
-After drawing three cards, the discardCard() is called.

Adventurer card
-The functionality for the Adventurer card is located starting at line 669 of dominion.c inside the switch statement of the cardEffect() function.
-The Adventurer card is an action card that, when played, allows the player todraw cards from the deck until two new treasure cards are added to the player's hand.
-The code is enclosed in a while loop that repeats until the player draws two treasure cards. It first checks if the deck is empty. If it is empty, it shuffles the discard pile so that the player can use those cards to draw from. It then calls the drawCard() function. If the next drawn card is a treasure card (copper, silver, or gold), it increments the drawntreasure count by one. If the card is not a treasure card it is put in a temporary hand called temphand. After two treasure cards are drawn, the temporary hand is discarded.

discardCard()
-The code for discardCard() is located at line 1226 of dominion.c
-The discardCard function takes as input four parameters:
 1) struct gameState state - a pointer to the gameState variable
 2) int handPos - the position of the hand of the card to return
 3) int currentPlayer
 4) int trashFlag - 1 to get rid of card, 0 to add to played hand
-It returns 0 on success.
-First the code checks the value of trashFlag. If it is < 1, the card is added to the played hand (playedCards[]) and the count of played cards is incremented (playedCardCount). The card is removed from consideration in one of two ways. If the card is either the last element in the hand array of if the card is the last remaining card in the hand, the handCount is simply decremented by one. Otherwise, it is effectively removed from the hand by swapping it with the last card in the hand, setting it to -1, and then decrementing the handCount by one.
 
updateCoins()
-The code for updateCoins() is located at line 1301 of dominion.c
-The updateCoins function takes as input three parameters:
 1) struct gameState state - a pointer to a gameState variable
 2) int player
 3) int bonus
-It updates the value of state->coins 
-First, the coin count is initialized to zero. Then, inside a for loop, the coin count is incremented by one, two, or three, depending on the type of card (copper, silver, or gold, respectively). If the player has a bonus to gain, that bonus is added to the coin count following the for loop.

