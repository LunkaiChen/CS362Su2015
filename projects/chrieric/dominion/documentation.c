
/*
smithy
calls drawCard(currentPlayer,state) method 3 times passing the current player and state
calls discardCard(handPos,currentPlayer,state,0) to remove the played smithy card from your hand
*/

/*
adventurer
while less than two treasures have been drawn continues to draw cards using the drawCard() method
if the deck is empty it will shuffle the discard pile and add to the deck
updates cardDrawn variable (to check if it is a treasure card)
returns once two treasure cards have been drawn and adds them to hand
*/

/*
village
calls drawcard method once
sets state's numActions property to the current value + 2
discards the current village card
returns
*/

/*discardCard
checks if card is to be trashed, if not it is added to played cards pile
sets the hand property at the currPlayer/handpos location to negative 1
it then updates the handcount to the current -1
*/

/*updateCoins
takes player, state and bonus as inputs
initially resets the coin count to 0
it then iterates through the current player's hand and adds all the coins to a count variable
based on their corresponding value, it then adds the bonus to the state's coin property
returns
*/



