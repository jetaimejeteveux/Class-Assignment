#include <iostream>
#include <iomanip>
using namespace std;

int jum;

struct daftarMatkul{
	char namaMatkul[20];
	char huruf;
	float nilai;
	char dosen[20];
	int sks;
	int konversi;
	char kodeMatkul[4];
};

struct data{
	char nim[9];
	char nama[20];
	char gender;
	daftarMatkul matkul[10];
	int banyak;
	float ip;
	int totalsks;
	float ipk;
}mahasiswa[5];
void garis();
void konversi();
void ipk();


int main(){
	int i, j;
	float max;
	cout << "Jumlah mahasiswa : ";
	cin >> jum;
	cout << "Masukkan data : \n";
	for (i = 0;i < jum; i++){
		cout << endl;
		cout << "Mahasiswa ke-" << (i+1) << " : \n";
		cout << "Nama	: ";
		cin.ignore();
		cin.getline(mahasiswa[i].nama,sizeof(mahasiswa[i].nama));
		cout << "NIM	: ";
		cin >> mahasiswa[i].nim;
		cout << "jk	: ";
		cin >> mahasiswa[i].gender;
		cout << "matkul yang diambil : ";
		cin >> mahasiswa[i].banyak;
		for (j=0; j < mahasiswa[i].banyak; j++){
			cin.ignore();
			cout << endl;
			cout << "Mata Kuliah ke- " << (j+1) << " : \n";
			cout << "Kode 	: ";
			cin.getline(mahasiswa[i].matkul[j].kodeMatkul, sizeof (mahasiswa[i].matkul[j].kodeMatkul));
			cout << "Matkul  : ";
			cin.getline(mahasiswa[i].matkul[j].namaMatkul,sizeof(mahasiswa[i].matkul[j].namaMatkul));
			cout << "Dosen	: ";
			cin.getline(mahasiswa[i].matkul[j].dosen,sizeof(mahasiswa[i].matkul[j].dosen));
			cout << "Nilai	: ";
			cin >> mahasiswa[i].matkul[j].nilai;
			cout << "SKS	: ";
			cin >> mahasiswa[i].matkul[j].sks;
		}
		cout<<endl;
	}
	konversi(); ipk();
	cout<<endl;
	cout << "Output :\n";
	for(i = 0;i < jum; i++){
		cout << "Mahasiswa ke-" << (i+1) << " : " << endl;
		cout << "Nama Mahasiswa : " << mahasiswa[i].nama << endl;
		cout << "NIM : " << mahasiswa[i].nim << endl;
		cout << "Jenis Kelamin : " << mahasiswa[i].gender << endl;
		cout << "Jumlah SKS : " << mahasiswa[i].totalsks << endl;
		cout << "IPK : " << mahasiswa[i].ipk << endl << endl;
		garis();
		cout << "No" << setw(5) << "Kode" << setw(20) << "Nama Matkul" << setw(20) << "Dosen" << setw(20) << "Nilai\n";
		garis();
		for(j = 0; j < mahasiswa[i].banyak; j++){
			cout << (j+1) << setw(5) << mahasiswa[i].matkul[j].kodeMatkul << setw(20) << mahasiswa[i].matkul[j].namaMatkul;
			cout << setw(20) << mahasiswa[i].matkul[j].dosen << setw(20) << mahasiswa[i].matkul[j].konversi << endl;
		}
		cout << endl;
	}
	cout << "\nIPK Terbesar : ";
	max = mahasiswa[1].ip;
	for (i = 0; i < jum; i++){
		if (max <= mahasiswa[i].ipk){
			max = mahasiswa[i].ipk;
		}
	}
	for (i = 0; i < jum; i++){
		if (max == mahasiswa[i].ipk){
			cout << mahasiswa[i].ipk;
		}
	}
	cout << "dengan IPK = " << max;
}
void garis(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}
void konversi(){
	for ( int i = 0; i < jum; i++){
		for ( int j = 0; j < mahasiswa[i].banyak; j++){
			if (mahasiswa[i].matkul[j].nilai >= 80 && mahasiswa[i].matkul[j].nilai <= 100){
				mahasiswa[i].matkul[j].huruf = 'A';
				mahasiswa[i].matkul[j].konversi = 4;
			}
			else if ((mahasiswa[i].matkul[j].nilai >= 60)&&(mahasiswa[i].matkul[j].nilai < 80)){
				mahasiswa[i].matkul[j].huruf = 'B';
				mahasiswa[i].matkul[j].konversi = 3;
			}
			else if ((mahasiswa[i].matkul[j].nilai >= 30)&&(mahasiswa[i].matkul[j].nilai < 80)){
				mahasiswa[i].matkul[j].huruf = 'C';
				mahasiswa[i].matkul[j].konversi = 2;
			}
			else if ((mahasiswa[i].matkul[j].nilai >= 0)&&(mahasiswa[i].matkul[j].nilai < 80)){
				mahasiswa[i].matkul[j].huruf = 'D';
				mahasiswa[i].matkul[j].konversi = 1;
			}
		}
	}
}

void ipk(){
	for (int i = 0; i < jum; i++){
		mahasiswa[i].totalsks = 0;
		mahasiswa[i].ipk = 0;
		for (int j = 0; j < mahasiswa[i].banyak; j++){
			mahasiswa[i].totalsks+=mahasiswa[i].matkul[j].sks;
			mahasiswa[i].ip = (mahasiswa[i].matkul[j].konversi*mahasiswa[i].matkul[j].sks);
			mahasiswa[i].ipk += mahasiswa[i].ip;
		}
		mahasiswa[i].ipk = mahasiswa[i].ipk/mahasiswa[i].totalsks;
	}

}
