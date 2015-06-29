/*
Lynda Phan
CS362 - Software Engineering II

smithy - An action card from the base set that allows the player to draw 3 cards on top of their deck. The cost for this action card is 4 coins. If the player has multiple smithy cards, they are allowed to use all of them during their turn. The role of the smithy card is a terminal draw meaning that it draws the cards at the expense of an action. This also means that if a player plays the smithy card at the start of their turn then smithy is the only action card they can play for that turn.

adventurer - A terminal action card from the base set that digs for Treasure cards in the player's deck. This action card will reveal cards from the player's deck until it finds two Treasure cards. It will then put those Treasure cards in the player's hand and discard the other revealed cards. This card cost as much as Gold, 6 coins.

int discardCard(int handPos, int currentPlayer, struct gameState *state, int trashFlag);
    description: When this function is called, it will discard the cards from the player's hand.
    params:
        Depends on dominion.h
        handPos: the position of the hand of the card to return
        currentPlayer: current player from gameState
        trashFlag: flags the discarded cards as trash or throwaway
        struct gameState *state

updateCoins(int player, struct gameState *state, int bonus);
    description: When this function is called, it will returns the count of a specific card in a specific player’s discard deck and hand.
    params:
        Depends on dominion.h
        player: specifies the player that is playing
        bonus: bonus points that the player accumulated if they played any action cards
        struct gameState *state
*/
