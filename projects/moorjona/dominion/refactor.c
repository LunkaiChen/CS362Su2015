Bugs Introduced to Dominion Cards for Assignment 2:

Adventurer Card:
    After the adventurer effect draws a card and compares that card to a treasure card, if the card is not
    a treasure then the card is not discarded from the hand.
    
    To fix, add "state->handCount[currentPlayer]--;" to the else statement after the comparison to card_drawn.

    
Remodel Card:
    When the card is discarded, I switched the flag on discardCard() so that the remodel card is trashed and the card picked by remodel is discarded.  (And found that there already is a bug in that the remodel card was set to discard instead of trash!)
    
    To fix, reverse the flags on both calls to discardCard() 
    

Sea Hag Card:
    The card will now only give the person who played it a curse instead of giving it to every other player.  (My first idea was to swap the increment/decrement operation after adding the curse to the deck, but then I saw that was already done!)
    
    To fix, change the == logic check back to !=.
    

    
Smithy Card:
    No Bugs added


Steward Card:
    If the player chooses to trash 2 cards, the cards passed to discardCard() are incorrect.  They should be the cards given to the player by choice2 and choice3 variables; instead I introduced a bug where they are given by choice1 and choice2 variables.  So card in handPos == 3 will always be trashed.
    
    To fix, change the variables choice1 & choice2 to choice2 & choice3.