Added funections:
int playAdventurer(int drawntreasure, int nextPlayer, int currentPlayer, struct gameState *state, int cardDrawn, int z, int temphand[])
int playSmithy(int i, struct gameState *state, int currentPlayer, int handPos)
int playVillage(struct gameState *state, int currentPlayer, int handPosi)
int playBaron(struct gameState *state, int currentPlayer, int choice1)
int playMine(struct gameState *state, int choice1, int choice2, int currentPlayer, int handPos, int i, int j)

***************************************************
Bugs introducted:

Adventurer-
The next player in the round receives the effects of this card
Reshuffle deck if fewer than 'z' cards

Smithy-
Card not added to played pile after use - trashed flag set to 1

Village-
No bugs

Baron-
Player gains a copper instead of an estate

Mine-
Uses 'j' for hand position of card to be discarded
gainCard sends card to deck instead of hand
