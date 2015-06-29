/*
Yevgeniy Dorfman
dorfmany
CS 362-400
Assignment 2

Card Documentation

Smithy

The Smithy card is an Action card. When played during the Action phase the player will draw three cards from their deck into their hand. When played, the  drawCard() function will be called, looped three times. The discardCard() function will then be called to remove the card to the discard pile.

Adventurer

The Adventurer card is an Action card. When played during the Action phase the cards will be drawn until two treasure cards are drawn. The treasure cards are added to the current players hand while all other drawn cards are discarded. When played a while loop will execute calling drawCard() adding the card to the current players hand. The while loop will continue to exececute until two treasure cards are drawn. If the drawn card is a treasure a drawn treasure counter will be incremented. If the drawn card is not a treasure, it will be saved to a temporary location and not be added to the players hand. After the two treasure cards have been drawn, all other drawn cards are discarded.

Function Documentation

discardCard()

Description: 

This function moves a card from the current player's hand to the discard pile or the trash pile. If the the card is marked as a trashed card, it will be moved to the trash pile. Else, if the card is not marked as trashed, the card will be added to the current player's  playedCards variable and playedCardCount will be incremented. Then, the card will be moved to the discard pile and the current player's handCount will be decremented.

Parameters:

int handPos - Position of the card in the player's hand. Will be used to detirmine which card should be removed.

int currentPlayer - The player from who's hand the card is to be removed

struct gameState *state - Pointer to current game state

int trashFlag - variable identifying if the the card needs to be discarded or trashed.


updateCoins()

Description:

This function updates the number of coins the current player has to spend during the buy phase. Coins are added from the number of treasure cards in a players hands as well as any bonuses. The function will set the coin variable to zero. It will then loop for the number of cards in the current players hand. For each treasure card, the number of coins variable will be increased by the amount of coins the treasure card represents. After this any bonus coins are added to the coin count.

Parameters:

int player - The current player

struct gameState *state - Pointer to current game state

int bonus - The amount of bonus coins to be added
*/

