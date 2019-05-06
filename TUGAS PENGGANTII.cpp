#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

using namespace std;

	struct data{
		string nama;
		string nohp;
		string golDarah;
		string noKtp;
		string umur;
		int idpasien;
		string jnsklmn;
		int a,b,c,d;
				
} pasien[999];
	int jumlah;

void masuk()
				{
	//input data
				cout<<"==================INPUT DATA PASIEN======================";
				cout<<endl;
				cout<<"                Masukkan Banyak Pasien : ";
				cin>>jumlah;
				
				
				for (int i=0; i<jumlah; i++){
					
					cout<<"1.	Masukkan ID PASIEN(4)   \t: ";
					cin>>pasien[i].idpasien;

					cout<<"2.	Masukkan Nama           \t: ";
					cin>>pasien[i].nama;

					cout<<"3.	Golongan Darah 			\t: ";
					cin>>pasien[i].golDarah;

					cout<<"4.	Masukkan No KTP         \t: ";
					cin>>pasien[i].noKtp;
					
					cout<<"5.	Masukan Umur            \t:";
					cin>>pasien[i].umur;
					
					cout<<"6.	Masukan No Hp           \t:";
					cin>>pasien[i].nohp;
					
					cout<<"7.	Masuakn Jenis Kelamin   \t:";
					cin>>pasien[i].jnsklmn;
				}
			    }
//AKHIR INPUT DATA
				
//MENAMPILKAN DATA
			void tampil()
				{
				system("cls");
				cout<<"Data yang anda masukkan :"<<endl;
				cout<<"======================================================"<<endl;
				for(int i=0;i<jumlah;i++)
				
				{					
				cout<<"1.	NAMA          :"<<pasien[i].nama<<endl;
				cout<<"2.	Jenis Kelamin :"<<pasien[i].jnsklmn<<endl;
				cout<<"3.	UMUR          :"<<pasien[i].umur<<endl;
				cout<<"4.	DARAH         :"<<pasien[i].golDarah<<endl;
				cout<<"5.	KTP           :"<<pasien[i].noKtp<<endl;
				cout<<"6.	ID            :"<<pasien[i].idpasien<<endl;				
				cout<<"7.	Ho. Hp        :"<<pasien[i].nohp<<endl;
				}
				}
//AKHIR TAMPIL DATA
		
				void update()
				{
//update data
				cout<<"==================UPDATE DATA PASIEN======================";
				cout<<endl;
				cout<<"                Masukkan Data Pasien Baru Ke- : ";
				cin>>jumlah;
				
				
				for (int i=0; i<jumlah; i++){
					
					cout<<"1.	Masukkan ID PASIEN(4)   \t: ";
					cin>>pasien[i].idpasien;

					cout<<"2.	Masukkan Nama           \t: ";
					cin>>pasien[i].nama;

					cout<<"3.	Golongan Darah 			\t: ";
					cin>>pasien[i].golDarah;

					cout<<"4.	Masukkan No KTP         \t: ";
					cin>>pasien[i].noKtp;
					
					cout<<"5.	Masukan Umur            \t:";
					cin>>pasien[i].umur;
					
					cout<<"6.	Masukan No Hp           \t:";
					cin>>pasien[i].nohp;
					
					cout<<"7.	Masuakn Jenis Kelamin   \t:";
					cin>>pasien[i].jnsklmn;
				}
			    }
//akhir data
void hapusdata()
{int x,y,i,a;
 cout<<"Hapus Data KE-";
 cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {pasien[i]=pasien[i+1];}
 system ("cls");
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();system ("cls");
}
				
				
		int main(){
			int pilih;
				do{system("cls");
		cout<<"1. Input data pasien"<<endl;
		cout<<"2. Tampilkan data pasien"<<endl;
		cout<<"3. Update data pasien"<<endl;
		cout<<"4. Hapus data pasien"<<endl;
		cout<<"0. keluar"<<endl;
		cout<<"Pilih Menu : ";
		cin>>pilih;

		switch(pilih){
			case 0:
				cout<<"Keluar"<<endl;
				break;
			case 1: masuk();break;
			case 2: tampil();break;
			case 3: update();break;
			case 4: hapusdata();break;
			default:
				cout<<"Menu Tidak Tersedia";
		}
		system("pause");
	}while(pilih != 0);
			};
