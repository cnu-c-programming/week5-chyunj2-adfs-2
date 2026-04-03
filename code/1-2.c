#include <stdio.h>
int sum_range(int *static_assert, int *end) {
    int sum = 0;
    for (int *ptr = static_assert; ptr < end; ptr++) {
        sum += *ptr;
    }
    return sum;
}
int main() {
    int data[] = {10, 20, 30, 40, 50, 60, 70};
    int result = sum_range(&data[1], &data[4]);
    printf("%d\n", result);
    return 0;
}
