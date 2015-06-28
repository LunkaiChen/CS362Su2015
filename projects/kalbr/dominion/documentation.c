Documentation of Dominion
Author: Ryan Kalb
Last Updated: 6/28/15

Cards
Adventurer:
-------------
"Reveal cards from your deck until you reveal 2 Treasure Cards. Put those Treasure cards into your hand and discard the other revealed cards."
case adventurer:
      while(drawntreasure<2){
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
      	z=z-1;
      }
      return 0;

Using CardEffect() the adventuerer card effect is referenced by a switch statement where is enters its main loop.
There is a main while loop that runs until 2 treasure cards are drawn.
To make sure the deck is not empty there is a quick check to shuffle the deck if the current players deck is empty. 
If not empty, a card will be drawn, if it is a tressure card then a the variable drawnTressure is updated with +1.
If not tressure the car is discarded instantly.
At end of card discard the cards 

Smithy:
--------------
"+3 Cards"
    case smithy:
      //+3 Cards
      for (i = 0; i < 3; i++)
	{
	  drawCard(currentPlayer, state);
	}
			
      //discard card from hand
      discardCard(handPos, currentPlayer, state, 0);
      return 0;

Draw 3 Cards from deck for current player. By calling the drawCard() method 3 times using a for loop. 
After 3 cards are drawn discard the current action card.

discardCard() Method:
---------------------
int discardCard(int handPos, int currentPlayer, struct gameState *state, int trashFlag);

Input:
int handPos: this is the location of current card in the deck. Or what card your hand is on. 
int currentPlayer: This is the value of the current player, each player is given a unique int value.
struct gameState *state: This is the struct that contains the entire current game, and all of the information used for it. 
int trashFlag: When this flag is set to 0 it returns car to discard deck, and when set to 1 it will trash the card. 


Description:
Takes in current card and places it in a players discard deck or trash depending on how the trashFlasg is set.

updateCoins() Method:
----------------------
int updateCoins(int player, struct gameState *state, int bonus)

Input:
int player: This is the value of the current player, each player is given a unique int value.
struct gameState *state: This is the struct that contains the entire current game, and all of the information used for it. 
int bonus: A value passed to add to the current coins in hand.

Description:
Updates coin value in hand with coin values in current hand, and added value from a value given by bonus.






