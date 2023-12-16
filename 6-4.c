#include <stdio.h>

int main() {
    int number, guess;
    srand(time(NULL));
    number = rand() % 1000 + 1;
    printf("The number is between 0 and 1000. your guesses are unlimited.\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess > number){
            printf("Lower! ");
        }else if (guess < number){
            printf("Higher! ");
        }else{
            printf("Correct!");
        }
    }while (guess != number);

    return 0;
}
