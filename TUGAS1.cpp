#include <iostream>
#include <stdio.h>

 using namespace std;
 
		 struct fullname 
		 { //struct untuk nama lengkap, semua tipe data di dalamnya adalah string
		  string namadepan;
		  string namabelakang;
		 };
 
 struct siswa { //struct yang memuat lebih dari satu tipe data
  fullname nama; //tipe data berupa fullname karena pada struct diatas terdiri dari string, sehingga fullname diartikan tipe data string
  string nim;
  int T1;
  int T2;
  int T3;
  char kelamin; 
  
 };
 
 siswa UTY[20]; //indeks untuk UTY
 
		int main () 
		{
		  char jurusan[20]; 
		  int n,i;
		  int rata;
		  cout<<"MASUKAN JUMBLAH DATA : ";
		  cin>>n;
		  cout<<endl;
		  cout<<"================================================\n";
		  cout<<"Data Mahasiswa :"<<endl;
		  
for (i=1; i<=n; i++)
 {
  cout<<"Siswa UTY ke "<<i<<endl;
  cout<<"Masukkan NIM :";
  cin>>UTY[i].nim;
    
  cout<<"Nama Depan :";
  cin>>UTY[i].nama.namadepan;
  
  cout<<"Nama Belakang :";
  cin>>UTY[i].nama.namabelakang;
  
  cout<<"Jenis Kelamin(M/F) :";
  cin>>UTY[i].kelamin;
  
  cout<<"Jurusan :";
  cin>>jurusan;
     
  cout<<"Masukkan Tugas 1 :";
  cin>>UTY[i].T1;
  
  cout<<"Masukkan Tugas 2 :";
  cin>>UTY[i].T2;
  
  cout<<"Masukkan Tugas 3 :";
  cin>>UTY[i].T3;
  
  
  
  rata=(UTY[i].T1+UTY[i].T2+UTY[i].T3)/3;
  } 	  
		 //menampilkan hasil input
		for (i=1; i<=n; i++) {
		  cout<<endl<<endl<<"Mahasiswa UTY ke "<<i<<endl;
		  cout<<"NIM        :"<<UTY[i].nim<<endl;
		  cout<<"Nama       :"<<UTY[i].nama.namadepan<<" "<<UTY[i].nama.namabelakang<<endl;
		  cout<<"Kelamin    :"<<UTY[i].kelamin<<endl;  
		  cout<<"Jurusan    :"<<jurusan<<endl;
		  cout<<"Tugas 1    :"<<UTY[i].T1<<endl;
		  cout<<"Tugas 2    :"<<UTY[i].T2<<endl;
		  cout<<"Tugas 3    :"<<UTY[i].T3<<endl;
		  cout<<"Rata-rata  :"<<rata<<endl;
		  }
 system("pause");
return 0;
 }
