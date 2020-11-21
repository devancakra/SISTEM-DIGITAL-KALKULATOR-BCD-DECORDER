#include<stdio.h>
#include<iostream>
#include<windows.h>

main()
{
	awal :
	//control system
	system("cls"); //pengatur untuk menghapus layar
	system("color E"); //pengatur warna
	
	//nama program
	printf("***********************************************************************[CALCULATOR BCD DECORDER UPN 2018]*******************************************************************\n");
	printf("*********************************************************FINAL PROJECT TEKNIK INFORMATIKA MATA KULIAH SISTEM DIGITAL********************************************************\n\n");
	
	//deklarasi
	int bil1, bil2, hasil, kode, c, max, operasi;
	
    //opsi kalkulator
    printf("\nMau Melakukan Operasi apa ? \n\n");
    
    //opsi pertama
	printf("Menu Utama = \n");
    printf("\n\t1. Tambah\n\t2. Kurang\n\t3. Kali\n\t4. Bagi\n\n");
	
	//Menampilkan Pilihan
    printf("\nTentukan Pilihan Pada Menu Utama = ");
    scanf("%d", &operasi);
    printf("\n\n");
    
	//proses operasi, menampilkan pengoperasian, serta menampilkan hasilnya
	if(operasi >0 && operasi <=4)
	{
	switch (operasi)
	{
		case 1 : 
			//inputan user
			printf("Masukkan Bilangan Pertama = ");
    		scanf("%d", &bil1);
    
    		printf("Masukkan Bilangan Kedua = ");
    		scanf("%d", &bil2);
    	
			printf("\n\n");
			hasil = bil1+bil2;
			printf("Hasil Penjumlahan %d + %d = %d",bil1,bil2, hasil);
			break;
		
		case 2 :
			//inputan user
			printf("Masukkan Bilangan Pertama = ");
    		scanf("%d", &bil1);
   	 
   	 		printf("Masukkan Bilangan Kedua = ");
   		 	scanf("%d", &bil2);
    
    		printf("\n\n");
			hasil = bil1-bil2; 		
			printf("Hasil Pengurangan %d - %d = %d",bil1, bil2, hasil);
			break;
		
		case 3 : 
			//inputan user
			printf("Masukkan Bilangan Pertama = ");
   		 	scanf("%d", &bil1);
   	 
    		printf("Masukkan Bilangan Kedua = ");
    		scanf("%d", &bil2);
		
			printf("\n\n");
			hasil = bil1*bil2; 
			printf("Hasil Perkalian %d x %d = %d",bil1, bil2, hasil);
			break;
		
		case 4 :
			//inputan user
			printf("Masukkan Bilangan Pertama = ");
    		scanf("%d", &bil1);
    
   		 	printf("Masukkan Bilangan Kedua = ");
    		scanf("%d", &bil2);
			
			printf("\n\n");
			hasil = bil1/bil2;
			printf("Hasil Pembagian %d / %d = %d",bil1, bil2, hasil);
			break;
	}
	
	//case bil 1
	printf("\n");
	printf("Kode BCD Bilangan 1 = ");
	for(max=1000000000;max>0;max/=10)
	{
		kode=bil1/max;
		c=kode*max;
		bil1=bil1-c;

		switch (kode)
		{
		case 0: 
			printf("[abcdef] ");
			break;
		
		case 1: 
			printf("[bc]     "); 
			break;
		
		case 2: 
			printf("[abged]  ");
			break;
		
		case 3: 
			printf("[abgcd]  ");
			break;
		
		case 4: 
			printf("[fbgc]   ");
			break;
		
		case 5:
			printf("[afgcd]  ");
			break;
		
		case 6:
			printf("[fgcde]  ");
			break;
			
		case 7: 
			printf("[abc]    ");
			break;
		
		case 8: 
			printf("[abcdefg]");
			break;
			
		case 9: 
			printf("[abcdfg] ");
			break;
		
		default : 
			printf("[Error]");
			break;
		}
	}
 
	
	//case bil 2
	printf("\n");
	printf("Kode BCD Bilangan 2 = ");
	for(max=1000000000;max>0;max/=10)
	{
		kode=bil2/max;
		c=kode*max;
		bil2=bil2-c;

	switch (kode)
	{
		case 0: 
			printf("[abcdef] ");
			break;
		
		case 1: 
			printf("[bc]     "); 
			break;
		
		case 2: 
			printf("[abged]  ");
			break;
		
		case 3: 
			printf("[abgcd]  ");
			break;
		
		case 4: 
			printf("[fbgc]   ");
			break;
		
		case 5:
			printf("[afgcd]  ");
			break;
		
		case 6:
			printf("[fgcde]  ");
			break;
			
		case 7: 
			printf("[abc]    ");
			break;
		
		case 8: 
			printf("[abcdefg]");
			break;
			
		case 9: 
			printf("[abcdfg] ");
			break;
			
		default : 
			printf("[Error]");
			break;
		}
	}
 
	
	//case hasil
	printf("\n");
	printf("Hasil Komputasi BCD = ");
	for(max=1000000000;max>0;max/=10)
	{
		kode=hasil/max;
		c=kode*max;
		hasil=hasil-c;

	switch (kode)
	{
		case 0: 
			printf("[abcdef] ");
			break;
		
		case 1: 
			printf("[bc]     "); 
			break;
		
		case 2: 
			printf("[abged]  ");
			break;
		
		case 3: 
			printf("[abgcd]  ");
			break;
		
		case 4: 
			printf("[fbgc]   ");
			break;
		
		case 5:
			printf("[afgcd]  ");
			break;
		
		case 6:
			printf("[fgcde]  ");
			break;
			
		case 7: 
			printf("[abc]    ");
			break;
		
		case 8: 
			printf("[abcdefg]");
			break;
			
		case 9: 
			printf("[abcdfg] ");
			break;
			
		default : 
			printf("[Error]");
			break;
		}
	}
	//pemindah instruksi menuju label end
    goto end;
 	}	
	else{
		printf("\n\n\n\n\n\n\t\t\t\t\t\t     **********KESALAHAN MEMASUKKAN PILIHAN PADA MENU UTAMA**********\n");
	}
	
	//label selesai
	end :
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t     Tunggu beberapa detik, maka akan dialihkan ke menu.....\n\n");
	printf("*************************************************************************[PROGRAM BERJALAN DENGAN BAIK]*********************************************************************\n");
	printf("******************************************************************************BY : DEVAN CAKRA M. W*************************************************************************\n");
	
	Sleep(6000); //pause
	goto awal; //pemindah instruksi menuju label awal
	system("cls"); //pengatur untuk menghapus layar
	
}
//Copyright (c) Calculator BCD Decorder by Devan All Rights Reserved

