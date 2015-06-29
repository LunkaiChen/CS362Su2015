

/*
smithyNew
Input: handposition, current player, state
Output: integer value
Overview: This function essentially has the current player draw 3 cards and then discard the smithy card
that they have already played
Bug: A bug was introduced that will send the smithy card to the trash instead of to the played cards pile.
*/

/*
adventurerNew
Input: temphand array, handposition, current player, state
Output: integer value
Overview: current player draws cards until they have found two treasure cards
the treasure cards are then added to their hand while the rest of the cards
are added to the "played" pile
Bug: Will only find one treasure instead of 2 due to the initial while loop being written incorrectly
*/

/*
villageNew
Input: temphand array, handposition, current player, state
Output: integer value
Overview: current player draws a card and sets the state's numActions property to it's current value + 2
Bug: incrementing actions "accidentally" commented out
*/

/*
greatHallNew
Input: handposition, current player, state
Output: integer value
Overview: current player draws one card and increases current actions by 1
Bug: none
*/

/*
councilRoomNew
Input: handposition, current player, state
Output: integer value
Overview: draws 4 cards for current player, increments current buys available by 1
also draws one card for each other player
Bug: Increases number of buys by the number of other players +1
*/