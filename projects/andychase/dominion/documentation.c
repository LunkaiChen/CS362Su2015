/*

# Explanation of Card Types

## Smithy

Game: The smithy card can be activated during a player's action step. It lets a player draw +3 cards.

Technically: In dominion.c the cardEffect routine takes a card, some card variables, a game state,
a hand position and a bonus number which isn't used currently. In the routine there is a switch over the card
type and if the current card type is a smithy card then drawCard is run three times and the smithy card is discarded
from your hand.

## Adventurer

Game: The adventurer card can be activated during a player's action step. It lets you add two treasure cards
in your hand by searching your deck until two are found (shuffling and building your deck if necessary).

Technically: In dominion.c the cardEffect routine switches over the card type. If the card type is an adventurer
type card it loops until the player has drawn two treasure cards. During the loop the player draws cards into a
temp hand and putting the two treasure cards into your hand. Afterwards the temphand is added to the discard pile.
If at any time the deck length drops below 1 the shuffle method is called and the deck is re-generated.

# Method Types

## DISCARDCARD()

The DISCARDCARD method performs the operation of removing a card from the part of the gameState
that holds player's card. The method takes a hand position, a player index, a game state, and a trash flag. The method
works by adding the card to the played card array (if the trash flag is not set), reducing the number of cards
in the players hand by one and then replacing the trashed card with the last card in a players hand (if possible).

## UPDATECOINS()

The update coins method is responsible for adding up the treasure cards in a player's hand to calculate how much
gold players can spend during their turn. The method takes a player index, a game state, and a the amount of bonus gold
to add.

It works by looping through the cards in the player's hand and adding up the value of each card that is a
treasure card.

*/
