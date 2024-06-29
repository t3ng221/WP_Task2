#include <stdio.h>

void print_pattern(int N, char T) {
    if (T == 'a') {
        for (int i = 0; i < N; i++) {
            printf("%c", 'a' + i);
        }
        printf("\n");
        for (int i = 1; i < N - 1; i++) {
            printf("%c", 'a' + i);
            for (int j = 1; j < N - 1; j++) {
                printf(" ");
            }
            printf("%c\n", 'a' + (N - 1 - i));
        }
        // Last row
        for (int i = 0; i < N; i++) {
            printf("%c", 'a' + (N - 1 - i));
        }
        printf("\n");
    } else if (T == '1') {
        for (int i = 1; i <= N; i++) {
            printf("%d", i);
        }
        printf("\n");
        for (int i = 2; i < N; i++) {
            printf("%d", i);
            for (int j = 1; j < N - 1; j++) {
                printf(" ");
            }
            printf("%d\n", N + 1 - i);
        }
 
        for (int i = N; i > 0; i--) {
            printf("%d", i);
        }
        printf("\n");
    } else {
        printf("Invalid type of pattern. T should be 'a' or '1'.\n");
    }
}

int main() {
    int N;
    char T;
    scanf("%d", &N);
    scanf(" %c", &T);
    print_pattern(N, T);

    return 0;
}
