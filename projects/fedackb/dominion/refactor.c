The following cards were refactored in 'dominion.c':
	'smithy' (bugs introduced)
	'adventurer' (bugs introduced)
	'village' (bugs introduced)
	'salvager' (bugs introduced)
	'minion' (NO bugs introduced)

Smithy Card

	The 'smithy' card was refactored by moving the instructions associated with
	the respective switch case into a separate function with the following
	signature:

		int smithyCardEffect(int handPos, struct gameState *state);

	It was necessary to copy the following local variables from 'cardEffect()':

		int i;
		int currentPlayer = whoseTurn(state);

	In order to preserve the return value, 'cardEffect()' invokes the
	refactored code in the following manner:

		case smithy:
			return smithyCardEffect(handPos, state);

	Two logical error were deliberately introduced. The first extends the scope
	of the for loop to include the statement that discards cards. The second
	enables the 'trash' flag in the call to 'discardCard()'.

Adventurer Card

	The 'adventurer' card was refactored by moving the instructions associated
	with the respective switch case into a separate function with the following
	signature:

		int adventurerCardEffect(struct gameState *state);

	It was necessary to copy/move the following local variables from
	'cardEffect()':

		int currentPlayer = whoseTurn(state);
		int temphand[MAX_HAND];
		int drawntreasure=0;
		int cardDrawn;
		int z = 0;

	In order to preserve the return value, 'cardEffect()' invokes the
	refactored code in the following manner:

		case adventurer:
			return adventurerCardEffect(state);

	Three logical errors were deliberately introduced. The first declares
	'drawntreasure' but fails to initialize it to zero. The second bug changes
	the less-than operator in the while loop's condition to a
	less-than-or-equal operator, effectively causing three treasure cards to be
	drawn. The third and final bug inserts a semicolon before the opening brace
	of the condition that controls the call to 'shuffle()'. This bug has the
	undesirable effect of reshuffled the current player's deck each time he/she
	plays an adventurer card.

Village Card

	The 'village' card was refactored by moving the instructions associated
	with the respective switch case into a separate function with the following
	signature:

		int villageCardEffect(int handPos, struct gameState *state);

	It was necessary to copy the following local variables from 'cardEffect()':

		int currentPlayer = whoseTurn(state);

	In order to preserve the return value, 'cardEffect()' invokes the
	refactored code in the following manner:

		case village:
		return villageCardEffect(handPos, state);

	Two logical errors were deliberately introduced. The first uses an
	additive-assignment operator in place of an assignment operator in the
	statement that should increase the current player's action count by two.
	This has the effect of doubling then adding two instead of simply adding
	two. The second bug calls 'drawCard()' instead of 'discardCard()' when
	attempting to discard the village card from the current player's hand.

Salvager Card

	The 'salvager' card was refactored by moving the instructions associated
	with the respective switch case into a separate function with the following
	signature:

		int salvagerCardEffect(int handPos, int choice1, struct gameState *state);

	It was necessary to copy the following local variables from 'cardEffect()':

		int currentPlayer = whoseTurn(state);

	In order to preserve the return value, 'cardEffect()' invokes the
	refactored code in the following manner:

		case salvager:
			return salvagerCardEffect(handPos, choice1, state);

	Logical errors were deliberately introduced by toggling the 'trash' flags
	in the calls to 'discardCard()'. This has the adverse effect of discarding
	the chosen card and trashing the salvage card instead of the intended
	behavior that trashes the chosen card and discards the salvage card.

Minion Card

	The 'minion' card was refactored by moving the instructions associated with
	the respective switch case into a separate function with the following
	signature:

		int minionCardEffect(int handPos, int choice1, int choice2, struct gameState *state);

	It was necessary to copy the following local variables from 'cardEffect()':

		int i;
		int j;
		int currentPlayer = whoseTurn(state);

	In order to preserve the return value, 'cardEffect()' invokes the
	refactored code in the following manner:

		case minion:
			return minionCardEffect(handPos, choice1, choice2, state);

	No errors were deliberately introduced.
