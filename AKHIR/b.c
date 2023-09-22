#include<stdio.h>

int input;
float fee;

float harga(){
    fee=((input-1)*2.95)+10.95;
    return fee;
}

int main(){
    printf("Masukkan Jumlah Barang yang Dibeli Ngab : ");
    scanf("%d", &input);//banyak barang

    if (input!=0)
    {
    harga();
    printf("Shipping Charge : ");
    printf("$%.2f", fee);//biaya
    }

    else{
    printf("Error !");
    }

    return 0;
}