#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
void inputData();
void outputData();
void searching();
void transaksi();
void binary();
void seq();
void seqNama();
void seqMerk();
void seqDurasi();
void readFile(int *panjang);
void writeFile(int panjang);
void binaryNama();
void bubbleSort(int panjang);
void insertionSort(int panjang);
void selectionSort(int panjang);
void shellSort(int panjang);
void mergeSort(int l, int r);
void sortingMerge(int l, int m, int r);
void quickSort(int kiri, int kanan);
void split();
void mergingSambung();
void splitJmlKendaraan();
void splitLamaSewa();
void splitHarga();

struct dataMobil
{
	string merk, kode;
	int harga, durasi;
};

struct dataCustomer
{
	string nama;
	int tagihan, jmlKendaraan;
	dataMobil mobil[100];

}customer[100];
dataCustomer temp;
int jmlCustomer;
ifstream read;
ofstream write;


int main()
{
		int pilih;
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
		cout<<"\nMenu : "<<endl
		<<"1.Input Data "<<endl
		<<"2. Output"<<endl
		<<"3.Searching  "<<endl
		<<"4.Transaksi "<<endl
		<<"5. Exit "<<endl;
		cout<<" ===================================================================================="<<endl;
		cout<<"PILIH : ";cin>>pilih;
		switch(pilih)
		{
			case 1:
			inputData();

			break;

			case 2:
			outputData();
			break;

			case 3:
			searching();
			break;

			case 4:
			transaksi();
			break;

			case 5:
			exit(1);
			break;

			default:
			cout<<"Salah Input ";
		}
		return 0;
}

void inputData()
{		string namaFile;
		cout<<"Masukan Nama File yang digunakan : ";cin>>namaFile;
		cout<<"Masukkan jumlah customer: ";cin>>jmlCustomer;

		for (int i = 0; i < jmlCustomer; i++)
		{
			cout<<" Customer ke-"<<i+1<<endl;
			cout<<" Nama Customer: ";cin.ignore(); getline(cin,customer[i].nama);
			cout<<" Banyaknya Kendaraan yang disewa : ";cin>>customer[i].jmlKendaraan;
			for (int j = 0; j <customer[i].jmlKendaraan ; j++)
			{	cout<<"		Kendaraan ke-"<<j+1<<endl;
				cout<<"		Kode Kendaraan  : ";cin>>customer[i].mobil[j].kode;
				cout<<"		Lama sewa(hari) : ";cin>>customer[i].mobil[j].durasi;
				cout<<endl;

                if ((customer[i].mobil[j].kode=="1a")||(customer[i].mobil[j].kode=="1b")||(customer[i].mobil[j].kode=="1c")||(customer[i].mobil[j].kode=="1d")||(customer[i].mobil[j].kode=="1e")||(customer[i].mobil[j].kode=="1f")||(customer[i].mobil[j].kode=="1g")) {
                customer[i].mobil[j].harga = 300000;
                }
                if ((customer[i].mobil[j].kode=="1h")||(customer[i].mobil[j].kode=="1j")||(customer[i].mobil[j].kode=="1i")) {
                customer[i].mobil[j].harga = 400000;
                }
                if (customer[i].mobil[j].kode=="1a"){
                customer[i].mobil[j].merk = "Avanza";
                }
                if (customer[i].mobil[j].kode=="1b"){
                customer[i].mobil[j].merk  = "Xenia";
                }
                if (customer[i].mobil[j].kode=="1c"){
                customer[i].mobil[j].merk  = "Luxio";
                }
                if (customer[i].mobil[j].kode=="1d"){
                customer[i].mobil[j].merk  = "Ertiga";
                }
                if (customer[i].mobil[j].kode=="1e"){
                customer[i].mobil[j].merk  = "Picanto";
                }
                if (customer[i].mobil[j].kode=="1f"){
                customer[i].mobil[j].merk  = "Agya";
                }
                if (customer[i].mobil[j].kode=="1g"){
                customer[i].mobil[j].merk  = "Ayla";
                }
                if (customer[i].mobil[j].kode=="1h"){
                customer[i].mobil[j].merk  = "Mobilio";
                }
                if (customer[i].mobil[j].kode=="1i"){
                customer[i].mobil[j].merk  = "Innova";
                }
                if (customer[i].mobil[j].kode=="1j"){
                customer[i].mobil[j].merk  = "Grand Livina";
                }

            }


    }
        for (int i = 0; i<jmlCustomer ; i++)
		{
			write.open(namaFile.c_str(),ios::app);
			write<<customer[i].nama<<endl;
			write<<customer[i].jmlKendaraan<<endl;
			for (int j = 0; j <customer[i].jmlKendaraan ; j++)
			{
				write<<customer[i].mobil[j].kode<<endl;
				write<<customer[i].mobil[j].durasi<<endl;
				write<<customer[i].mobil[j].merk<<endl;
				write<<customer[i].mobil[j].harga<<endl;

			}
			write.close();
			cout<<endl;
		}
		system("pause");
		system("cls");
		main();
	}

void outputData()
{	string namaFile;
	int panjang;

		menu:
		cout<<"Masukan Nama File yang ingin di Baca : ";cin>>namaFile;
		read.open(namaFile.c_str());
		if (!read.good())
		{
			cout<< "\t" << namaFile << " tidak ada di dalam disk" << endl;
			read.close();
			goto menu;
		}

		readFile(&panjang);
		for (int i = 0; i < panjang; i++)
		{
			cout<<i+1<<endl;
			cout<<" Nama Customer: "<<customer[i].nama<<endl;
			cout<<" Banyaknya Kendaraan yang disewa : "<<customer[i].jmlKendaraan<<endl;
			for (int j = 0; j <customer[i].jmlKendaraan ; j++)
			{	cout<<"		Kendaraan ke-"<<j+1<<endl;
                cout<<"     Merk Kendaraan"<<customer[i].mobil[j].merk;
				cout<<"		Kode Kendaraan: "<<customer[i].mobil[j].kode<<endl;
				cout<<"		Lama sewa : "<<customer[i].mobil[j].durasi<<" hari"<<endl;
				cout<<"		Harga: "<<customer[i].mobil[j].harga<<endl;
				cout<<"     Tagihan : "<<customer[i].tagihan;
						}
			cout<<"\n ===================================================================================="<<endl;

		}

		read.close();
		system("pause");
		system("cls");
		main();
}

void searching()
{	search:
	int pilih;
	cout<<" MENU :";
	cout<<"\n1.Seq Search ";
	cout<<"\n2.Binary Search ";
	cout<<"\n3.Kembali Ke Menu Utama";
	cout<<"Pilih: ";cin>>pilih;
	switch(pilih)
	{
		case 1:
		seq();

		break;

		case 2:
		binary();
		break;

		case 3:
		system("cls");
		main();

		default:
		cout<<" Salah Input"<<endl;
		goto search;
	}
}

void readFile(int *panjang)
{
	int i;
	int j;
	for (i= 0; true ; i++)
	{

		getline(read,customer[i].nama);
		if(read.eof())
		{
		break;
		}
				read>>customer[i].jmlKendaraan;
				for (j = 0; j <customer[i].jmlKendaraan ; j++)
				{
				read>>customer[i].mobil[j].merk;
				read>>customer[i].mobil[j].kode;
				read>>customer[i].mobil[j].durasi;
				read>>customer[i].mobil[j].harga;
				}
		read.ignore();
	}
	*panjang=i;

}


void writeFile (int panjang)
{
	for (int i = 0; i<panjang ; i++)
		{

			write<<customer[i].nama<<endl;
			write<<customer[i].jmlKendaraan<<endl;
			for (int j = 0; j <customer[i].jmlKendaraan ; j++)
			{
				write<<customer[i].mobil[j].merk;
                write<<customer[i].mobil[j].kode;
				write<<customer[i].mobil[j].durasi;
				write<<customer[i].mobil[j].harga;
			}
			cout<<endl;
		}
}
		void seq()
		{	int pilih;
			seq:
			cout<<"MENU : "<<endl;
			cout<<"1.Cari Berdasarkan Nama Customer";
			cout<<"2.Cari Berdasarkan Merk Kendaraan";
			cout<<"3.Cari Berdasarkan Lama Sewa";
			cout<<"4.Kembali ke menu utama"<<endl;
			cout<<"Pilih : ";cin>>pilih;
			switch(pilih)
			{
					case 1:
					seqNama();
					goto seq;
					break;

					case 2:
					seqMerk();
					goto seq;
					break;

					case 3:
					seqDurasi();
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

			void seqNama()
			{
				int panjang;
				bool found;
				string namaFile,namaCustomer;
				cout<<"Ingin mencari di file mana?";
				cout<<"\nJawab : ";cin>>namaFile;
				read.open(namaFile.c_str());
				if(!read.good())
				{
					cout<<namaFile<<" tidak ada dalam disk ";
				}
				else
				{
					readFile(&panjang);
					cout<<" Nama Customer yang dicari : ";cin.ignore();getline(cin,namaCustomer);
					cout<<endl;
					found = false;
					for(int  i=0;i<panjang; i++)
					{
							if(namaCustomer==customer[i].nama)
							{
								found=true;
								cout<<" Nama Customer: "<<customer[i].nama<<endl;
								cout<<" Banyaknya Kendaraan : "<<customer[i].jmlKendaraan<<endl;

								for (int j = 0; j <customer[i].jmlKendaraan ; j++)
								{
									cout<<"		Kendaraan ke-"<<j+1<<endl;
                                    cout<<"     Merk Kendaraan"<<customer[i].mobil[j].merk;
                                    cout<<"		Kode Kendaraan: "<<customer[i].mobil[j].kode<<endl;
                                    cout<<"		Lama sewa : "<<customer[i].mobil[j].durasi<<" hari"<<endl;
                                    cout<<"		Harga: "<<customer[i].mobil[j].harga<<endl;
									cout<<endl;
								}
							}
						}

				}
					if(!found)
					{
							cout<<namaCustomer<<" yang anda cari tidak ada dalam file"<<namaFile<<endl;
					}
					read.close();
				}


			void seqMerk()
			{
				int panjang;
				bool found;
				string namaFile,merkCari;
				cout<<"Ingin mencari di file mana?";
				cout<<"\nJawab : ";cin>>namaFile;
				read.open(namaFile.c_str());
				if(!read.good())
				{
					cout<<namaFile<<" tidak ada dalam disk ";
				}
				else
				{
					readFile(&panjang);
					cout<<" Masukkan merk kendaraan : ";cin>>merkCari;
					cout<<endl;
					found = false;
					for(int  i=0;i<panjang; i++)
					{
								for (int j = 0; j <customer[i].jmlKendaraan ; j++)
								{
									if(merkCari==customer[i].mobil[j].merk)
									{

										found=true;
										cout<<"Merk kendaraan yang anda maksud disewa oleh : "<<endl;
										cout<<" Nama Customer: "<<customer[i].nama<<endl;
										cout<<" Banyaknya Kendaraan yang disewa : "<<customer[i].jmlKendaraan<<endl;


                                        cout<<"		Kendaraan ke-"<<j+1<<endl;
                                        cout<<"     Merk Kendaraan"<<customer[i].mobil[j].merk;
                                        cout<<"		Kode Kendaraan: "<<customer[i].mobil[j].kode<<endl;
                                        cout<<"		Lama sewa : "<<customer[i].mobil[j].durasi<<" hari"<<endl;
                                        cout<<"		Harga: "<<customer[i].mobil[j].harga<<endl;
                                        cout<<endl;
								}
								}
						}

				}
					if(!found)
					{
							cout<<" tidak ada merk kendaraan tersebut yang disewa "<<merkCari<<"di dalam file : "<<namaFile<<endl;
					}
					read.close();
			}

void seqDurasi()
			{
				int panjang, durasi;
				bool found;
				string namaFile;

				cout<<"Ingin mencari di file mana?";
				cout<<"\nJawab : ";cin>>namaFile;
				read.open(namaFile.c_str());
				if(!read.good())
				{
					cout<<namaFile<<" tidak ada dalam disk ";
				}
				else
				{
					readFile(&panjang);
					cout<<" Masukkan lama sewa kendaraan : ";cin>>durasi;
					cout<<endl;
					found = false;
					for(int  i=0; i<panjang; i++)
					{
								for (int j = 0; j <customer[i].jmlKendaraan ; j++)
								{
									if(durasi==customer[i].mobil[j].durasi)
									{

                                        found=true;
                                        cout<<"Kendaraan dengan lama sewa : "<<durasi<<"adalah : "<<endl;
                                        cout<<" Nama Customer: "<<customer[i].nama<<endl;
										cout<<" Banyaknya Kendaraan : "<<customer[i].jmlKendaraan<<endl;


                                        cout<<"		Kendaraan ke-"<<j+1<<endl;
                                        cout<<"     Merk Kendaraan"<<customer[i].mobil[j].merk;
                                        cout<<"		Kode Kendaraan: "<<customer[i].mobil[j].kode<<endl;
                                        cout<<"		Lama sewa : "<<customer[i].mobil[j].durasi<<" hari"<<endl;
                                        cout<<"		Harga: "<<customer[i].mobil[j].harga<<endl;
                                        cout<<endl;
								}
								}
						}

				}
					if(!found)
					{
							cout<<" tidak ada kendaraan yang disewa dengan lama "<<durasi<<" hari"<<"di dalam file : "<<namaFile<<endl;
					}
					write.close();
			}


void binary()
	{
			binary:
			int pilih;
			cout<<"MENU : "<<endl;
			cout<<"1. Cari Berdasarkan Nama Customer "<<endl;
			cout<<"2.Kembali ke menu utama "<<endl;
			cout<<"Pilih : ";cin>>pilih;
			switch(pilih){
			case 1:
			binary();
			goto binary;
			break;

			case 2:
			system("cls");
			main();
			break;

			default:
			cout<<" Salah Input"<<endl;
			goto binary;

			}

	}

void binaryNama()
{
		string namaFile, namaFileUrut,namaCustomer;
		int pilih1,i,j,k,panjang;
		int kiri, kanan;
		bool found;
		found=false;
		menuBinary:
		cout<<"Masukan Nama File yang ingin digunakan (.txt): ";cin>>namaFile;

			read.open(namaFile.c_str());
			if (!read.good())
			{
				cout<< "\t" << namaFile << " tidak ada di dalam direktori" << endl;
				read.close();
				goto menuBinary;
			}
			readFile(&panjang);
			read.close();
			cout<< "\tBeri nama File yang sudah diurutkan : "; cin>> namaFileUrut;
			write.open(namaFileUrut.c_str());
			cout<<endl;
			bin:
            cout<<"sebelum dicari pake binary, disorting dulu";
			cout<< "\t\tMETODE SORTING\n";
			cout<<"\n1. Bubble Sort";
			cout<<"\n2. Selection Sort";
			cout<<"\n3. Insertion SOrt";
			cout<<"\n4. Shell Sort";
			cout<<"\n5. Merge Sort";
			cout<<"\n6. Quick Sort";
			cout<<"\n7.Kembali";
			cout<< "\t\tPilihan anda : "; cin >> pilih1;
			cout<< endl;
			switch(pilih1){
				case 1:
					bubbleSort(panjang);
					break;
				case 2:
					selectionSort(panjang);
					break;
				case 3:
					insertionSort(panjang);
					break;
				case 4:
					shellSort(panjang);
					break;
				case 5:
					mergeSort(0, panjang-1);
					break;
				case 6:
					kiri = 0;
					kanan= panjang - 1;
					quickSort(kiri, kanan);
					break;
				case 7:
					system("cls");
					main();
					break;
				default :
					cout<< "Salah Input \n";
					goto bin;
			}
			writeFile(panjang);
			write.close();

			cout<< "\t\t Nama Customer : "; cin.ignore();getline(cin,namaCustomer);
			i = 0;
			j = panjang;
			while((!found) & (i <= j)){
				k = (i + j) / 2;
			    if(namaCustomer == customer[k].nama)
			        found = true;
			    else
			    {
			        if(namaCustomer < customer[k].nama)
			    	    j = k - 1;
			        else
			        	i = k + 1;
			    }
			}
			cout<<endl;
			if(found)
			{		cout<<" Nama Customer: "<<customer[i].nama<<endl;
					cout<<" Jumlah Kendaraan yang disewa : "<<customer[i].jmlKendaraan<<" unit"<<endl;

								for ( j = 0; j <customer[i].jmlKendaraan ; j++)
								{
                                        cout<<"		Kendaraan ke-"<<j+1<<endl;
                                        cout<<"     Merk Kendaraan"<<customer[i].mobil[j].merk;
                                        cout<<"		Kode Kendaraan: "<<customer[i].mobil[j].kode<<endl;
                                        cout<<"		Lama sewa : "<<customer[i].mobil[j].durasi<<" hari"<<endl;
                                        cout<<"		Harga: "<<customer[i].mobil[j].harga<<endl;
                                        cout<<endl;
								}	cout<<endl;

			}
			else
			    cout << "\t\t Nama customer "<<namaCustomer<<"tidak ada ";
			    system ("pause");
			    system("cls");
		}


void bubbleSort(int panjang)
{

				for(int i = 0; i<panjang-1; i++) {
					for(int j = 0; j<panjang-1-i; j++) {
				    	if(customer[j].nama > customer[j+1].nama) {
					        temp = customer[j];
					        customer[j] = customer[j+1];
					        customer[j+1] = temp;
				        }
				    }
				}

}

void insertionSort(int panjang)
{
				int i, j;
				string tomp;
			    for(i=1; i<panjang; i++) {
			    	temp =customer[i];
			       	tomp =customer[i].nama;
			      	j = i - 1;
			      	while( (j >= 0))
			      	{	if(tomp < customer[j].nama){
			         	customer[j+1] = customer[j];
			         	j = j - 1;
			         	customer[j+1] = temp;}
			         	else
			         	break;
			      	}
			   }
}

void selectionSort(int panjang)
{
				for(int current=0; current<panjang; current++)
				{
				    for(int j=current+1; j<panjang; j++)
					{
				        if(customer[current].nama> customer[j].nama)
				        {
				          	temp = customer[current];
				          	customer[current] = customer[j];
				          	customer[j] = temp;
				        }
				    }
				}
}

void shellSort (int panjang)
{
				int x, y, z;
			    for(z = panjang/2; z > 0; z /= 2)
			   	{
			      	for(y = z ; y < panjang; y++)
			      	{
			         	for(x = y-z; x >= 0; x -= z)
			         	{
			            	if(customer[x + z].nama >= customer[x].nama)
			               		break;
			            	else
			            	{
			               		temp = customer[x];
			               		customer[x] = customer[x + z];
			               		customer[x + z] = temp;
			            	}
			         	}
			      	}
			   	}
			}

				void mergeSort(int l, int r)
				{
					if (l < r)
					{
					   int m = l+(r-l)/2;
					   mergeSort(l, m);
					   mergeSort(m+1, r);
					   sortingMerge(l, m, r);
					}
				}

				void  sortingMerge(int l, int m, int r){
					int i, j, k;
				    int n1 = m - l + 1;
				    int n2 =  r - m;

				    dataCustomer L[n1], R[n2];

				    for (i = 0; i < n1; i++)
				        L[i] = customer[l + i];
				    for (j = 0; j < n2; j++)
				        R[j] = customer[m + 1+ j];

				    i = 0;
				    j = 0;
				    k = l;
				    while (i < n1 && j < n2)
				    {
				        if (L[i].nama <= R[j].nama)
				        {
				            customer[k] = L[i];
				            i++;
				        }
				        else
				        {
				            customer[k] = R[j];
				            j++;
				        }
				        k++;
				    }
				    while (i < n1)
				    {
				        customer[k] = L[i];
				        i++;
				        k++;
				    }
				    while (j < n2)
				    {
				        customer[k] = R[j];
				        j++;
				        k++;
				    }
				}

void quickSort(int kiri, int kanan){
				int low, high;
				string list_separator;

			   	low = kiri;
			   	high = kanan;
			   	list_separator = customer[(kiri + kanan) / 2].nama;

			   	do {
			      	while(customer[low].nama < list_separator)
			         	low++;
			      	while(customer[high].nama > list_separator)
			         	high--;

			      	if(low <= high)
			      	{
			         	temp = customer[low];
			         	customer[low++] = customer[high];
			         	customer[high--] = temp;
			 		}
			   	} while(low <= high);

			   	if(kiri < high) quickSort(kiri, high);
			   	if(low < kanan) quickSort(low, kanan);
			}

void transaksi()
{	trans:
	int pilih;
	cout<<" Menu Transaksi : "<<endl;
	cout<<"1. Splitting "<<endl;
	cout<<"2. Merging Sambung "<<endl;
	cout<<"3. Kembali "<<endl<<"pilih : ";cin>>pilih;
	switch(pilih)
	{
			case 1:
			split();
			goto trans;
			break;

			case 2:
			mergingSambung();
			goto trans;
			break;

			case 3:
			system("cls");
			main();
			break;

			default:
			cout<<"Salah input "<<endl;
			goto trans;

	}
}

void split()
{		int panjang,pilihSplit;

		splitmenu:
        cout<<"ingin dipisah berdasarkan apa?";
        cout<<"1. Jumlah Kendaraan";
        cout<<"2. Lama Sewa";
        cout<<"3. Harga";
        cout<<"pilihan anda : ";cin>>pilihSplit;
            switch(pilihSplit)
            {
                case 1:
                splitJmlKendaraan();
                break;

                case 2:
                splitLamaSewa();
                break;

                case 3:
                splitHarga();
                break;

                default:
                cout<<"Salah input "<<endl;
                goto splitmenu;

            }

}


void mergingSambung(){
		string namaFileNew, namaFile2, namaFile1;
		int i = 0, j;

		satu :
		cout<< "Masukkan nama file pertama : "; cin>> namaFile1;
		read.open(namaFile1.c_str());
		if (!read.good())
		{
			cout<< namaFile1 << " tidak ada di dalam direktori" << endl;
			read.close();
			goto satu;
		}


	for (i= 0; true ; i++)
	{

		getline(read,customer[i].nama);
		if(read.eof())
		{
		break;
		}
				read>>customer[i].jmlKendaraan;
				for (j = 0; j <customer[i].jmlKendaraan ; j++)
				{
				read>>customer[i].mobil[j].merk;
				read>>customer[i].mobil[j].kode;
				read>>customer[i].mobil[j].durasi;
				read>>customer[i].mobil[j].harga;
				}
		read.ignore();
	}
			read.close();


		dua :
		cout<< "Ketik nama file kedua : "; cin>> namaFile2;
		read.open(namaFile2.c_str());
		if (!read.good())
		{
			cout<< namaFile2 << " tidak ada di dalam direktori" << endl;
			read.close();
			goto dua;
		}


	for (i= 0; true ; i++)
	{

		getline(read,customer[i].nama);
		if(read.eof())
		{
		break;
		}
				read>>customer[i].jmlKendaraan;
				for (j = 0; j <customer[i].jmlKendaraan ; j++)
				{
				read>>customer[i].mobil[j].merk;
				read>>customer[i].mobil[j].kode;
				read>>customer[i].mobil[j].durasi;
				read>>customer[i].mobil[j].harga;
				}
		read.ignore();
	}
			read.close();

		cout<< "Masukkan nama file baru : "; cin>> namaFileNew;

		write.open(namaFileNew.c_str());
		writeFile(i);
		write.close();
	}
void splitJmlKendaraan() {
    int panjang;
        string namaFile;
		string namaFile1;
		string namaFile2;
		lagi:
        cout<<"Input nama file yang akan dibagi menjadi customer yang menyewa 1 kendaraan  dan  yang lebih: ";cin>>namaFile;
		read.open(namaFile.c_str());
		if(!read.good())
		{
			cout<< "\t" << namaFile << " tidak ada di dalam direktori" << endl;
			read.close();
			goto lagi;
		}
		readFile(&panjang);
		read.close();
		cout<<"Input nama file untuk satu kendaraan  : ";cin>>namaFile1;
		cout<<"Input nama file untuk yang menyewa kendaraan lebih dari satu : ";cin>>namaFile2;
		for (int i = 0; i < panjang; i++)
		{
				if(customer[i].jmlKendaraan==1)
				{
					write.open (namaFile1.c_str(), ios::app);
					write<<customer[i].nama<<endl;
					write<<customer[i].jmlKendaraan<<endl;
					for (int j = 0; j < customer[i].jmlKendaraan; j++)
				{
				write<<customer[i].mobil[j].kode<<endl;
				write<<customer[i].mobil[j].durasi<<endl;
				write<<customer[i].mobil[j].merk<<endl;
				write<<customer[i].mobil[j].harga<<endl;
				}
				write.close();
			}


			else
			{

					write.open (namaFile2.c_str(), ios::app);
					write<<customer[i].nama<<endl;
					write<<customer[i].jmlKendaraan<<endl;
					for (int j = 0; j < customer[i].jmlKendaraan; j++)
					{
					write<<customer[i].mobil[j].kode<<endl;
                    write<<customer[i].mobil[j].durasi<<endl;
                    write<<customer[i].mobil[j].merk<<endl;
                    write<<customer[i].mobil[j].harga<<endl;

				}
				write.close();
			}


		}
}
void splitLamaSewa() {
    int panjang;
        string namaFile;
		string namaFile1;
		string namaFile2;
		ulang:
        cout<<"Input nama file yang akan dibagi menjadi customer yang menyewa kendaraan 2 hari  dan  yang lebih: ";cin>>namaFile;
		read.open(namaFile.c_str());
		if(!read.good())
		{
			cout<< "\t" << namaFile << " tidak ada di dalam direktori" << endl;
			read.close();
			goto ulang;
		}
		readFile(&panjang);
		read.close();
		cout<<"Input nama file untuk kurang dari sama dengan dua hari  : ";cin>>namaFile1;
		cout<<"Input nama file untuk dua hari atau lebih : ";cin>>namaFile2;
		for (int i = 0; i < panjang; i++)
		{
		    for (int j = 0; j < customer[i].jmlKendaraan; j++)
            {
                if(customer[i].mobil[j].durasi<=2)
				{
					write.open (namaFile1.c_str(), ios::app);
					write<<customer[i].nama<<endl;
					write<<customer[i].jmlKendaraan<<endl;

				write<<customer[i].mobil[j].kode<<endl;
				write<<customer[i].mobil[j].durasi<<endl;
				write<<customer[i].mobil[j].merk<<endl;
				write<<customer[i].mobil[j].harga<<endl;

				write.close();
                }
                else
                {

                        write.open (namaFile2.c_str(), ios::app);
                        write<<customer[i].nama<<endl;
                        write<<customer[i].jmlKendaraan<<endl;

                        write<<customer[i].mobil[j].kode<<endl;
                        write<<customer[i].mobil[j].durasi<<endl;
                        write<<customer[i].mobil[j].merk<<endl;
                        write<<customer[i].mobil[j].harga<<endl;
                        write.close();
                }
		    }

		}




}
void splitHarga() {
    int panjang;
        string namaFile;
		string namaFile1;
		string namaFile2;
		ulang:
        cout<<"Input nama file yang akan dibagi menjadi customer yang menyewa kendaraan 2 hari  dan  yang lebih: ";cin>>namaFile;
		read.open(namaFile.c_str());
		if(!read.good())
		{
			cout<< "\t" << namaFile << " tidak ada di dalam direktori" << endl;
			read.close();
			goto ulang;
		}
		readFile(&panjang);
		read.close();
		cout<<"Input nama file untuk kurang dari sama dengan dua hari  : ";cin>>namaFile1;
		cout<<"Input nama file untuk dua hari atau lebih : ";cin>>namaFile2;
		for (int i = 0; i < panjang; i++)
		{
		    for (int j = 0; j < customer[i].jmlKendaraan; j++)
            {
                if(customer[i].mobil[j].durasi<=2)
				{
					write.open (namaFile1.c_str(), ios::app);
					write<<customer[i].nama<<endl;
					write<<customer[i].jmlKendaraan<<endl;

				write<<customer[i].mobil[j].kode<<endl;
				write<<customer[i].mobil[j].durasi<<endl;
				write<<customer[i].mobil[j].merk<<endl;
				write<<customer[i].mobil[j].harga<<endl;

				write.close();
                }
                else
                {

                        write.open (namaFile2.c_str(), ios::app);
                        write<<customer[i].nama<<endl;
                        write<<customer[i].jmlKendaraan<<endl;


                        write<<customer[i].mobil[j].kode<<endl;
                        write<<customer[i].mobil[j].durasi<<endl;
                        write<<customer[i].mobil[j].merk<<endl;
                        write<<customer[i].mobil[j].harga<<endl;
                        write.close();
                }
		    }

		}




}


