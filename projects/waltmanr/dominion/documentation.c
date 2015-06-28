Adventurer:
This card reveals cards from the deck until two treasures have been shown, and then adds those treasures to the player's hand. Other cards revealed this way are discarded.
The function for this card will continue to loop until two treasure cards have been drawn. Within this loop, the function takes the following steps:
-Check to see if the player's deck is empty. If it is empty, re-shuffle the deck
-Draw a card
-Check if the card is a treasure 
--If it is, increment the drawntreasure counter
--If it is not, reduce the players hand size by one and add the drawn card to a temporary hand
-Continue looping until two treasures are revealed
-Add the discarded non-treasure cards to the player's discarded cards list
-Discard the Adventurer card

Smithy:
-Draw three cards, adding them to the player's hand
-Discard the Smithy card

discardCard(int handPos, int currentPlayer, struct gameState *state, int trashFlag)
-Determine if discarded card should be trashed
--If card is not trashed, add it to the playedCards array and increment the playedCardsCount
--If card is trashed, it is NOT added to the play pile. This will remove it from the player's deck permanently!
-Remove the card from the player's hand
-If more cards are left in hand, make the next card the last card in hand

updateCoins(int player, struct gameState *state, int bonus)
-Set current coin amount to 0
-Loop through each card in player's hand
--If the current card is a copper, add 1 to the count
--If the current card is a silver, add 2 to the count
--If the current card is a gold, add 3 to the count
-Add any bonus coins to the count
-Return the count