#include <iostream>
using namespace std;

int main(){
	int n, angka[100], temp;
	cout << "Jumlah array : ";
	cin >> n;
	cout << "Masukkan angka : \n";
	for (int i = 0; i < n; i++){
		cout << "angka ke-" << i+1 << " ";
		cin >> angka[i];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (angka[j] > angka[j+1]){
				temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = temp;
			}
		}
	}
	cout << "Elemen terkecil adalah : " << angka[0] << endl;
	cout << "Elemen kedua terkecil adalah : " << angka[1];
}
