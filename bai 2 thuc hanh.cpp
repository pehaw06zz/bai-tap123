#include <stdio.h>

int main() {
    float giolamviec, luongtheogio, luongcoban, phucap = 0, tongluong;

    //nhap so gio lam viec torng thag va muc luong theo gio
    printf("nhap so gio lam viec trong thang: ");
    scanf("%f", &giolamviec);
    printf("nhap muc luong theo gio: ");
    scanf("%f", &luongtheogio);

    // tinh luong co ban
    luongcoban = giolamviec * luongtheogio;

    // neu so gio lam viec trong thang > 160 gio cong nhan se nhan them phu cap  10%
    if (giolamviec > 160) {
        phucap = luongcoban * 0.10;
    }

    //tinh tong tien luong
    tongluong = luongcoban + phucap;

    // in ket qua
    printf("luong co ban: %.2f\n", luongcoban);
    printf("phu cap: %.2f\n", phucap);
    printf("tong luong: %.2f\n", tongluong);

    return 0;
}

