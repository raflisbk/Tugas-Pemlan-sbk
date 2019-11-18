#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int bil, punk, i, hasil;
	
	printf("Masukkan nilai X : ");
	scanf("%d", &bil);
	printf("Masukkan nilai n : ");
	scanf("%d", &punk);
	
	for(i=1;i<=punk;i++)
	{
		hasil=hasil*bil;	
	}
	printf("Hasil bilangan %d pangkat %d adalah %d ",bil,punk, hasil);
	return 0;
}

