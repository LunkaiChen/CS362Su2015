//Sang Hoon Lee
//CS362 Summer 2015
//Assignment 2
//refactor.c
//All implementations added to dominion.c and headers added to dominion_helpers.h


//function for adventure card
//bug introduced: draws 3 treasure cards instead of 2
void call_adventurer(int currentPlayer, struct gameState *state){
	int drawntreasure = 0;
	int cardDrawn;
	int z = 0;
	int temphand[MAX_HAND];

	while (drawntreasure < 3){  //bug: 3 cards drawn instead of 2
		if (state->deckCount[currentPlayer] < 1){//if the deck is empty we need to shuffle discard and add to deck
			shuffle(currentPlayer, state)
		}

		drawCard(currentPlayer, state);
		cardDrawn = state->hand[currentPlayer][state->handCount[currentPlayer]-1];//top card of hand is most recently drawn card.
		if (cardDrawn == copper || cardDrawn == silver || cardDrawn == gold){
			drawntreasure++;
		}
		else{
			temphand[z] = cardDrawn;
			state->handCount[currentPlayer]--;//this should just remove the top card (the most recently drawn one).
			z++;
		}
	}

	while (z-1 >= 0){
        state->discard[currentPlayer][state->discardCount[currentPlayer]++] = temphand[z-1]; // discard all cards in play that have been drawn
        z = z - 1;
	}
}

//function for council_room card
//bug introduced: sets the trashflag argument for the discardCard function to 1.
void call_council_room(int currentPlayer, int handPos, struct gameState *state){

    //+4 Cards
    for (i = 0; i < 4; i++){
	  drawCard(currentPlayer, state);
	}

    //+1 Buy
    state->numBuys++;

    //Each other player draws a card
    for (i = 0; i < state->numPlayers; i++){
        if (i != currentPlayer){
	      drawCard(i, state);
	    }
	}

    //put played card in played card pile
    discardCard(handPos, currentPlayer, state, 1);//bug: sets trashflag argument as 1.
}

//function for smithy card
//bug introduced: draws 4 cards instead of 3
void call_smithy(int currentPlayer, int handPos, struct gameState *state){

    //+3 Cards
    for (i = 0; i <= 3; i++){
	  drawCard(currentPlayer, state);
	}

    //discard card from hand
    discardCard(handPos, currentPlayer, state, 0);

}

//function for village card
//bug introduced: does not add any actions to numActions
void call_village(int currentPlayer, int handPos, struct gameState *state){
     //+1 Card
    drawCard(currentPlayer, state);

      //+2 Actions
    state->numActions = state->numActions; //bug: +2 numActions not added

      //discard played card from hand
    discardCard(handPos, currentPlayer, state, 0);

}

//function for great_hall card
//bug introduced: decrements numActions instead of incrementing
void call_great_hall(int currentPlayer, int handPos, struct gameState *state){

      //+1 Card
      drawCard(currentPlayer, state);

      //+1 Actions
      state->numActions--;//bug: decrements numActions instead of incrementing

      //discard card from hand
      discardCard(handPos, currentPlayer, state, 0);

}

