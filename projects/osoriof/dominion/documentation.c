discardCard()
The method starts by checking if the card has been trashed already. If not the card
is moved to the played pile. Then it sets the position of the card to -1. Then the function
shifts cards in the player's hand depending on where the card being discarded was: if it was
last or the only card, it is just removed; if it was somewhere in between then the card to
its right is moved over.

updateCoins()
This method uses a loop to look at each card in the players hand. When it finds a card
that matches a coin, it adds the value of that coin to the players coint count. If there
is a bonus to the players coins, it is added after looping through the cards in their
hand.

Smithy
Calls the drawCard function 3 times to add three cards to the player's hand. After that it
is discarded.

Adventurer
This card will keep drawning cards until it finds two treasure cards. It checks this with
the drawntraesure variable. If it hasn't found two treasure cards and there are no cards left
to draw from, the deck will be reshuffled. If the card is a treasure card it is added to
the player's hand and the drawntreasure count is increased, otherwise it goes to a temporary hand.
Once there are two treasure cards, the temporary hand is discarded. 

