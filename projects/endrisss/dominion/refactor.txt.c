Seth Endriss-Dygert
endrisss
06/24/2015
CS 362 Summer 2015
Assignment 2
refactor.txt

*************************************************
smithyCardEffect function:
The smithyCardEffect function adds three cards to the player's hand and then removed the smithy card.

struct gameState *state: a pointer to the structure which represents the games current state
int currentPlatyer: the current player
int handPos: the position of the card within the player's hand

Calls the drawCard function three times and then calls the discardCard function to discard the smithy card. Returns 0.

Bug(s): 
Does not call the discardCard function.

*************************************************
adventurerCardEffect function:
The adventurerCardEffect function draws cards from the deck until two treasure cards are found. The treasure cards are moved into the player's hand while all other drawn cards are moved into the discard pile.

struct gameState *state: a pointer to the structure which represents the games current state
int currentPlatyer: the current player

A while loop is entered until the number of drawn treasure cards reaches two. If the deck is empty the discarded cards are shuffled back into the deck with the shuffle function. The drawCard function is called and the top card is compared to the copper, silver, and gold types to determine if the drawn card is a treasure card. If a treasure card is encountered the drawn treasure counter is incremented. If a treasure card is not encountered the card is moved into a temporary hand. The while loop then loops back to the beginning.

Once two treasure cards have been drawn, as indicated by the drawn treasure counter the carts within the temporary hand are moved into the discarded card pile and the cardEffect function returns 0 to exit the function.

Bug(s):
drawnSteasure while loop is <= instead of <
When setting cardDrawn the handCount decrements currentPlayer instead of referencing the one less than currentPlayer's hand count.
When decrementing the current player's hand count the current player is instead decremented when attempting to remove the top card.

*************************************************
stewardCardEffect function:
Player is given a choice to either draw 2 cards, receive +2 coins, or trash 2 cards in their hand.

struct gameState *state: a pointer to the structure which represents the games current state
int currentPlatyer: the current player
int choice1: determines if the player chooses to draw cards [1], receive coins [2], otherwise trash 2 cards.
int choice2: first card to trash if the player chooses to trash 2 cards
int choice3: second card to trash if the player chooses to trash 2 cards

If choice1 is 1 then the player has chosen to draw 2 cards and drawCard is called twice. If choice1 is 2 then the player has chosen to receive 2 coins and the current coin count is incremented +2. If choice1 is not 1 or 2 then the player has chosen to trash 2 cards from their hand. discardCard is called twice, first discarding the card as indicated by choice2, and then discarding the card as indicated by choice3.  The function then discards the steward card from the player's hand and returns 0.

Bug(s):
Within the trash card else statement discardCard is called passing choice2 twice instead of choice2 and then choice3.
Parameter handPos is not necessary and the parameters are passed in the wrong order to the function.

*************************************************
cutpurseCardEffect function:
Player received +2 coins and all other players must discard a copper card, if they have one, from their hands.

struct gameState *state: a pointer to the structure which represents the games current state
int currentPlatyer: the current player
int handPos: the position of the card within the player's hand

First the updateCoins function is called which recalculates the current count count for each player. Next each player, except for the current player, is iterated through. The hand of each player is checked until a copper card is found. If a copper card is found that card is discarded and the next player's hand, if any, is inspected. While iterating through each player's hand once if the last card is encountered then the cards within the hand are revealed using a printf statement. This reveal is only done in debug mode. As the previous if statement contains a break statement then the check on the last card will only be entered if no copper cards were encountered. Finally the cutpurse card is discarded and 0 is returned.

Bug(s):
The second for loop (j) contains a semicolon.
The second for loop (j) increments i instead of j.
The if statement comparing the current card to a copper has the i and j reversed in the 2-d array.

*************************************************
seaHagCardEffect
All other players, except the current player, discards the top card from their deck and then gains a new curse card which goes to the top of their deck.

struct gameState *state: a pointer to the structure which represents the games current state
int currentPlatyer: the current player

Each player, except the current player, in incremented through. The deckCount is decremented and the discardCount is set to be the new value of the deckCount. The discardCount is then incremented and the deckCount decremented. The top card is then set to be a curse card. Finally the function returns 0.

Bug(s)
discardCount is decremented instead of incremented
deckCount is incremented instead of decremented
