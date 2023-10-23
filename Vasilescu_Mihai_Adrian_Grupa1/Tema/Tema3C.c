#include <stdio.h>

int main() {
    int v[4][4], i, j, a[2], b[2], c[2], d[2], p1, p2, p3, p4, sum = 0, k, m;

    printf("Scrieti elementele matricii:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &v[i][j]);
        }
    }

    printf("Elementele in ordine inversa de pe diagonala secundara sunt:");
    for (i = 3; i >= 0; i--) {
        for (j = 3; j >= 0; j--) {
            if (j + i == 3) {
                printf(" %d ", v[i][j]);
            }
        }
    }
    printf("\nElementele de pe diagonala principala sunt:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (j == i) {
                printf(" %d ", v[i][j]);
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i + j < 3) {
                sum = sum + v[i][j];
            }
        }
    }
    printf("\nSuma elementelor de deasupra diagonalei secundare este: %d", sum);
    printf("\nNumerele palindrom de pe diagonala principala sunt:");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            k = 0;
            m = v[i][j];
            while (m != 0) {
                k = m % 10 + k * 10;
                m = m / 10;
            }
            if (i == j && v[i][j] == k) {
                printf(" %d ", v[i][j]);
            }
        }
    }
    p1 = 0;
    printf("\nElementele deasupra ambelor diagonale sunt:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i + j < 3 && i < j) {
                p1++;
                a[p1] = v[i][j];
                printf(" %d ", a[p1]);
            }
        }
    }
    p2 = 0;
    printf("\nElementele de sub ambele diagonale sunt:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i + j > 3 && i > j) {
                p2++;
                b[p2] = v[i][j];
                printf(" %d ", b[p2]);
            }
        }
    }
    p3 = 0;
    printf("\nElementele deasupra diagoneli principale si sub diagonala secundara sunt:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i + j < 3 && i > j) {
                p3++;
                c[p3] = v[i][j];
                printf(" %d ", c[p3]);
            }
        }
    }
    p4 = 0;
    printf("\nElementele deasupra diagonalei secundare si sub diagonala principala sunt:");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i + j > 3 && i < j) {
                p4++;
                d[p4] = v[i][j];
                printf(" %d ", d[p4]);
            }
        }
    }

    return 0;
}





