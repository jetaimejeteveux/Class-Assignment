#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
ofstream pesan;
string namaFile, kendaraan[30];
int jmlKendaraan, hartotMotor[30], hartotMobil[30],pilih;
struct dataMobil
{
	string merk, kode;
	int harga, durasi;
}mobil[100];

struct dataMotor
{
	string merk, kode;
	int harga, durasi;
}motor[100];
void seq()
		{	int pilih;
			seq:
			cout<<"MENU : "<<endl;
			cout<<"1.Cari Berdasarkan Merk";
			cout<<"2.Cari Berdasarkan Durasi Peminjaman"
			cout<<"3.Kembali ke menu utama"<<endl;
			cout<<"Pilih : ";cin>>pilSearch2;
			switch(pilSearch)
			{
					case 1:
					seq_nama();
					goto seq;
					break;

					case 2:
					seq_kedatangan();
					goto seq;
					break;

					case 3:
					seq_keberangkatan();
					goto seq;
					break;

					case 4:
					system("cls");
					main();
					break;

					default:
					cout<<" Salah Input"<<endl;
					goto seq;


			}
		}
void inputData () {
    cout << "Masukkan nama file	: ";cin>>namaFile;
		namaFile += ".txt";
		pesan.open(namaFile.c_str());

    cout<<" jumlah kendaraan yang ingin anda sewa = ";cin>>jmlKendaraan;
    for(int i=1;i<=jmlKendaraan;i++) {

		cout<<"\nAnda memilih Mobil atau motor? ";
		cout<<"\nJawaban anda = "; cin>> kendaraan[i];

		if(kendaraan[i]=="mobil") {


			cout<<"Kendaraan ke-"<<i <<" " <<kendaraan[i];

			cout<<"\nSilakan Masukkan kode mobil yang ingin anda sewa = "; cin>>mobil[i].kode;
			cout<<"Lama Sewa (hari) = ";cin>>mobil[i].durasi;

			if ((mobil[i].kode=="1a")||(mobil[i].kode=="1b")||(mobil[i].kode=="1c")||(mobil[i].kode=="1d")||(mobil[i].kode=="1e")||(mobil[i].kode=="1f")||(mobil[i].kode=="1g")) {
			mobil[i].harga = 300000;
			}
			if ((mobil[i].kode=="1h")||(mobil[i].kode=="1j")||(mobil[i].kode=="1i")) {
			mobil[i].harga = 400000;
			}
			if (mobil[i].kode=="1a"){
			mobil[i].merk = "Avanza";
			}
			if (mobil[i].kode=="1b"){
			mobil[i].merk = "Xenia";
			}
			if (mobil[i].kode=="1c"){
			mobil[i].merk = "Luxio";
			}
			if (mobil[i].kode=="1d"){
			mobil[i].merk = "Ertiga";
			}
			if (mobil[i].kode=="1e"){
			mobil[i].merk = "Picanto";
			}
			if (mobil[i].kode=="1f"){
			mobil[i].merk = "Agya";
			}
			if (mobil[i].kode=="1g"){
			mobil[i].merk = "Ayla";
			}
			if (mobil[i].kode=="1h"){
			mobil[i].merk = "Mobilio";
			}
			if (mobil[i].kode=="1i"){
			mobil[i].merk = "Innova";
			}
			if (mobil[i].kode=="1j"){
			mobil[i].merk = "Grand Livina";
			}

		pesan<<"\nData mobil yang anda sewa :";
		pesan<<"\nMerk :"<<mobil[i].merk;
		pesan<<"\nHarga : Rp. "<<mobil[i].harga;
		pesan<<"\nKode :"<<mobil[i].kode;
		pesan<<"\nLama Sewa (hari) :"<<mobil[i].durasi <<endl;
		hartotMobil[i] = mobil[i].harga*mobil[i].durasi;

		}
				if(kendaraan[i]=="motor") {

			cout<<"Kendaraan ke-"<<i <<" " <<kendaraan[i];

			cout<<"\nSilakan masukkan kode motor yang ingin anda sewa = "; cin >> motor[i].kode;
			cout<<"Lama Sewa (hari):";cin >> motor[i].durasi;

			if ((motor[i].kode=="2a")||(motor[i].kode=="2b")||(motor[i].kode=="2c")||(motor[i].kode=="2d")||(motor[i].kode=="2e")||(motor[i].kode=="2f")||(motor[i].kode=="2g")||(motor[i].kode=="2h")) {
			motor[i].harga= 70000;
		    }
			if (motor[i].kode=="2a"){
			motor[i].merk = "Mio Beat";
			}
			if (motor[i].kode=="2b"){
			motor[i].merk = "Supra Fit";
			}
			if (motor[i].kode=="2c"){
			motor[i].merk = "Supra X 125";
			}
			if (motor[i].kode=="2d"){
			motor[i].merk = "Mio Soul";
			}
			if (motor[i].kode=="2e"){
			motor[i].merk = "Honda Vario ";
			}
			if (motor[i].kode=="2f"){
			motor[i].merk = "Honda Blade ";
			}
			if (motor[i].kode=="2g"){
			motor[i].merk = "Honda Revo ";
			}
			if (motor[i].kode=="2h"){
			motor[i].merk = "Scoopy ";
			}
		pesan<<"\nData motor yang anda sewa :";
		pesan<<"\nMerk :"<<motor[i].merk;
		pesan<<"\nHarga : Rp. "<<motor[i].harga;
		pesan<<"\nKode :"<<motor[i].kode;
		pesan<<"\nLama Sewa :"<<motor[i].kode <<endl;


		hartotMotor[i]=motor[i].harga*motor[i].durasi;
		pesan.close();
		}
    }
}
void sorting() {
    cout<<"a. Sequential Search";
    cout<<"b. Binary Search";
    cout<<"c. Kembali Ke Menu Utama";
    cout<<"Pilih Searching : ";cin>>pilSearching;

    if(pilSearching=="a") {

    }





















}
int main() {
cout<<"\t\t\t\t\t\t\tDaftar kendaraan ";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tNama Mobil\t\t|\t\tHarga\t\t|\tKursi\t\t|\tKode Kendaraan\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\ta.Avanza\t\t|\tRp. 300.000/hari\t|\t6 kursi\t\t|\t\t1a\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tb.Xenia\t\t\t|\tRp. 300.000/hari\t|\t6 kursi\t\t|\t\t1b\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tc.Luxio\t\t\t|\tRp. 300.000/hari\t|\t6 kursi\t\t|\t\t1c\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\td.Ertiga\t\t|\tRp. 300.000/hari\t|\t6 kursi\t\t|\t\t1d\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\te.Picanto\t\t|\tRp. 300.000/hari\t|\t4 kursi\t\t|\t\t1e\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tf.Agya\t\t\t|\tRp. 300.000/hari\t|\t4 kursi\t\t|\t\t1f\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tg.Ayla\t\t\t|\tRp. 300.000/hari\t|\t4 kursi\t\t|\t\t1g\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\th.Mobilio\t\t|\tRp. 400.000/hari\t|\t6 kursi\t\t|\t\t1h\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\ti.Innova\t\t|\tRp. 400.000/hari\t|\t6 kursi\t\t|\t\t1i\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tj.Grand Livina\t\t|\tRp. 400.000/hari\t|\t6 kursi\t\t|\t\t1j\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<endl;
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tNama Motor\t\t|\t\tHarga\t\t|\tJenis Motor\t|\tKode Kendaraan\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\ta.Mio Beat\t\t|\tRp.  70.000/hari\t|\t Matic\t\t|\t\t2a\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tb.Supra Fit\t\t|\tRp.  70.000/hari\t|\t Bebek\t\t|\t\t2b\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tc.Supra X 125\t\t|\tRp.  70.000/hari\t|\t Bebek\t\t|\t\t2c\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\td.Mio Soul\t\t|\tRp.  70.000/hari\t|\t Matic\t\t|\t\t2d\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\te.Honda Vario \t\t|\tRp.  70.000/hari\t|\t Matic\t\t|\t\t2e\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tf.Honda Blade \t\t|\tRp.  70.000/hari\t|\t Bebek\t\t|\t\t2f\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\tg.Honda Revo \t\t|\tRp.  70.000/hari\t|\t Bebek\t\t|\t\t2g\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\th.Scoopy \t\t|\tRp.  70.000/hari\t|\t Matic\t\t|\t\t2h\t\t|";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n___________________________________________________________________________________________________________________________________";
cout<<"\n\t\t\t\t\t\t\tSEWA KENDARAAN";
cout<<"\n___________________________________________________________________________________________________________________________________";
menu:
cout<<"\nPilihan menu = ";
cout<<"\n1. Input data";
cout<<"\n2. Sorting";
cout<<"\n3. Transaksi";
cout<<"\npilihan anda = ";cin>> pilih;

if(pilih==1){
    inputData();

		cout << "Tekan ENTER untuk kembali ke menu!!";
		system ("pause");
		goto menu;
}
if (pilih==2){

}



}




























