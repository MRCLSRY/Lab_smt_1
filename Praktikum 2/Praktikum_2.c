//library import
#include<stdio.h>
#include<stdlib.h>

//List of Variables and Constants
float harga, pajak, service, total;

//Codes
int main (void){

    //memasukkan harga dari maakanan
    printf("Masukkan Harga Makanan (dalam $) :");
    scanf("%f", &harga);

    //operasi menghitung pajak
    pajak = harga * 0.1;

    //operasi menghitung service charge 
    service = harga * 0.05;

    //operasi menghitung total jumlah pembayaran (harga makanan + pajak + service charge)
    total = harga + pajak + service;
    
    //
    printf("a.Jumlah pajak yang harus dibayarkan : $%.2f \n", pajak);
    printf("b.Jumlah service charge yang harus dibayarkan : $%.2f \n", service);
    printf("c.Total jumlah pembayaran : $%.2f \n", total);

    return 0;
}