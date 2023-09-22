#include <stdio.h>

int main(){

    float input, mean;
    int banyakData = 0, jumlah = 0;

    while(scanf("%f", &input)){
        if (input == 0)
        { 
            break;
        }
        jumlah += input;
        banyakData++;
    }

    mean = jumlah/banyakData; 

    if (banyakData == 0 && jumlah == 0){
        printf("Error!\n");
        }

    else{
        printf("Rata-rata : %.2f\n", mean);
    }

    return 0;
}