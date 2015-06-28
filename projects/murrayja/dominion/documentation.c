Jason Murray
murrayja
CS 362 - Summer 2015
Assignment 2

********************
Cards documentation*
********************

SMITHY :

The smithy card is an action card.  By playing the smithy, the player can then
draw an additional 3 cards into their hand.  One possible use of this could be
to add more treasure cards into your hand so that you can purchase something.  

ADVENTURER : 

This action card allows you to view cards in your deck until you find 2 treasure
cards.  The 2 treasure cards are then added to your hand, and the others are
discarded.  Again, this could be useful should you want to buy something.

*********************

*********************
Method documentation*
*********************

discardCard() :

inputs:
  -hand position
  -current player
  -game state
  -trash flag

outputs: 
  -none

description:
  -if the trash flag is not set (< 1), add the card to the played pile
    -update the last played card to be the current card
    -increment the number of played cards

  -set the played card = -1
  -if the last card has been played (previous assignment)
    -decrement players card count

  -else
    -replace dicarded card with the last card in your hand
    -set the last card = -1
    -decrement players card count

updateCoins() :

inputs:
  -player
  -game state
  -bonus

outputs: 
  -none

description:
  -zero out coin count

  -run through each card in players hand (for loop)
    -if copper, coin += 1
    -if silver, += 2
    -if gold, += 3

  -state->coins += bonus (if any)



*********************