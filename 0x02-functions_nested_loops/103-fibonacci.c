#include <stdio.h>
nclude "main.h"
int main() {
    int prev = 1;
    int current = 2;
    int next_term = 0;
    int sum = 2; // Start with sum = 2 because 2 is the second even-valued term in the Fibonacci sequence

    while (next_term <= 4000000) {
        next_term = prev + current;
        prev = current;
        current = next_term;

        if (next_term % 2 == 0) {
            sum += next_term;
        }
    }

    printf("%d\n", sum);

    return 0;
}

