Smithy Card

The Smithy Card is an action card which gives the current player 3 random cards.  When the smithy card is played, currentPlayer and 
state are passed to the drawCard function.  It’s called 3 times using a for loop.  Then, the discardCard function is called to handle
the discarding of the smithy card.  The handPos of the smithy card, currentPlayer and state are passed as arguments to discardCard. 

Adventurer Card

The adventurer card draws two treasures for the player.  It does this using a while loop.  It essentially continues to draw random 
cards until 2 treasures are drawn.  Within the while loop, an if statement handles the shuffling.  Then drawCard is called, again 
with currentPlayer and state sent as arguments, and the top card of the deck is drawn.  An if statement determines if it is a 
treasure card.  If so, the treasure counter is incremented and the card added to the hand, else the card is added to the temp hand. 
Then a while loop uses the discardCard function to empty the temp hand.  

discardCard() Method

The discardCard() method is obviously used throughout the game each time a card is discarded.  It receives int supplyPos, struct 
gameState * state, int toFlag, and int player as arguments.  The method first uses an if statement to see if the trashFlag is set 
which would mean the card is to be removed.  If the flag is not set, the card is discarded and added to the played pile and the 
played pile is incremented.  The card is set to -1.  

An if statement then determines if the last card in the hand was played.  If so, handCount is decremented.  Else if, the player 
is on their last card, handCount is decremented.  Else, the last card in hand replaces the discarded card and is set to -1 and 
handCount is decremented. 

updateCoins() Method

updateCoins is used to change the number of coins that a player may use on that hand.  3 parameters are passed:  player (current 
player), state (pointer to gamesate) and bonus (additional  coins to be added).   When the method is called, the number of coins 
is set to 0 and it traverses through the player’s hand using a for loop.  The loop checks each card and increments coins by 1 if 
a copper card is found, by 2 if a silver card is found and by 3 if a gold card is found.  Then any bonus available is added.  
The function returns 0.  

