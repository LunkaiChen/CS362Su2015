BUG 1: (Smithy) Trashes Smithy card instead of placing it in the Played pile (flag in discardCard() set to 1)

BUG 2: (Adventurer) Removed copper from the treasure check, so drawing a card of that type will not increment
the drawntreasure variable.

BUG 3: (Village) Increments number of actions instead of adding 2.

BUG 4: (Gardens) Allows play (Gardens is a Victory card), draws 1 card for the player, and does not return
an error.