smithy:
for loop adds 3 cards to player's hand
smithy card is discarded

adventurer:
A while loop is run that draws cards until 2 treasure cards are drawn.
Treasure cards are stored in the player's hand.
All other cards are stored in an array tempHand.
After 2 treasure cards are drawn, another while loop discards
the cards in tempHand.


updateCoins():
uses a for loop to iterate through each card in a player's hand. 
If the card is copper it adds 1 to coins. 
If the card is silver it adds 2 to coins.
If the card is gold it adds 3 to coins.

After the for loop is finished, the bonus amount is added to the number of coins.

discardCard():

If Trash Flag is not set:

	Add card to played cards.
	Increment the played card count

Set the value of card to -1 (mark it as played)

If last card in hand array is played:
	Decrement the handCount(remove the card from the hand)

Else if only 1 card in hand (handCount = 1):
	Decrement the handCount(remove the card from the hand)

Else:
	Swap discarded card with last card in hand
	Mark the last card as played (set to -1)
	Decrement the handCount(remove the card from the hand)






