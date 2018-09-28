/*
  PROGRAM PENGHITUNG LUAS & KELILING PERSEGI PANJANG
  CREATED		 : ASEP DEDI RUKMANA
  KELAS - NIM 	 : 12.1D.03 - 12182876
*/

#include "stdio.h"
#include "conio.h"
main()
{
	int panjang,lebar,luas,keliling;

	clrscr();
	printf("--------------------------------------\n");
	printf("HITUNG LUAS & KELILING PERSEGI PANJANG\n");
   printf("--------------------------------------\n");
	printf("Masukan Panjang : "); scanf("%d",&panjang);
	printf("Masukan Lebar   : "); scanf("%d",&lebar);

		luas=panjang*lebar;          /* rumus mencari luas */
		keliling=2*(panjang+lebar);  /* rumus mencari keliling */

   clrscr();
   printf("--------------------------------------\n");
	printf("                  HASIL               \n");
   printf("--------------------------------------\n\n");
	printf("KELILING PERSEGI PANJANG = %d \n",keliling);
   printf("LUAS PERSEGI PANJANG     = %d \n",luas);
	getch();
}
