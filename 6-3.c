#include <stdio.h>

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("First %d numbers of the Fibonacci sequence: ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
