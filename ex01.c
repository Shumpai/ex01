#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(NULL));

    printf("Rolling the dice...\n");
    printf("Die 1: %d\n", rollDice());
    printf("Die 2: %d\n", rollDice());

    int total = rollDice() + rollDice();
    printf("Total value: %d\n", total);

    printf("What is your name?\n");
    char name[100];
    scanf("%s", name);

    printf("Hello, %s!\n", name);

    if (total > 7) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}
