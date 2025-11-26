#Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT, NHỎ NHẤT TRONG 3 SỐ
Input: Nhập từ bàn phím 3 số bất kỳ
Output: Xuất ra màn hình số lớn nhất trong 3 số
#Lưu ý: viết 2 hàm min, max

#Bài 2: XÂY DỰNG HÀM TÌM NĂM NHUẬN
Input: Nhập vào năm
Output: Có phải là năm nhuận hay không?
Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100

#Bài 3: XÂY DỰNG CHƯƠNG TRÌNH KIỂM TRA CÁC SỐ TRONG [1,1000]
mà các số chia hết cho 5 và chia hết cho 9 không
Input: Nhập vào số bất kì trong khoảng
Output: kiểm tra số chia hết cho 5 và chia hết cho 9 không
#include <stdio.h>
#include <math.h>      

int checkYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1; // Năm nhuận
    } else {
        return 0; // Không phải năm nhuận
    }
  
    int main(){
        int a,b,c;
        printf("Nhap 3 so nguyen a,b,c:\n");
        scanf("%d%d%d",&a,&b,&c);
    int max = a, min = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
    //bai2:
    int year;
    printf("Nhap vao nam: ");
    scanf("%d", &year);
    if (checkYear(year)) {
        printf("%d la nam nhuan.\n", year);
    } else {
        printf("%d khong phai la nam nhuan.\n", year);
    }
    //bai3:
    int n;
    printf("Nhap mot so trong khoang [1, 1000]: ");
    scanf("%d", &n);
    if (n >= 1 && n <= 1000) {
        if (n % 5 == 0 && n % 9 == 0) {
            printf("%d chia het cho ca 5 va 9.\n", n);
        } else {
            printf("%d khong chia het cho ca 5 va 9.\n", n);
        }
    } else {
        printf("So nhap khong nam trong khoang [1, 1000].\n");}

    return 0;
    }
