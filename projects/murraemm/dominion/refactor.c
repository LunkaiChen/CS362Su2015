////////////// CARD FUNCTIONS ///////////////
int play_adventurer(int currentPlayer, struct gameState *state);
int play_council_room(int currentPlayer, struct gameState *state, int handPos);
int play_feast(int currentPlayer, struct gameState *state, int choice1);
int play_smithy(int currentPlayer, struct gameState *state, int handPos);
int play_village(int currentPlayer, struct gameState *state, int handPos);

////////////// ERRORS INTRODUCED ///////////////
Adventurer:
  - changed shuffle to reshuffle if deck is not empty
      if (state->deckCount[currentPlayer] >1) {
        shuffle(currentPlayer, state);
      }
  - changed card draw to put treasure cards in discard instead of into hand
      if (cardDrawn == copper || cardDrawn == silver || cardDrawn == gold) {
        drawntreasure++;
        temphand[z]=cardDrawn;
      }

Council Room:
  - removed increment to number of buys
      REMOVED(state->numBuys++;)
  - changed to use wrong number of other players when drawing cards
      for (i = 0; i < state->numPlayers - 1; i++) {

Feast:
  - added gained card to hand instead of discard

Smithy:
  - added a +1 action Condition
      state->numActions = state->numAction + 1;
  - set trash flag on discard so card will be removed from game

Village:
  - changed number of added actions to 1
