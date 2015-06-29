Smithy
draw three cards from deck into players hand discard current card (smithy)

Adventurer
continue to draw cards until two treasure cards of been drawn.  Discard all non treasure cards
if the deck is empty shuffle discard and add to deck


discardCard()
takes in a player, their hand and card position, and the current game state as well as whether the card is going to be trashed.
IF card is trashed add to played pile
decrement played cards

if not a trashed card remove card from players hand checking edge cases

updateCoins()

reset coin amount and then loop through a players hand counting coin values  return new coin value with the potential for a bonus depending on what card you had.
