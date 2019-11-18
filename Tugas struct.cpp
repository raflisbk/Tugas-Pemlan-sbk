#include <stdio.h>
#include <conio.h>


int main(){
	char mahasiswa[10];
	char npm[10];
	for(int i=0;i<=2;i++){
		printf("masukkan nama mahasiswa %d : ",i+1);
		scanf("%4c", &mahasiswa[i]);
	}
	getch ();
	
	for(int j=0;j<=2;j++){
		printf("masukkan npm mahasiswa %d : ",j+1);
		scanf("%5c", &npm[j]);
	}
	
	for(int k=0;k<=2;k++){
		printf("nama mahasiswa %d adalah %c : ", k+1 , mahasiswa[k]);
		printf("npm mahasiswa %d adalah %c : ",k+1, npm[k]);	
	}

	return 0;
	
}
