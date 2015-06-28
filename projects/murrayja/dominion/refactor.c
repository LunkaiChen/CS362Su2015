Jason Murray
murrayja
CS 362 - Summer 2015
Assignment 2



int play_smithy(int handPos, int currentPlayer, struct gameState *state);
int play_adventurer(int currentPlayer, struct gameState *state);
int play_village(int handPos, int currentPlayer, struct gameState *state);
int play_great_hall(int handPos, int currentPlayer, struct gameState *state);
int play_steward(int handPos, int choice1, int choice2, int choice3, int currentPlayer, struct gameState *state);

int play_steward(int handPos, int choice1, int choice2, int choice3, int currentPlayer, struct gameState *state)
{
	
    if (choice1 == 1)
	{
	  //+2 cards
	  drawCard(currentPlayer, state);
	  drawCard(currentPlayer, state);
	}
	
    else if (choice1 == 2)
	{
	  //+2 coins
	  state->coins = state->coins + 2;
	}
      else
	{
	  //trash 2 cards in hand
	  discardCard(choice2, currentPlayer, state, 1);
	  discardCard(choice3, currentPlayer, state, 1);
	}
			
      //discard card from hand
      discardCard(handPos, currentPlayer, state, 0);
      return 0;
	
}

int play_great_hall(int handPos, int currentPlayer, struct gameState *state)
{
	  //+1 Card
      drawCard(currentPlayer, state);
			
      //+1 Actions
      state->numActions++;
			
      //discard card from hand
      discardCard(handPos, currentPlayer, state, 0);
      return 0;
} 

int play_village(int handPos, int currentPlayer, struct gameState *state)
{
	  //+1 Card
      drawCard(currentPlayer, state);
			
      //+2 Actions
      state->numActions = state->numActions + 2;
			
      //discard played card from hand
      discardCard(handPos, currentPlayer, state, 0);
	  
      return 0;
}

int play_adventurer(int currentPlayer, struct gameState *state)
{
	int drawntreasure = 0;
	int cardDrawn;
	int temphand[MAX_HAND];
	int z = 0; //temp card holder
	
	while(drawntreasure<2)
	{
		if (state->deckCount[currentPlayer] <1)
		{//if the deck is empty we need to shuffle discard and add to deck
		  shuffle(currentPlayer, state);
		}
		drawCard(currentPlayer, state);
		cardDrawn = state->hand[currentPlayer][state->handCount[currentPlayer]-1];//top card of hand is most recently drawn card.
		if (cardDrawn == copper || cardDrawn == silver || cardDrawn == gold)
		{
			drawntreasure++;
		}
		else
		{
		  temphand[z]=cardDrawn;
		  state->handCount[currentPlayer]--; //this should just remove the top card (the most recently drawn one).
		  z++;
		}
	}
	while(z-1>=0)
	{
		state->discard[currentPlayer][state->discardCount[currentPlayer]++]=temphand[z-1]; // discard all cards in play that have been drawn
		z=z-1;
	}
    return 0;
}

int play_smithy(int handPos, int currentPlayer, struct gameState *state)
{
      //+3 Cards
	int i;
	for (i = 0; i < 3; i++)
	{
	  drawCard(currentPlayer, state);
	}
			
      //discard card from hand
      discardCard(handPos, currentPlayer, state, 0);
      return 0;
}

**********
***BUGS***
**********

BUG #1 :
	play_adventurer()
	- int drawnTreasure = 1; <---this should be initialized to 0.  by setting this to 1 the functionality of 
	  adventurer is changed, meaning only one treasure is draw from the pile, rather than 2.
	  
BUG #2 :
	play_smithy()
	- int i;
	for (i = 2; i < 3; i++) <---by setting i = 2 (rather than i = 0), the functionality of smithy is changed,
	 now instead of drawing an additional 3 cards, the player only gets 1.
	 
BUG #3 :
	play_great_hall()
	- an additional card is drawn, by making the call "drawCard(currentPlayer, state);" twice
	
BUG #4 :
	play_steward()
	- if choice1 == 2, then 20 coins are added, when only 2 should've been added to player's total :)