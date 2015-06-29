/***************************************************\
| Jonathan Beaty								    
| beatyj@onid.oregonstate.edu 						
| CS362 Summer 2015								    
| Assignment # 2 									
| documentation.c 									
| 													
| This file explains the adventurer and				
| smithy cards in dominion as well as the code		 
| and methods used for each respectively			
\***************************************************/

/****************/
Adventurer cards
/****************/

Draw cards until two treasure cards are drawn

Track whether the drawn card is a treasure card: copper, silver or gold 
Increment count of treasure cards based on if drwan card is a treasure card

If the card is not a treasure card then it decrements the overall handcount for the player 
and increases the count of cards that has been drawn.

Functionally speaking, it keeps track of a temporary hand that each drawn card is added to be displayed separately.
Nothing is actually done with the temporary hand once two treasures are drawn 
so the cards are placed back into the player's discard pile hence state->discard.

/****************/
Smithy Cards
/****************/

Draws additional 3 cards, adding them to the current player's hand. 

Once the cards are drawn via drawCard(),
the discardCard() function is called and all the player's cards are discarded.

/****************/
Methods
/****************/

discardCard()

The discardCard() function places the played card in the played card pile. 
If the card is not trashed, add the card to the played card pile. Then Set played
card to -1 and remove card from player's hand

If the last card in the hand array is played the decrement number of cards in hand.
Else if only one card in hand, decrement number of cards in hand.
Else, replace discarded card with last card in hand, set last card to -1 and
decrement number of cards in hand.

updateCoins() 

The updateCoins() function counts the number of coins a player has each turn by
resetting the player's coins, adding the turns current coins for each treasure card 
and adding in any bonuses