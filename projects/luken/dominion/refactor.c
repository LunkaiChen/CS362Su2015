The five cards that were chosen to have their own functions were smithy, adventurer, outpost, council room, and great hall. The switch statements calls the functions that were created outside of cardEffect.  

For the smithy case, everything was moved to the function called smithyFunction.
For great hall case, the function greathallFunction was called.
For council room case, the function councilRoomFunction was called.
For adventurer case, the function adventurerFunction was called.
For outpost case, the function outpostFunction was called.
 
 All of the functions are located right before cardEffect switch cases.

Bugs introduced:

	greatHallFunction - state->numActions is incremented twice in the function instead of just once

	adventurerFunction - while loops runs until 3 treasures are drawn instead of 2

	smithyFunction - for loop draws 5 cards instead of 3

	councilRoomFunction - state->numBuys is incremented twice which means player gets +2 buys instead of 1