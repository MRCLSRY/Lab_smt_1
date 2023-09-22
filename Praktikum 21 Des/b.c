//Library
#include<stdio.h>
#include<stdlib.h>

//global var
int NIM;
char name[20];
int asg,mid,fin;
int choose;
char test;

void firstPage(){
    printf("DATABASE MAHASISWA\n");
    printf("==================\n");
    printf("1. Tamabah Nilai\n");
    printf("2. Lihat rekap nilai\n");
    printf("3. Keluar\n");
    printf("Masukkan pilihan : ");
    scanf("%d", &choose);
}

void tambahNilai(){
    system("cls");
    printf("NIM : ");
    scanf("%d", &NIM);
    printf("Nama : ");
    scanf("%s", name);
    printf("ASG : ");
    scanf("%d", &asg);
    printf("MID : ");
    scanf("%d", &mid);
    printf("Fin : ");
    scanf("%d", &fin);
    
    //Create buffer
    FILE *fp;
    //Process data
    fp = fopen("data.txt","a");
    fprintf(fp, "%d; %s; %d; %d; %d\n", NIM, name, asg, mid, fin);
    //Close Stream
    fclose(fp);
}

void printData(){
    system("cls");
    //Create buffer
    FILE *fp;  
    fp = fopen("data.txt", "r");

    //print hasil
    printf("===================================\n");
    printf("NIM\t|Nama\t|ASG\t|MID\t|FIN\t|\n");
    printf("===================================\n");
    while (!feof(fp))
    {
        fscanf(fp, "%d; %[^;]; %d; %d; %d\n", &NIM, name, &asg, &mid, &fin);
        printf("%d\t|%\t|%d\t|%d\t|%d\t|\n", NIM, name, asg, mid, fin);
    }
    //Close Stream
    fclose(fp);
}

//codes
int main(){
    firstPage();
    //Jika milih 1
    if (choose == 1)
    {
    tambahNilai();
    //repeat
    printf("return [y/n]: ");
    scanf("%c", &test);
        if(test == 'y'){
            tambahNilai();
        }
        else if(test == 'n'){
            firstPage();
        }
    }

    else if(choose == 2){
    printData();
    printf("return [y/n]: ");
    scanf("%c", &test);  
        if(test == 'y'){
            printData();
        }
        else if(test == 'n'){
            firstPage();
        }  
    }

    else if(choose == 3){
        printf("Thankyou!\n");
    }

    return 0;
}
