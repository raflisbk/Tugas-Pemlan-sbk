#include <stdio.h>
#include <conio.h>
#include <string.h>
#define maks 3
struct TMhs
{
      char NIM[9];
      char Nama[21];
      int NilaiUAS;
      float NilaiAkhir;
      char index;
};
main()
{
   TMhs mhs[maks]; // array struct
   int i;
   for(i=0;i<maks;i++)
   {
       printf("Pengisian Data Mahasiswa Ke-%i\n",i+1);
       printf("NIM        : ");fflush(stdin);gets(mhs[i].NIM);
       printf("NAMA       : ");fflush(stdin);gets(mhs[i].Nama);
       printf("Nilai Akhir : ");scanf("%d",&mhs[i].NilaiUAS);
       
       if(mhs[i].NilaiAkhir>=80) mhs[i].index='A';else
       if(mhs[i].NilaiAkhir>=60) mhs[i].index='B';else
       if(mhs[i].NilaiAkhir>=40) mhs[i].index='C';else
       if(mhs[i].NilaiAkhir>=20) mhs[i].index='D';else
       if(mhs[i].NilaiAkhir>=0)  mhs[i].index='E';
   };
   getch();
   printf("Data yang telah dimasukan adalah : \n");
   printf("----------------------------------------------------------------------\n");
   printf("|    NIM     |       NAMA         | QUIS | UTS | UAS |  N A  | INDEX |\n");
   printf("----------------------------------------------------------------------\n");
   for(i=0;i<maks;i++)
   {
      printf("| %-8s | %-20s |  %3i | %3i | %3i | %6.2f |   %c   |\n",
              mhs[i].NIM,mhs[i].Nama,mhs[i].NilaiQuis,mhs[i].NilaiUTS,
              mhs[i].NilaiUAS,mhs[i].NilaiAkhir,mhs[i].index);
   }
   printf("----------------------------------------------------------------------\n");
   getch();
   return 0;
}
