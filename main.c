#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));
    for (int i = 1; i <= 10; i++) {
        int a = rand() % 21, b = rand() % 21;
        printf("[%d/10] %d + %d = \n", i , a, b);
    }
}