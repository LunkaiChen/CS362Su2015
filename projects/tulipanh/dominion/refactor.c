Adventurer:
The code for this card has been moved into the adventurerCard() function which takes as arguments the values of currentPlayer and state.
This function uses its own instances of variables drawnTreasure, cardDrawn, and tempHand[] so those have been removed from the cardEffect() function.
This function returns 0 on completion, so the switch statement in cardEffect() has just been reduced to "return adventureCard(currentPlayer, state)".
The line:
cardDrawn = state->hand[currentPlayer][state->handCount[currentPlayer] - 1];
has been changed to:
cardDrawn = state->hand[currentPlayer][state->handCount[currentPlayer]];
The line:
state->discard[currentPlayer][state->discardCount[currentPlayer]++]=tempHand[i-1];
has been changed to:
state->discard[currentPlayer][state->discardCount[currentPlayer]++]=tempHand[i];

Smithy:
The code for this card has been moved into the smithyCard() function which takes as arguments the values of currentPlayer, handPos, and state.
This function returns 0 on completion, so the switch statement in cardEffect() has been reduced to "return smithyCard(currentPlayer, handPos, state)".
The line:
discardCard(handPos, currentPlayer, state, 0);
has been changed to:
discardCard(i, currentPlayer, state, 1);

Treasure Map:
The code for this card has been moved into the treasureMapCard() function which takes as arguments the values of currentPlayer, handPos, and state.
This function uses its own instance of the variable index, so that has been removed from the cardEffect() function.
This function returns 1 if a second Treasure Map card is found and -1 if a second Treasure Map is not found.
The switch statement in cardEffect() has been reduced to "return treasureMapCard(currentPlayer, handPos, state)".
The line:
if(state->hand[currentPlayer][i] == treasure_map && i != handPos)
has been changed to:
if(state->hand[currentPlayer][i] == treasure_map && i != index)

Village:
The code for this card has been moved into the villageCard() function which takes as arguments the values of currentPlayer, handPos, and state.
This function returns 0 on completion, so the switch statement in cardEffect() has just been reduced to "return villageCard(currentPlayer, handPos, state)".

Remodel:
The code for this card has been moved into the remodelCard() function which takes as arguments the values of currentPlayer, handPos, choice1, choice2, and state.
The function should return 0 if successful or -1 if the chosen card is worth more than 2 more than the dicarded card.
The switch statement in cardEffect() has been reduced to "return remodelCard(currentPlayer, handPos, choice1, choice2, state)".
The line:
gainCard(choice2, state, 0, currentPlayer);
has been changed to:
gainCard(choice1, state, 0, currentPlayer);