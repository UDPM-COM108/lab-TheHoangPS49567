#include <stdio.h>

int main() {
    int n;         
    int i, j, temp; 

    
    printf("Nhap so phan tu cua mang (n): ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le. Chuong trinh ket thuc.\n");
        return 1;
    }

    int mang[n];
    printf("--- Nhap du lieu vao mang ---\n");
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            
            if (mang[i] < mang[j]) {
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }

    printf("\n--- Mang sau khi sap xep GIAM DAN ---\n");
    for (i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}