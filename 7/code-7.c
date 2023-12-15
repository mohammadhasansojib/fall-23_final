#include <stdio.h>


int total_moves = 0;

void toh(int n, char src, char axl, char des) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", src, des);
        total_moves++;
        return;
    }

    toh(n - 1, src, des, axl);

    printf("Move disk %d from %c to %c\n", n, src, des);
    total_moves++;

    toh(n - 1, axl, src, des);
}

int main() {
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of disks should be positive.\n");
        return 1;
    }

    toh(n, 'A', 'B', 'C');

    printf("Total number of moves: %d\n", total_moves);

    return 0;
}
