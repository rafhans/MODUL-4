/*
Program: LuasSegitiga.c
Author: 3411191123, Muhammad Rafi Hanief K
Kelas: DSE-D
Mata Kuliah: Praktikum IPL
*/

#include<stdio.h>

int main()
{
    //Kamus Data
	int alas, tinggi;
    float luas;

	//Algoritma
    printf("Masukkan Alas: ");
    scanf("%d", &alas);
    printf("Masukkan Tinggi: ");
    scanf("%d", &tinggi);

    luas = (int)alas * (int)tinggi * (float)0.5;

    printf("Luasnya adalah %.1f ", luas);
    return luas;
}
