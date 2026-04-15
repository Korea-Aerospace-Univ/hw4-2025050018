#include <stdio.h>

int main() {
    int answer;
    int number;
    int count = 0;

    scanf("%d", &answer);

    do {
        scanf("%d", &number);
        count++;

        if (number > answer) {
            printf("%d>?\n", number);
        }
        else if (number < answer) {
            printf("%d<?\n", number);
        }
        else {
            printf("%d==?\n", number);
            printf("%d\n", answer, count);
        }

    } while (number != answer);

    return 0;
}
