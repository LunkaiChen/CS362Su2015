Smithy: instead of drawing cards in a for loop from i=0 to i<3, runs from i=0 to i<=3, so it draws 4 cards instead of 3

Adventurer: change comparison operator, instead of making sure the card is copper, silver, or gold, checks to make sure card is not copper, silver, or gold. The card ends up having the opposite of the stated effect; rather than keeping the first 2 coin cards, it keeps the first 2 non-coin cards. 

Village: instead of drawing a card into your hand, draws a card into the previous player's card. If the current player has int value 0, action is undefined.

Council Room: change the comparison operator. The function is intended to run in a for loop, allocating a card to every player except the current player. Instead, it adds an additional card to the current player's hand.

Cutpurse: No changes, should work as originally intended.


