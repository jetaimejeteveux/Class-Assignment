#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int matriks1[4][4], matriks2[4][4]; //deklaraasi matriks (array 2 dimensi) secara global

void garis1();
void matriks();
void matriksPertambahan();
void matriksPengurangan();
void matriksPerkalian();                  //deklarasi fungsi
void matriksTranspos();
void matriksRotasi();
void pencerminanHorizontal();
void pencerminanVertikal();

int main(){
	int menu; //deklarasi variabel untuk menyimpan nilai yang dipilih user untuk memilih menu
	char pilihan; //deklarasi variabel untuk menyimpan yang dipilih user (ingin lanjut atau tidak)
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << "Matriks 1 [" << i << "][" << j << "] = ";
			cin >> matriks1[i][j]; //input matriks1
		}
	}
	cout << endl;

	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << "Matriks 2 [" << i << "][" << j << "] = ";
			cin >> matriks2[i][j]; //input matriks2
		}
	}
	cout << endl;
	matriks(); //ouput inputan matriks tadi
	cout << endl;

	do{
	garis1();
	cout << "\t\tMENU  " << endl;
	garis1();
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Matriks Transpos" << endl; //output pilihan menu
	cout << "5. matriks 90 derajat" << endl;
	cout << "6. Horizontal Mirroring Matrix" << endl;
	cout << "7. Vertical Mirroring Matrix" << endl;
	cout << "8. Keluar" << endl;
	cout << "Menu : "; //input pilihan user
	cin >> menu;
	switch(menu){
		case 1 :
		matriks(); //memanggil fungsi matriks
		cout << endl;
		matriksPertambahan(); //memanggil fungsi pertambahan matriks sekaligus mengoutputkan
		break;
		case 2 :
		matriks();
		cout << endl;
		matriksPengurangan(); //memanggil fungsi pengurangan matriks sekaligus mengoutputkan
		break;
		case 3 :
		matriks();
		cout << endl;
		matriksPerkalian(); //memanggil fungsi perkalian matriks sekaligus mengoutputkan
		break;
		case 4 :
		matriks();
		cout << endl;
		matriksTranspos(); //memanggil fungsi transpos matriks sekaligus mengoutputkan
		break;
		case 5 :
		matriks();
		cout << endl;
		matriksRotasi(); //memanggil fungsi merotasi matriks sekaligus mengoutputkan
		break;
		case 6 :
        matriks();
		cout << endl;
		pencerminanHorizontal(); //memanggil fungsi pencerminan matriks secara horizontal sekaligus mengoutputkan
		break;
		case 7 :
        matriks();
		cout << endl;
		pencerminanVertikal(); //memanggil fungsi pencerminan matriks secara vertikal sekaligus mengoutputkan
		break;
		case 8 :
		cout << "TERIMA KASIH" << endl;
		return 0;


		default :
		cout << "Maaf pilihan yang anda masukkan salah";
		cout << "\nApakah anda ingin mengulangi? <y/n>";
		cin >> pilihan; //untuk melakukan perulangan (kembali ke menu)
			system ("cls");
		}
		cout << "Apakah anda Ingin melanjutkan?<y/n> ";
		cin >> pilihan;
		system("cls");
}
while(pilihan!='y' or pilihan != 'Y');
}
void garis1(){
	cout << "- - - - - - - - - - - - - - - - - -" << endl;
}

void matriks(){
	cout << "Matriks 1 = " << endl;
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << matriks1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\nMatriks 2 = " << endl;
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << matriks2[i][j] << " ";
		}
		cout << endl;
	}
	//menoutput dua matriks
}

void matriksPertambahan(){
	int hasilPenambahan[4][4];
	for(int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			hasilPenambahan[i][j] = matriks1[i][j] + matriks2[i][j];
		} //fungsi untuk menjumlahkan anggota matriks ordo 3x3 sekaligus menjumlah
	}
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << hasilPenambahan[i][j] << " ";
		}
		cout << endl;
	}
}

void matriksPengurangan(){
	int hasilPengurangan[4][4];
	for(int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			hasilPengurangan[i][j] = matriks1[i][j] - matriks2[i][j];
		} //fungsi untuk mengurangi 2 buah matriks sekaligus mengouputkan
	}
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << hasilPengurangan[i][j] << " ";
		}
		cout << endl;
	}
}

void matriksPerkalian(){
	int kali[4][4], x;
	for(int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			kali[i][j] = 0;
			for (int k = 1; k <= 3; k++){
				x = matriks1[i][k]*matriks2[k][j];
				kali[i][j]+=x;
			}
		}
	} //fungsi untuk mengalikan 2 matriks 3x3
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << kali[i][j] << " ";
		}
		cout << endl;
	}
}

void matriksTranspos(){
	cout << "Matriks 1 transpose = " << endl;
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << matriks1[j][i] << " ";
		}
		cout << endl;
	}
	cout << "Matriks 2 transpose = " << endl;
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << matriks2[j][i] << " ";
		}
		cout << endl;
	} //fungsi untuk mentranspose dan mengoutputkan dua buah matriks
}

void matriksRotasi(){
	cout << "Matriks 1 diputar = " << endl;
	for (int i = 1; i <= 3; i++){
		for (int j = 3; j >= 1; j--){
			cout << matriks1[j][i] << " ";
		}
		cout << endl;
	}
	cout << "Matriks 2 diputar = " << endl;
	for (int i = 1; i <= 3; i++){
		for (int j = 3; j >= 1; j--){
			cout << matriks2[j][i] << " ";
		}
		cout << endl;
	}
	//fungsi untuk merotasi matriks
}

void pencerminanHorizontal(){
	cout << "Matriks 1 pencerminan = " << endl;
	for (int i = 3; i >= 1; i--){
		for (int j = 1; j <= 3; j++){
			cout << matriks1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Matriks 2 pencerminan = " << endl;
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << matriks2[i][j] << " ";
		}
		cout << endl;
	} //fungsi untuk mencerminkan 2 matriks secara horizontal
}

void pencerminanVertikal(){
	cout << "Matriks 1 pencerminan = " << endl;
	for (int i = 1; i <= 3; i++){
		for (int j = 3; j >= 1; j--){
			cout << matriks1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Matriks 2 pencerminan = " << endl;
	for (int i = 1; i <= 3; i++){
		for (int j = 3; j >= 1; j--){
			cout << matriks2[i][j] << " ";
		}
		cout << endl;
	}
	//fungsi untuk mencerminkan 2 matriks secara vertikal
}

