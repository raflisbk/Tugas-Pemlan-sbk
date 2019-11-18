#include <stdio.h>
int biner ( int cari ,int n , int angka[])
{
    //variable untuk menentukan titik awal ,akhir nya
    int akhir ,awal ,tengah ,ketemu , i;
   
    akhir = n - 1; awal = 0; ketemu = -1; i = 0;
    //Perulangan untuk mencari angka nya dengan kondisi ketemu = -1 dan i < n
    while ( ketemu == -1 && i < n )
    {   
        tengah = ( awal+ akhir ) / 2;
            /**
             *Perkondisian data yang ditengah = cari / ketemu dan pencarian dihentikan                           karena  ketemu = tengah bukan ketemu = -1 jadi tidak memenuhi                                          syarat untuk perulangan lagi 
             *dan ketemu = tengah , jadi nilai yang dikembalikan ke main  nanti                                          adalah   indeks ke - tengah / indeks tempat data yang dicari ditemuakn
            **/
            if ( angka[tengah] == cari )
        {
            ketemu = tengah;
        }
        else
        {
            if ( angka[tengah] < cari )
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }i++;
    }return ketemu;
}

int main ()
{
    int cari , hasil , i , n;
    int angka[50];

    printf("Berapa data yg ingin di input ( MAX = 50 ) : ");
    scanf("%d" , &n);

    printf("\nInput angka secara terurut menaik\n");
    for ( i = 0; i < n; i ++ )
    {
        printf("Data ke - %d : ", i+1);
        scanf("%d", &angka[i]);
    }

    printf("Berapa angka yg ingin dicari: ");
    scanf("%d", &cari);

    hasil = biner ( cari , n ,angka );

    if  ( hasil == - 1 )
    {
        printf("\nData tidak ditemukan !! ");
    }
    else
    {
        printf("\nAngka %d ditemukan di indeks %d", cari ,hasil+1);
    }

    return 0;
}

