#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int pangkat(int x, int n)
{
	if(n==0){
		return 1;
	} 
		else{
			return x*pangkat(x, n-1);
		} 

	return 0;
}

int main()
{
	
	int x, n;
	
	printf("Masukkan nilai X : ");
	scanf("%d", &x);
	printf("Masukkan nilai n : ");
	scanf("%d", &n);
	printf("Hasil bilangan %d pangkat %d adalah %d ",x,n, pangkat(x,n));
	getch();
}

