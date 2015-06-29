discardCard() Documentation:
The discardCard function is passed 4 parameters: handPos, currentPlayer, state, and trashFlag
handPos: indicates the position in the hand of the card that is to be removed
currentPlayer: indicates the player whose hand is being affected
state: is a pointer to the gamestate struct containing the current game's key details
trashFlag: indicates whether the card being removed is going to the trash pile or is being played

If the trash flag is not set (i.e. < 1) then the chosen card is added to the playedCards array in the gamestate and the count of the number of played cards is incremented.
The position in the player's hand indicated by handPos is changed to -1.
If the card to be discarded is at the end of the player's hand or is the only card int he player's hand, that player's hand count is decremented.
Otherwise, the card to be discarded is switched with the card at the end of the player's hand, and the player's hand count is decremented.
The function returns 0 in all cases.


updateCoins() Documentation:
The updateCoins function is passed 3 parameters: player, state, and bonus
player: indicates the player whose coin count is changing
state: is a pointer to the gamestate struct containing the current game's key details
bonus: indicates the amount of coins that should be added to the coin total on top of the actual treasure cards in the player's hand

The number of available coins is reset to 0. The function then goes through each card in the player's hand.
If a card is a treasure card (copper, silver, or gold) then a number is added to the available coin count depending on which it is.
(1 for copper, 2 for silver, 3 for gold).
Then the bonus is added to the coin count.
The function returns 0 in all cases.


Smithy Documentation:
If the card passed to the cardEffect() function is the smithy card, then the drawCard() function is called three times for the current player.
Then the dicardCard() function is called with the smithy card's hand position and the current player being passed into it, and the trash flag not set.
The value 0 is returned by the cardEffec() function.


Adventurer Documentation:
If the card passed to the cardEffect() function is the adventurer card, then cards are drawn until two treasures are found.
If the deck becomes empty while still looking for treasures, the shuffle() function is called to reshuffle the dicard pile into the deck.
After each card is drawn, the card is checked to see if it is a copper, a silver, or a gold card. If it is, the drawnTreasures counter is incremented.
If the drawn card is not a treasure, the card is removed from the player's hand and added to a temporary hand.
This process continues until the drawnTreasures counter reaches 2.
Then all the cards held int he temporary hand are discarded.
The value 0 is returned by the cardEffect() function.
