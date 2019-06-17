#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int tmp;
struct jadwalLama{
		string kegiatan;
		int tanggal;
		int bulan;
		int tahun;
	}dataLama[100];
struct jadwalUpdate{
		string kegiatan;
		int tanggal;
		int bulan;
		int tahun;
	}dataUpdate[100];

int main(){
	string kegiatan, cepetLulus;
	int n=0,pilih;
	char pilihHuruf;
		cout << "Menu :" << endl;
		cout << "1. Input Data" << endl;
		cout << "2. Tampilkan Data" << endl;
		cout << "3. Exit" << endl;
		cout << "Pilih : "; cin >> pilih;
		if(pilih==1){
			system("cls");
			for(int i=0; i<4; i++){
				cin.ignore();
				cout << "Kegiatan : "; getline(cin,dataLama[i].kegiatan);
				cout << "Tanggal : "; cin >> dataLama[i].tanggal;
				cout << "Bulan : "; cin >> dataLama[i].bulan;
				cout << "Tahun : "; cin >> dataLama[i].tahun;
				cout << endl;
			}
			ofstream MyFile;
			MyFile.open("jadwalku.txt");
			for(int i=0; i<4; i++){
				MyFile << "Kegiatan : " << dataLama[i].kegiatan << endl;
				MyFile << "Tanggal : " << dataLama[i].tanggal << endl;
				MyFile << "Bulan : " << dataLama[i].bulan << endl;
				MyFile << "Tahun : " << dataLama[i].tahun << endl;
				MyFile << endl;
			}
			MyFile.close();
			cout << "Kembali ke menu ?(y/n)"; cin >> pilihHuruf;
			if(pilihHuruf=='y'){
				system("cls");
				main();
			}
		}
		if(pilih==2){
			system("cls");
			ifstream myFile;
			myFile.open("jadwalku.txt");
			while(myFile){
				for(int i=1; i<=2; i++){
					myFile >> cepetLulus;
				}
				getline(myFile , dataUpdate[n].kegiatan);
				for(int i=1; i<=2; i++){
					myFile >> cepetLulus;
				}
				myFile >> dataUpdate[n].tanggal;
				for(int i=1; i<=2; i++){
					myFile >> cepetLulus;
				}
				myFile >> dataUpdate[n].bulan;
				for(int i=1; i<=2; i++){
					myFile >> cepetLulus;
				}
				myFile >> dataUpdate[n].tahun;
				n++;
			}

			for(int i=0; i<3; i++){
				for(int j=i+1; j<4; j++){
					if (dataUpdate[i].tahun > dataUpdate[j].tahun) {
						struct jadwalUpdate temp = dataUpdate[i];
						dataUpdate[i] = dataUpdate[j];
						dataUpdate[j] = temp;
					}
					else if (dataUpdate[i].tahun == dataUpdate[j].tahun && dataUpdate[i].bulan > dataUpdate[j].bulan) {
						struct jadwalUpdate temp = dataUpdate[i];
						dataUpdate[i] = dataUpdate[j];
						dataUpdate[j] = temp;
					}
					else if (dataUpdate[i].tahun == dataUpdate[j].tahun && dataUpdate[i].bulan == dataUpdate[j].bulan && dataUpdate[i].tanggal > dataUpdate[j].tanggal) {
						struct jadwalUpdate temp = dataUpdate[i];
						dataUpdate[i] = dataUpdate[j];
						dataUpdate[j] = temp;
					}
				}
			}
			myFile.close();
			cout << "Kegiatan" << "\t" << "Tanggal" << endl;
			for(int i=0; i<4; i++){
				cout << dataUpdate[i].kegiatan << "\t" << dataUpdate[i].tanggal << "-" << dataUpdate[i].bulan <<"-"<< dataUpdate[i].tahun ;
				cout << endl;
			}
			cout << "Kembali ke menu ?(y/n)"; cin >> pilihHuruf;
			if(pilihHuruf=='y'){
				system("cls");
				main();
			}
		}
}
