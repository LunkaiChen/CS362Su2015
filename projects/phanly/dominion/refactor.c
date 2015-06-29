/*
Lynda Phan
CS362 - Software Engineering II

    *) refactor out logic for cutpurse card into function
        add bug: none

    *) refactor out logic for treasure map card into function
        add bug: gain only 3 gold cards instead of 4
        fix: revert loop condition back to 4 from 3

    *) refactor out logic for great hall card into function
        add bug: 8 out 10 times the great hall card will add an extra action instead of all the time
        fix: remove RNG and conditional statement surrounding the extra action logic

    *) refactor out logic for adventurer card into function
        add bug: while drawing cards for treasure, it will consider an estate card as treasure
        fix: remove check for cardDrawn == estate

    *) refactor out logic for smithy card into function
        add bug: discard card from player's hand into trash pile instead of player's pile
        fix: revert trashFlag back to 0

    *) beautify code via uncrustify (refactor formatting) on dominion_helpers.h

    *) beautify code via uncrustify (refactor formatting) on dominion.c

    *) add .gitignore file to prevent unwanted files from being added and visible
*/
