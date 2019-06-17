#include <iostream>
#include <string.h>
using namespace std;
void jumlahX (int n, int i);
void ubahXY(int n);
char kata[20];
int i=0;
int main() {
	int pilih,n;
    do{
		cout << "Menu : \n";
		cout << "1.Menghitung X\n";
		cout << "2.Merubah XY\n";
		cout << "3.Exit\n";
		cout << "Pilihan : "; cin >> pilih;
		if(pilih == 1){
			cout << "Masukan kata : "; cin >> kata;
			n=strlen(kata);
			cout << "Jumlah x : ";
			jumlahX(n,i);
			cout << endl;
		} else if(pilih==2){
			cout << "Masukan kata : "; cin >> kata;
			n=strlen(kata);
			cout << "Hasil : ";
			ubahXY(n);
			cout << endl;
		}

	} while(pilih!=3);

}

void jumlahX (int n, int i) {
	if(n == 0){
		if(kata[n]=='x'){
			i++;}
			cout<<i;
	} else {
		if(kata[n]=='x'){
			i++;
		}
		jumlah(n-1,i);
	}
}
void ubahXY(int n) {
	if(n == 0){
		if(kata[n]=='x'){
			kata[n] = 'y';
			cout << kata[n];
		} else
			cout << kata[n];
	} else {
		if(kata[n]=='x'){
			kata[n]='y';
			ubah(n-1);
			cout << kata[n];
		} else {
			ubah(n-1);
			cout << kata[n];
		}
	}
}
