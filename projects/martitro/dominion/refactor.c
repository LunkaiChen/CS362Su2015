Initial 5 cards: Adventurer, Council, Feast, Mine and Remodel. Upon further clarification I have added Smithy in order to meet the
	assignment requirements, making a total of 6.

Adventurer: The Adventurer code was copied to the function playAdventurer. Its parameters are currentPlayer as integer, temphand as integer pointer/array, 
	state as a gameState structure pointer.
	BUG - in the discard while loop, z-1 >= 0 condition has been changed to z-1 > 0, which means that the player will fail to discard a single card that they should.

Council: The Council code was copied to the function playCouncil. Its parameters are currentPlayer as integer, handPos as integer, state as a gameState 
	structure pointer.

Feast: The Feast code was copied to the function playFeast. Its parameters are currentPlayer as integer, temphand as integer pointer/array, 
	 choice1 as integer, state as a gameState structure pointer.

Mine: The Mine code was copied to the function playMine. Its parameters are currentPlayer as integer, choice1 as integer, choice2 as integer, handPos as integer, 
	state as a gameState structure pointer.
	BUG - the gainCard call has been removed so the player is not actually receiving the new treasure card selected.

Remodel: The Remodel code was copied to the function playRemodel. Its parameters are currentPlayer as integer, choice1 as integer, choice2 as integer, handPos as integer, 
	state as a gameState structure pointer.
	BUG - the trash flag argument in the discardCard function call has been set to 1, which means the selected card is recycled back into the pile instead of trashed
	as it should be.

Smithy: The Smithy code was copied to the function playSmithy. Its parameters are currentPlayer as integer, handPos as integer, state as a gameState structure pointer.
	BUG - in the drawCard for loop, i is now set to 1 initially instead of 0, causing one less card to be drawn.