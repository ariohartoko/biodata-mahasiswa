#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa {
	char nama[30];
	int umur;
	char npm[20];
	char jurusan[30];
	char universitas[50];
};

int main() {
	int i,n;
	printf("SELAMAT DATANG DALAM PROGRAM INPUT BIODATA MAHASISWA!!!!!\n\n");
	printf("-----------------------------------------------------------------------------------------------------\n\n");
	printf("Masukkan jumlah mahasiswa : ");
	scanf("%d", &n);
	struct mahasiswa mhs[100];
	fflush(stdin);
	system("cls");
	for(i=0;i<n;i++){
		printf("SELAMAT DATANG DALAM PROGRAM INPUT BIODATA MAHASISWA!!!!!\n\n");
		printf("-----------------------------------------------------------------------------------------------------\n\n");
		printf("Biodata mahasiswa ke-%d\n\n", i+1);
		printf("Masukkan nama\t\t: ");
		gets(mhs[i].nama);
		printf("Masukkan umur\t\t: ");
		scanf("%d", &mhs[i].umur);
		fflush(stdin);
		printf("Masukkan NPM\t\t: ");
		gets(mhs[i].npm);
		printf("Masukkan jurusan\t: ");
		gets(mhs[i].jurusan);
		printf("Masukkan universitas\t: ");
		gets(mhs[i].universitas);
		system("cls");
	}
	printf("SELAMAT DATANG DALAM PROGRAM INPUT BIODATA MAHASISWA!!!!!\n\n");
	printf("-----------------------------------------------------------------------------------------------------\n");
	for(i=0;i<n;i++){
		printf("\nBiodata Mahasiswa ke-%d\n", i+1);
		printf("Nama\t\t: %s\n", mhs[i].nama);
		printf("Umur\t\t: %d\n", mhs[i].umur);
		printf("NPM\t\t: %s\n", mhs[i].npm);
		printf("Jurusan\t\t: %s\n", mhs[i].jurusan);
		printf("Universitas\t: %s\n", mhs[i].universitas);
	}
	return 0;
}
