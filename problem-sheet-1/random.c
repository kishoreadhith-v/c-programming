#include <stdio.h>
#include <stdlib.h>
int main(){
    // generating random number
    int random = rand() % 100, guess;
    // checking guesses
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        guess == random ? printf("Correct!\n") : guess > random ? printf("Try lower\n") : printf("Try higher\n");
    } while (guess != random);
    return 0;
}