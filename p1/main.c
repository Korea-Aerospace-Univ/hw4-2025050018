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
            printf("%d?> %d 보다 낮습니다\n", number, number);
        }
        else if (number < answer) {
            printf("%d<? %d 보다 높습니다\n", number, number);
        }
        else {
            printf("%d==? %d 정답입니다\n", number, number);
            printf("%d -> 시도횟수는 %d회\n", answer, count);
        }

    } while (number != answer);

    return 0;
}
