#include <stdio.h>

/*
 * Exercise 09: rock, paper, scissors (one round)
 *
 * Read two players' moves as single characters:
 *   'r' = rock, 'p' = paper, 's' = scissors
 *
 * Decide the round and print one of:
 *   "Player 1 wins!"
 *   "Player 2 wins!"
 *   "It's a tie!"
 *
 * The rules: rock beats scissors, scissors beats paper, paper beats rock.
 *
 * Hints:
 *   - Use " %c" (with a leading space) in scanf to skip leftover whitespace,
 *     just like in the calculator exercise.
 *   - Equal moves are a tie. After handling the tie, there are only three
 *     winning combinations for player 1 -- a switch on player 1's move, or a
 *     chain of conditions with &&, both work well here.
 */

int main(void) {
    char player1;
    char player2;

    printf("Player 1 move (r/p/s): ");
    if (scanf(" %c", &player1) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    printf("Player 2 move (r/p/s): ");
    if (scanf(" %c", &player2) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (player1 != 'r' && player1 != 'p' && player1 != 's') {
        printf("First player entered a wrong value, select from r/p/s\n");
        printf("Value received: %c\n", player1);
        return 1;
    }

    if (player2 != 'r' && player2 != 'p' && player2 != 's') {
        printf("Second player entered a wrong value, select from r/p/s\n");
        printf("Value received: %c\n", player2);
        return 1;
    }

    if (player1 == player2) {
        printf("It's a tie!");
    } else if ((player1 == 'r' && player2 == 's') || (player1 == 's' && player2 == 'p') || (player1 == 'p' && player2 == 'r')) {
        printf("Player 1 wins!");
    } else {
        printf("Player 2 wins!");
    }

    return 0;
}
