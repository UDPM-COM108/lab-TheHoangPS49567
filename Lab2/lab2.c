#include <stdio.h>
#include <math.h>   
#define PI 3.14
int main() {
    // Bài 1: Tính tổng và hiệu 2 số nguyên
    int a, b, tong, hieu;
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d %d", &a, &b);
    tong = a + b;
    hieu = a - b;
    printf("Tong 2 so la: %d\n", tong);
    printf("Hieu 2 so la: %d\n", hieu);
    // Bài 2: Tính chu vi và diện tích hình chữ nhật
    float chieudai, chieurong, chuviHCN, dientichHCN;
    printf("\nNhap vao chieu dai va chieu rong HCN: ");
    scanf("%f %f", &chieudai, &chieurong);
    chuviHCN = 2 * (chieudai + chieurong);
    dientichHCN = chieudai * chieurong;
    printf("Chu vi HCN: %.2f\n", chuviHCN);
    printf("Dien tich HCN: %.2f\n", dientichHCN);
    // Bài 3: Tính chu vi và diện tích hình tròn
    float r, chuviHT, dientichHT;
    printf("\nNhap vao ban kinh hinh tron: ");
    scanf("%f", &r);
    chuviHT = 2 * PI * r;
    dientichHT = PI * r * r;
    printf("Chu vi hinh tron: %.2f\n", chuviHT);
    printf("Dien tich hinh tron: %.2f\n", dientichHT);
    // Bài 4: Tính điểm trung bình có hệ số
   
    float diemToan, diemLy, diemHoa, diemTB;
             printf("\nNhap vao diem Toan, Ly, Hoa: ");
                  scanf("%f %f %f", &diemToan, &diemLy, &diemHoa);
    diemTB = (diemToan * 3 + diemLy * 2 + diemHoa * 1) / (3 + 2 + 1);
    printf("Diem trung binh: %.2f\n", diemTB);
    // Bài 5: Tính chu vi và diện tích tam giác vuông
    
    float canhA, canhB, canhC, chuviTG, dientichTG;
    printf("\nNhap vao do dai 2 canh ke tam giac vuong: ");
          scanf("%f %f", &canhA, &canhB);
            canhC = sqrt(canhA * canhA + canhB * canhB);  // canh huyen
                   chuviTG = canhA + canhB + canhC;
                    dientichTG = (canhA * canhB) / 2;
                  printf("Chu vi tam giac vuong: %.2f\n", chuviTG);
                  printf("Dien tich tam giac vuong: %.2f\n", dientichTG);
    return 0;
}