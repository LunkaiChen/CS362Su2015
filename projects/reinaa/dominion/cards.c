#include "cards.h"
#include <stdio.h>

int adventurerEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus)
{
  int currentPlayer = whoseTurn(state);
  int nextPlayer = currentPlayer + 1;

  int temphand[MAX_HAND];// moved above the if statement
  int drawntreasure=0;
  int cardDrawn;
  int z = 0;// this is the counter for the temp hand
  if (nextPlayer > (state->numPlayers - 1)){
    nextPlayer = 0;
  }

  while(drawntreasure<2){
	  if (state->deckCount[currentPlayer] <1){//if the deck is empty we need to shuffle discard and add to deck
		  shuffle(currentPlayer, state);
	  }
	  drawCard(currentPlayer, state);
	  cardDrawn = state->hand[currentPlayer][state->handCount[currentPlayer]-1];//top card of hand is most recently drawn card.
	  if (cardDrawn == copper || silver || gold)
		  drawntreasure++;
	  else{
		  temphand[z]=cardDrawn;
		  state->handCount[currentPlayer]--; //this should just remove the top card (the most recently drawn one).
		  z++;
	  }
  }
  while(z-1>0){
	  state->discard[currentPlayer][state->discardCount[currentPlayer]++]=temphand[z-1]; // discard all cards in play that have been drawn
	  z=z-1;
  }
  return 0;
}

int tributeEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus)
{
  int i;
  int currentPlayer = whoseTurn(state);
  int nextPlayer = currentPlayer++;

  int tributeRevealedCards[2] = {-1, -1};
  if (nextPlayer > (state->numPlayers - 1)){
    nextPlayer = 0;
  }

  if ((state->discardCount[nextPlayer] + state->deckCount[nextPlayer]) <= 1){
	  if (state->deckCount[nextPlayer] > 0){
		  tributeRevealedCards[0] = state->deck[nextPlayer][state->deckCount[nextPlayer]-1];
		  state->deckCount[nextPlayer]--;
	  }
	  else if (state->discardCount[nextPlayer] > 0){
		  tributeRevealedCards[0] = state->discard[nextPlayer][state->discardCount[nextPlayer]-1];
		  state->discardCount[nextPlayer]--;
	  }
	  else{
		  //No Card to Reveal
		  if (DEBUG){
			  printf("No cards to reveal\n");
		  }
	  }
  }
	    
  else{
	  if (state->deckCount[nextPlayer] == 0){
		  for (i = 0; i < state->discardCount[nextPlayer]; i++){
			  state->deck[nextPlayer][i] = state->discard[nextPlayer][i];//Move to deck
			  state->deckCount[nextPlayer]++;
			  state->discard[nextPlayer][i] = -1;
			  state->discardCount[nextPlayer]--;
		  }
			    
		  shuffle(nextPlayer,state);//Shuffle the deck
	  } 
	  tributeRevealedCards[0] = state->deck[nextPlayer][state->deckCount[nextPlayer]-1];
	  state->deck[nextPlayer][state->deckCount[nextPlayer]--] = -1;
	  state->deckCount[nextPlayer]--;
	  tributeRevealedCards[1] = state->deck[nextPlayer][state->deckCount[nextPlayer]-1];
	  state->deck[nextPlayer][state->deckCount[nextPlayer]--] = -1;
	  state->deckCount[nextPlayer]--;
  }    
		       
  if (tributeRevealedCards[0] == tributeRevealedCards[1]){//If we have a duplicate card, just drop one 
	  state->playedCards[state->playedCardCount] = tributeRevealedCards[1];
	  state->playedCardCount++;
	  tributeRevealedCards[1] = -1;
  }

  for (i = 0; i <= 2; i ++){
	  if (tributeRevealedCards[i] == copper || tributeRevealedCards[i] == silver || tributeRevealedCards[i] == gold){//Treasure cards
		  state->coins += 2;
	  }
		    
	  else if (tributeRevealedCards[i] == estate || tributeRevealedCards[i] == duchy || tributeRevealedCards[i] == province || tributeRevealedCards[i] == gardens || tributeRevealedCards[i] == great_hall){//Victory Card Found
		  drawCard(currentPlayer, state);
		  drawCard(currentPlayer, state);
	  }
	  else{//Action Card
		  state->numActions = state->numActions + 2;
	  }
  }
	    
  return 0;
}

int smithyEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus)
{
  int i;
  int currentPlayer = whoseTurn(state);
  int nextPlayer = currentPlayer++;

  if (nextPlayer > (state->numPlayers - 1)){
    nextPlayer = 0;
  }

  //+3 Cards
  for (i; i < 3; i++)
  {
	  drawCard(currentPlayer, state);
  }
			
  //discard card from hand
  discardCard(handPos, currentPlayer, state, 0);
  return 0;
}

int villageEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus)
{
  int currentPlayer = whoseTurn(state);
  int nextPlayer = currentPlayer++;

  if (nextPlayer > (state->numPlayers - 1)){
    nextPlayer = 0;
  }

  //+1 Card
  drawCard(currentPlayer, state);
			
  //+2 Actions
  state->numActions += state->numActions + 2;
			
  //discard played card from hand
  discardCard(handPos, currentPlayer, state, 0);
  return 0;
}

int great_hallEffect(struct gameState *state, int handPos)
{
  int currentPlayer = whoseTurn(state);

  //+1 Card
  drawCard(currentPlayer, state);

  //+1 Actions
  state->numActions++;

  //discard
  discardCard(handPos, currentPlayer, state, 0);

  return 0;
}
