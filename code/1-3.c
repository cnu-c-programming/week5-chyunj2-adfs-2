#include <stdio.h>
void print_reverse(int *arr, int size) {
    printf("%d", arr[size - 1]);
    for (int i = size - 2; i >= 0; i--) {
        printf(" %d", *(arr + i));
    }
}
int main() {
    int num[] = {1, 2, 3, 4, 5};
    print_reverse(num, 5);
    printf("\n");
    return 0;
}
