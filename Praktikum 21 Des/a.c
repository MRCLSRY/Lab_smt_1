#include<stdio.h>
#include<stdlib.h>

char name[20];
int age;
int gender;


int main(){
    // printf("Name :");
    // scanf("%s", &name);
    // printf("Age :");
    // scanf("%d", &age);
    // printf("Gender [1: male/2: female]");
    // scanf("%d", &gender);

    //Create buffer
    FILE *fp;
    //Open stream
    //r, w, a, r+, w+, a+, tb, ab,wb
    //a buat file baru
    //r buat baca
 
    // fp = fopen("database.txt", "a");
    fp = fopen("database.txt", "r");
    if (fp == NULL)
    {
        printf("File not found!");
        exit(1);
    }
    //Process the data
    // fgets()
    // fputc()
    // fputs()
    // fscanf()
    // fprintf()
    // fwrite()
    // fread()
 
    //isi data masukin ke database
    // fprintf(fp, "%s; %d; %d\n", name, age, gender);
    printf("Name\t|Umur\t|Gender\t|");
    printf("===================================");
    while (!feof(fp))
    {
        fscanf(fp, "%[^;]; %d; %d", name, &age, &gender);
        printf("%s\t|%d\t|%d\t|\n", name, age, gender);
    }
    

    //Close Stream
    fclose(fp);
    
    return 0;
}