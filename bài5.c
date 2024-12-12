#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho ma tran 2 chieu
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n = 4;  
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {  
                sum += arr[i][j];
            }
        }
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}

