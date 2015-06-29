Smithy – Smithy is an Action card. When played, the current player gets three additional cards from the deck.
In the code, there is a for loop that loops three times, each time calling the drawCard() function.
Then, it calls the discardCard() function to place the cards of that hand that were not trashed into
the discard pile.

adventurer – Adventurer is an action card that hunts for two Treasure cards from your deck.
Any cards revealed during the hunt goes into the discard pile. In the code, there is a while loop that
runs until drawntreasure is 2 or greater. In the while loop is an if statement that shuffles the
discarded cards if the deck becomes empty. Then the drawCard() function is called.
If the cardDrawn is a Treasuare card (copper, silver, gold), it is added to the hand and drawntreasure
is incremented. If not a Treasure card, it is discarded with a second while loop.

discardCard() – This function moves all the cards played from the current hand into the
discard pile as long as it has not been trashed.

updateCoins() – This function resets the coin count, then using a loop, updates the coin value
for each treasure card in the player’s hand. It also adds bonus value to Treasure cards if an Action card
allows for the bonus coin values.
