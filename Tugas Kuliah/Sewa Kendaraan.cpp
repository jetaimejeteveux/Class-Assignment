#include <iostream>
using namespace std;
int main () {
ofstream file, pesan;
int jmlkendaraan,harga[30],x,Total[30],durasi[30];
int totalharga=0;
string namaFile;
string kodemobil[30],kodemotor[30],kendaraan[30],mobil[30],motor[30];
//sumber harga motor = rentalmotoryogyakarta.com
//sumber harga mobil = sewamobil-jogja.com
cout<<"\t\t\t\t\t\t\tDaftar kendaraan ";
cout<<"\n_____________________________________________";
cout<<"\n\tNama Mobil\t\t|\t\tHarga\t\t|\tKursi\t\t|\tKode Kendaraan\t|";
cout<<"\n_____________________________________________";
cout<<"\n\ta.Avanza\t\t|\tRp. 300.000/hari\t|\t6 kursi\t\t|\t\t1a\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\tb.Xenia\t\t\t|\tRp. 300.000/hari\t|\t6 kursi\t\t|\t\t1b\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\tc.Luxio\t\t\t|\tRp. 300.000/hari\t|\t6 kursi\t\t|\t\t1c\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\td.Ertiga\t\t|\tRp. 300.000/hari\t|\t6 kursi\t\t|\t\t1d\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\te.Picanto\t\t|\tRp. 300.000/hari\t|\t4 kursi\t\t|\t\t1e\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\tf.Agya\t\t\t|\tRp. 300.000/hari\t|\t4 kursi\t\t|\t\t1f\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\tg.Ayla\t\t\t|\tRp. 300.000/hari\t|\t4 kursi\t\t|\t\t1g\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\th.Mobilio\t\t|\tRp. 400.000/hari\t|\t6 kursi\t\t|\t\t1h\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\ti.Innova\t\t|\tRp. 400.000/hari\t|\t6 kursi\t\t|\t\t1i\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\tj.Grand Livina\t\t|\tRp. 400.000/hari\t|\t6 kursi\t\t|\t\t1j\t\t|";
cout<<"\n_____________________________________________";
cout<<endl;
cout<<"\n_____________________________________________";
cout<<"\n\tNama Motor\t\t|\t\tHarga\t\t|\tJenis Motor\t|\tKode Kendaraan\t|";
cout<<"\n_____________________________________________";
cout<<"\n\ta.Mio Beat\t\t|\tRp.  70.000/hari\t|\t Matic\t\t|\t\t2a\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\tb.Supra Fit\t\t|\tRp.  70.000/hari\t|\t Bebek\t\t|\t\t2b\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\tc.Supra X 125\t\t|\tRp.  70.000/hari\t|\t Bebek\t\t|\t\t2c\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\td.Mio Soul\t\t|\tRp.  70.000/hari\t|\t Matic\t\t|\t\t2d\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\te.Honda Vario \t\t|\tRp.  70.000/hari\t|\t Matic\t\t|\t\t2e\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\tf.Honda Blade \t\t|\tRp.  70.000/hari\t|\t Bebek\t\t|\t\t2f\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\tg.Honda Revo \t\t|\tRp.  70.000/hari\t|\t Bebek\t\t|\t\t2g\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n\th.Scoopy \t\t|\tRp.  70.000/hari\t|\t Matic\t\t|\t\t2h\t\t|";
cout<<"\n_____________________________________________";
cout<<"\n_____________________________________________";
cout<<"\n\t\t\t\t\t\t\tSEWA KENDARAAN";
cout<<"\n_____________________________________________";
cout<<"\nHarap masukkan Jumlah Kendaraan yang ingin anda sewa = ";cin >> jmlkendaraan;
cout<<"Pilih Menu : ";
cout<<"1. Input File";
cout<<"2. Searching File";
cout<<"3. Transaksi";
cout<<"Pilihan anda : ";
cin>>pilih;
if(pilih==1) {
       cout << "Masukkan nama file	: ";cin>>namafile;
		namafile += ".txt";
		pesan.open(namafile.c_str());

	for(x=1;x<=jmlkendaraan;x++) {

		cout<<"\nAnda memilih Mobil atau motor? ";
		cout<<"\nJawaban anda = "; cin>> kendaraan[x];

		if(kendaraan[x]=="mobil") {
            pesan.open("Mobil.txt")
			cout<<"Kendaraan ke-"<<x <<" " <<kendaraan[x];

			cout<<"\nSilakan Masukkan kode mobil yang ingin anda sewa = "; cin>>kodemobil[x];
			cout<<"Lama Sewa (hari) = ";cin>>durasi[x];

			if ((kodemobil[x]=="1a")||(kodemobil[x]=="1b")||(kodemobil[x]=="1c")||(kodemobil[x]=="1d")||(kodemobil[x]=="1e")||(kodemobil[x]=="1f")||(kodemobil[x]=="1g")) {
			harga[x] = 300000;
			}
			if ((kodemobil [x]=="1h")||(kodemobil[x]=="1j")||(kodemobil[x]=="1i")) {
			harga[x] = 400000;
			}
			if (kodemobil[x]=="1a"){
			mobil[x] = "Avanza";
			}
			if (kodemobil[x]=="1b"){
			mobil[x] = "Xenia";
			}
			if (kodemobil[x]=="1c"){
			mobil[x] = "Luxio";
			}
			if (kodemobil[x]=="1d"){
			mobil[x] = "Ertiga";
			}
			if (kodemobil[x]=="1e"){
			mobil[x] = "Picanto";
			}
			if (kodemobil[x]=="1f"){
			mobil[x] = "Agya";
			}
			if (kodemobil[x]=="1g"){
			mobil[x] = "Ayla";
			}
			if (kodemobil[x]=="1h"){
			mobil[x] = "Mobilio";
			}
			if (kodemobil[x]=="1i"){
			mobil[x] = "Innova";
			}
			if (kodemobil[x]=="1j"){
			mobil[x] = "Grand Livina";
			}

		cout<<"\nData mobil yang anda sewa :";
		cout<<"\nMerk :"<<mobil[x];
		cout<<"\nHarga : Rp. "<<harga[x];
		cout<<"\nKode :"<<kodemobil[x];
		cout<<"\nLama Sewa (hari) :"<<durasi[x] <<endl;
		Total[x]=harga[x]*durasi[x];

		//sampe 1i
		//Lama Sewa
		//Durasi
		//Harga
		}
		if(kendaraan[x]=="motor") {

			cout<<"Kendaraan ke-"<<x <<" " <<kendaraan[x];

			cout<<"\nSilakan masukkan kode motor yang ingin anda sewa = "; cin >> kodemotor[x];
			cout<<"Lama Sewa (hari):";cin >> durasi[x];

			if ((kodemotor[x]=="2a")||(kodemotor[x]=="2b")||(kodemotor[x]=="2c")||(kodemotor[x]=="2d")||(kodemotor[x]=="2e")||(kodemotor[x]=="2f")||(kodemotor[x]=="2g")||(kodemotor[x]=="2h")) {
			harga[x] = 70000;
		    }
			if (kodemotor[x]=="2a"){
			motor[x] = "Mio Beat";
			}
			if (kodemotor[x]=="2b"){
			motor[x] = "Supra Fit";
			}
			if (kodemotor[x]=="2c"){
			motor[x] = "Supra X 125";
			}
			if (kodemotor[x]=="2d"){
			motor[x] = "Mio Soul";
			}
			if (kodemotor[x]=="2e"){
			motor[x] = "Honda Vario ";
			}
			if (kodemotor[x]=="2f"){
			motor[x] = "Honda Blade ";
			}
			if (kodemotor[x]=="2g"){
			motor[x] = "Honda Revo ";
			}
			if (kodemotor[x]=="2h"){
			motor[x] = "Scoopy ";
			}
		cout<<"\nData motor yang anda sewa :";
		cout<<"\nMerk :"<<motor[x];
		cout<<"\nHarga : Rp. "<<harga[x];
		cout<<"\nKode :"<<kodemotor[x];
		cout<<"\nLama Sewa :"<<durasi[x] <<endl;


		Total[x]=harga[x]*durasi[x];
		}
	}
cout<<"\n_____________________________________________";
cout<<"\n\t\t\t\t\tTagihan Peminjaman";
cout<<"\n_____________________________________________";
cout<<"\n\tJenis Kendaraan\t\t|\tNama Kendaraan\t\t\t|\tDurasi\t\t|\t\tTotal\t\t\t|";
cout<<"\n_____________________________________________";
	for(x=1;x<=jmlkendaraan;x++) {
	cout<<"\n\t" <<kendaraan[x] <<"\t\t\t|\t"  <<mobil[x]<<motor[x] <<"\t\t\t|\t"  <<durasi[x]<<" Hari" <<"\t\t|\t" <<"Rp. "<<Total[x] <<"\t\t|";
	totalharga=totalharga+Total[x];
	}
cout<<"\n_____________________________________________";

cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal Harga= Rp. "<<totalharga;
}
