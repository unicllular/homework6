#include <stdio.h>

int main() {
int num, i, indicator = 0;

printf("Enter a number: ");
scanf("%d", &num);

if(num <= 1) {
    printf("1 is neither prime nor composite.\n");
} else {
    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            indicator = 1;
            break;
        }
    }
    if(indicator == 0) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}

    return 0;
}
