/*
#1: On smithy card:
I made it so that it gets discarded to trash instead of discard pile.

void play_smithy(struct gameState *state, int handPos) {
  int currentPlayer = whoseTurn(state);
  int i;
  //+3 Cards
  for (i = 0; i < 3; i++)
    {
      drawCard(currentPlayer, state);
    }
			
  //discard card from hand
  discardCard(handPos, currentPlayer, state, 1); //BUG is introduced here as 1 instead of a 0.
}


#2: On adventurer card:
I made it so only 1 treasure card is drawn when used.

void play_adventurer(struct gameState *state){
	int currentPlayer = whoseTurn(state);
	int cardDrawn;
	int temphand[MAX_HAND];
	int drawntreasure = 0;
	int z = 0;

	while(drawntreasure < 1){ //BUG here at <1 instead of <2
		if (state->deckCount[currentPlayer] <1){//if the deck is empty we need to shuffle discard and add to deck
		shuffle(currentPlayer, state);
		}
	
		drawCard(currentPlayer, state);
		
		cardDrawn = state->hand[currentPlayer][state->handCount[currentPlayer]-1];//top card of hand is most recently drawn card.
		if (cardDrawn == copper || cardDrawn == silver || cardDrawn == gold)
			drawntreasure++;
		else{
			temphand[z]=cardDrawn;
			state->handCount[currentPlayer]--; //this should just remove the top card (the most recently drawn one).
			z++;
		}
	}

	while(z-1>=0){
		state->discard[currentPlayer][state->discardCount[currentPlayer]++]=temphand[z-1]; // discard all cards in play that have been drawn
		z = z - 1;
	}
}


#3: On sea hag card
It gives the player who played the sea hag card the curse instead of the other player.

void play_sea_hag (int handPos, int currentPlayer, struct gameState* state){
	
	int i;
	for (i = 0; i < state->numPlayers; i++){
	if (i == currentPlayer){ //BUG is here as it should be != to current player
	  state->discard[i][state->discardCount[i]] = state->deck[i][state->deckCount[i]--];
	  state->deckCount[i]--;
	  state->discardCount[i]++;
	  state->deck[i][state->deckCount[i]--] = curse;//Top card now a curse
	}
  }
}

#4: On village card
When discarding the played card from your hand, a bug is introduced that instead 
calls drawCard for the current player.

void play_village (int handPos, struct gameState *state) {
	int currentPlayer = whoseTurn(state);
	//+1 Card
	drawCard(currentPlayer, state);

	//+2 Actions
	state->numActions = state->numActions + 2;

	//discard played card from hand
	drawCard(currentPlayer, state); // BUG: should be discardCard, so not only do you keep village
	//but you also end up drawing another card instead of discarding.
	return 0;
}



#5: On great hall card
I have changed it to give 5 addition actions instead of 1 additional action.

void play_great_hall(struct gameState *state, int handPos) {
  int currentPlayer = whoseTurn(state);
  //+1 Card
  drawCard(currentPlayer, state);
  
  //+1 Actions
  state->numActions += 5; //BUG introduced here gives 5 additional actions instead of 1.
			
  //discard card from hand
  discardCard(handPos, currentPlayer, state, 0);
}
*/