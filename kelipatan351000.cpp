#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
	{
		int bil;
		printf("Jumlah Kelipatan 3 adalah : \n\n");
		for (bil=3;bil<=1000;bil=bil+3) (printf(" %d ", bil));
		
		printf("\n\nJumlah kelipatan 5 adalah : \n\n");
		for (bil=5;bil<=1000;bil=bil+5) (printf(" %d ", bil));
		system("pause");
		return 0;
	}