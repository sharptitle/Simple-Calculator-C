//Kalkulator by Yansha Ramadhan

#include<stdio.h>
#include"kalkulatorku.h"
#include"Kalkulatorku_rumus.c"

int pilihan;
char awalan,lanjut;
FILE *file;
void tambah()
{
    file=fopen("Kalkulatorku_rumus.txt", "w");
    float a,b,hsl;
    printf("\n-----Program Penjumlahan-----\n");
    printf("Masukkan bilangan pertama :");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua :");
    scanf("%f", &b);
    hsl=penjumlahan(a,b);
    printf("Hasil penjumlahan adalah = %.2f",hsl);
    fprintf(file,"Hasil penjumlahan adalah = %.2f",hsl);
    fclose(file);
}
void kurang()
{
    file=fopen("Kalkulatorku_rumus.txt", "w");
    float a,b,hsl;
    printf("\n-----Program pengurangan-----\n");
    printf("Masukkan bilangan pertama :");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua :");
    scanf("%f", &b);
    hsl=pengurangan(a,b);
    printf("Hasil pengurangan adalah = %.2f",hsl);
    fprintf(file,"Hasil pengurangan adalah = %.2f",hsl);
    fclose(file);
}
void ratakan()
{
    file=fopen("Kalkulatorku_rumus.txt", "w");
    float a,b,hsl;
    printf("\n-----Program rata-rata bilangan-----\n");
    printf("Masukkan bilangan pertama :");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua :");
    scanf("%f", &b);
    hsl=ratarata(a,b);
    printf("rata-rata dari %.2f+%.2f adalah = %.2f",a,b,hsl);
    fprintf(file,"rata-rata dari %.2f+%.2f adalah = %.2f",a,b,hsl);
    fclose(file);
}
void bagi()
{
    file=fopen("Kalkulatorku_rumus.txt", "w");
    float a,b,hsl;
    printf("\n-----Program pembagian-----\n");
    printf("Masukkan bilangan pertama :");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua :");
    scanf("%f", &b);
    hsl=pembagian(a,b);
    printf("Hasil pembagian adalah = %.2f",hsl);
    fprintf(file,"Hasil pembagian adalah = %.2f",hsl);
    fclose(file);
}
void Trigono()
{
    file=fopen("Kalkulatorku_rumus.txt", "w");
    float a, c, t, s;
    printf("\n-----Program Nilai Trigonometri-----");
    printf("Masukkan bilangan yg akan dicari nilai trigononya :");
    scanf("%f", &a);
    s=sinus(a);
    c=cosinus(a);
    t=tangen(a);
    printf("Nilai SIN dari %.1f adalah : %.3f\n",a,s);
    printf("Nilai COS dari %.1f adalah : %.3f\n",a,c);
    printf("Nilai TAN dari %.1f adalah : %.3f\n",a,t);
    fprintf(file,"Nilai SIN dari %.1f adalah : %.3f\n",a,s);
    fprintf(file,"Nilai COS dari %.1f adalah : %.3f\n",a,c);
    fprintf(file,"Nilai TAN dari %.1f adalah : %.3f\n",a,t);
    fclose(file);
}
void pangkatbil()
{
    file=fopen("Kalkulatorku_rumus.txt", "w");
    float a,b,hsl;
    printf("\n-----Program perpangkatan suatu bilangan-----\n");
    printf("Masukkan bilangan :");
    scanf("%f", &a);
    printf("Masukkan pangkat bilangan :");
    scanf("%f", &b);
    hsl=pangkat(a,b);
    printf("Perpangkatan dari %.2f pangkat %.2f adalah : %.2f",a,b,hsl);
    fprintf(file,"Perpangkatan dari %.2f pangkat %.2f adalah : %.2f",a,b,hsl);
    fclose(file);
}
void akars()
{
    file=fopen("Kalkulatorku_rumus.txt", "w");
    printf("\n-----Program mencari nilai akar suatu bilangan-----\n");
    int a;
    float hsl;
    printf("Masukkan bilangan :");
    scanf("%d",&a);
    hsl=akar(a);
    printf("Akar dari %d adalah : %.2f",a,hsl);
    fprintf(file,"Akar dari %d adalah : %.2f",a,hsl);
    fclose(file);
}
int main()
{
do{
    printf("----- Selamat Datang di Program Kalkulator sederhana. BY: Yansha Ramadhan P -----\n");
    printf("----- Ketik Y/y untuk lanjutkan -----\n");
    scanf("%s", &awalan);
    if(awalan=='Y'||awalan=='y')
    {
        pilihan;
    }else
    {
        printf("\n PROGRAM DITUTUP.\n Terima kasih telah menggunakan program ini, semoga bermanfaat.");
        return 0;
    }
    printf("\n");
    printf("Silahkan pilih salah satu dari menu dibawah ini :\n");
    printf("\n 1.Penjumlahan 2 bilangan.\n 2.Pengurangan 2 bilangan.\n 3.Rata-rata dari 2 buah bilangan.\n 4.Pembagian 2 buah bilangan.\n 5.Konversi degrees ke Trigonometri (SIN,COS,TAN).\n 6.Hasil nilai bilangan berpangkat.\n 7.Akar dari suatu bilangan.");
    printf("\n -----Silahkan pilih salah satu dari 7 buah program diatas-----");
    printf("\n Masukkan pilihan :");
    scanf("%d", &pilihan);
    if (pilihan==1)
    {
        tambah();
    } else if (pilihan==2)
    {
        kurang();
    } else if (pilihan==3)
    {
        ratakan();
    } else if (pilihan==4)
    {
        bagi();
    }else if (pilihan == 5)
    {
        Trigono();
    } else if (pilihan==6)
    {
        pangkatbil();
    } else if (pilihan==7)
    {
        akars();
    }
    else
    {
        printf(" Pilihan yg dipilih tidak ada.");
    }
        printf("\n PROGRAM SELESAI\n");
        printf("\n Mau coba lagi <Y/N>?");
        scanf("%s", &lanjut);
    }
    while((lanjut=='y')||(lanjut=='Y'));
    printf("\n PROGRAM DITUTUP.\n Terima kasih telah menggunakan program ini, semoga bermanfaat.");
return 0;
}
