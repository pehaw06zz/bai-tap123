#include <stdio.h>

int main() {
    int choice;
    float amount, convertedAmount;
    const float USD_TO_VND = 23500;
    const float EUR_TO_VND = 25000;
    const float GBP_TO_VND = 28000;
    const float JPY_TO_VND = 180;

    // hien thi menu lua chon
    printf("chon loai chuyen doi tien te:\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("nhap lua chon cua ban: ");
    scanf("%d", &choice);

    // nhap so tien can chuyen doi
    printf("nhap so tien can chuyen doi: ");
    scanf("%f", &amount);

    // su dung cau truc switch case de chuyen doi tien te?
    switch (choice) {
        case 1:
            convertedAmount = amount * USD_TO_VND;
            printf("%.2f USD = %.2f VND\n", amount, convertedAmount);
            break;
        case 2:
            convertedAmount = amount * EUR_TO_VND;
            printf("%.2f EUR = %.2f VND\n", amount, convertedAmount);
            break;
        case 3:
            convertedAmount = amount * GBP_TO_VND;
            printf("%.2f GBP = %.2f VND\n", amount, convertedAmount);
            break;
        case 4:
            convertedAmount = amount * JPY_TO_VND;
            printf("%.2f JPY = %.2f VND\n", amount, convertedAmount);
            break;
        default:
            printf("lua chin khong hop le!\n");
            break;
    }

    return 0;
}

