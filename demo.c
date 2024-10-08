#include <stdio.h>

/*
 * Demo hubungan antara array dengan pointer
 * 
 * Pointer dari TYPE yang adalah variabel yang menyimpan suatu alamat dari sebuah variabel
 *
 * Masalah dibawah adalah sebuah pointer dari TYPE N menyimpan sebuah variabel larik dari TYPE N
 * 
 */

int main(void)
{


	char i[256]; // aslinya ada 255 + 1 (untuk terminator)
	char* cr;

	int dec[10] = {1,2,3,4,5};


	/*
	 * Dari operasi assignment dibawah artinya variabel pointer "menunjuk" pada sebuah alamat dari awal larik
	 *
	 * [1,2,3,4,5]
	 *  ^
	 *  pdesc
	 *
	 * atau
	 *
	 * ['a','b','c','\n','\0']
	 *   ^                 ^
	 *   c                 an terminator
	 */

	int* pdesc = dec;
	cr = i;

	fgets(i,255,stdin);

	printf("%d %d", *cr, *pdesc);


	return 0;
}
