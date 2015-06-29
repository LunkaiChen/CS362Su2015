playAdventurer():
Parameters: 
1. array of integers that will hold a temporary hand
2. struct containing the state of the game
3. integer representing the current player.

The function is implemented and called in the original switch. The code is the same other than declaring integers z, drawntreasure, and cardDrawn within this function rather than in cardEffect. 

I introduced two bugs in the function. The first is that the deck will reshuffle anytime there are fewer than 4 cards left in the deck. The second is that the drawntreasure counter will only increment if the card is a copper, it will not increment if the card is a gold or silver. This could result in adding many more cards if the player has many silvers and golds, but will work correctly if there are only copper cards drawn.

playSmithy():
Parameters:
1. integer representing the current player.
2. struct containing the state of the game
3. integer representing the current position in the hand

The function is identical to the code in the original other than declaring the counter i within this function. 

I introduced only one bug which is to set the trash flag to on. This will result in throwing out this card which will prevent it from being used again. 

playBaron():
Parameters: 
1. integer representing the current player.
2. struct containing the state of the game.
3. integer representing a bolean indicating if the discarded card is an estate.

The function maintians the same code from the switch.  

I introduced a bug that will give the player four coins for each estate card in the hand. I did this by changing the card_not_discarded from zero to one at the end of the first if statement in the while loop. 

playCouncilRoom():
Parameters:
1. integer representing the current player.
2. struct containing the state of the game
3. integer representing the current position in the hand

The function is identical to the code in the original other than declaring the counter i within this function. 

I made this bug very tricky to find. I reduced the number of cards given to the player playing this cards in the initial for loop so that the player gets only three cards here. However, I changed the second for loop so that the player playing the card gets a fourth card here, but the other players do not. This may be difficult to detect as the player playing the card will get the correct number of cards but others will not. 

playVillage():
Parameters:
1. integer representing the current player.
2. struct containing the state of the game
3. integer representing the current position in the hand

The function is identical to the code in the original.

The bug introduced takes the card just drawn and throws it in the trash. This is done by discarding the card at handPos + 1 and setting the trashflag to 1. 