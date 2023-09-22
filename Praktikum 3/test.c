//library
#include<stdio.h>

//List of Variables
float input, a, b, c;

//Codes
int main(){
	
	//Memasukkan umur anjing pada tahun manusia
	printf("Masukkan umur anjing pada tahun manusia : ");
    scanf("%f", &input);

	//Selection
    if (input <= 2 && input > 0){
		//Operasi menghitung umur anjing pada tahun anjing jika dibawah atau sama dengan 2thn
		a = input*5.25;
			printf("%.2f tahun pada tahun anjing\n", a);
	}
	
	else if (input > 2){
		//Operasi menghitung umur anjing pada tahun anjing jika diatas 2thn
		b = input - 2;
		c = b*4 + 10.5;
			printf("%.2f tahun pada tahun anjing\n", c);
	}
	
	else {
		//Jika input bukan angka, 0, atau minus
		printf("Error !\n");
	}

    return 0;
}

