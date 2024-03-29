#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char oper[] = {'+', '-', '*', '/'};

int main() {
    srand(time(NULL));
    for (int i = 1; i <= 10; i++) {
        int a = rand() % 21, b = rand() % 21;
        int op = rand() % 4;
        printf("[%d/10] %d %c %d = ", i , a, oper[op], b);
        int ans;
        switch (op) {
            case 0:
                ans = a + b;
                break;
            case 1:
                ans = a - b;
                break;
            case 2:
                ans = a * b;
                break;
            case 3:
                ans = a / b;
                break;
        }
        int res;
        scanf("%d", &res);
        if (res == ans) printf("Correct!\n");
        else printf("Wrong! Answer is %d\n", ans), i--;
    }
}