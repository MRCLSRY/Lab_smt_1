#include<stdio.h>

int main(){
    int i,j;
    float a=0, b=32;
    
    printf("----------------------------------\n");
    printf(" Celcius\t|| Fahrenheit\t\n");
    printf("----------------------------------\n");

        for (i = 0; i <= 10; i++)
        {    
            printf("||  %.2f\t||\t%.2f\t||\n",a ,b);
            a += 10;
            b=(a*9.0/5.0)+32;
        }

    printf("----------------------------------\n");




    return 0;
}