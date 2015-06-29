Sang Hoon Lee
CS362 Summer 2015
Assignment 2
documentation.c

smithy
Draw 3 cards. Uses a for-loop to call drawCard() 3 times which draws 3 cards from the user's deck.
It then calls discardCard() to discard the smithy card.

adventurer
Draw cards until 2 treasure cards are drawn. Uses a while loop to draw cards and if a treasure card
is drawn increments drawntreasure. If the drawn card is not a treasure card, it adds the card into 
temphand. At the end, it uses a while loop to discard the cards in temphand.

discardCard()
Function used to discard a player's card. It takes 4 arguments, handPos, currentPlayer, state and trashFlag.
It first checks if trashFlags is set. If it is not set, then the card is added to the played pile and playedCardCount
is increment.
The function then proceeds to set the played card to -1. Then it uses an if statement to determine whether if the
card removed from a player's hand is the last card. If so, it decrements the handcount of the current player. Else if,
if there is only one card in the player's hand, it decrements player's handcount. Otherwise, it sets the
currentplayer's discarded card with last card in their hand, sets the last card to -1, and decrements the 
handcount of the current player.

updateCoins()
Function used update the coin count of the players. It takes 3 arguments, player, state, and bonus. It first
resets the coin count to 0. It then uses a for loop to loop through every card in the player's hand. 
In the for loop, the function uses an if statement to determine if the current card is copper, silver, or gold. 
For copper, it add 1 onto coins. For silver, it adds 2 and for gold it adds 3. After the for loop, it then adds
the bonus amount that was passed into the function onto coins.
