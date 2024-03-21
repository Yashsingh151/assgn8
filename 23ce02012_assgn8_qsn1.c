#include<stdio.h>

int main() {
    int x = 5, y = 8, z = 10;

    printf("Before circular shift: x=%d y=%d z=%d\n", x, y, z);

    int temp = z;
    z = y;
    y = x;
    x = temp;

    printf("After circular shift: x=%d, y=%d, z=%d\n", x, y, z);

    return 0;
}
