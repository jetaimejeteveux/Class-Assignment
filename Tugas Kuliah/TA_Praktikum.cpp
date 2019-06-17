#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
void inputData();
void outputData();

void ambilfile(int *pointer);
void aturfile(int pointer);
void seqNama();
void seqHarga();
void searching();
void binaryHarga();
void sorting();

struct dataCustomer
{
	string nama, NIK,kodePenerbangan;
	int hargaTiket;
	int tagihan=0;


}customer[100];
dataCustomer temp;
int banyakCustomer;
ifstream filein;
ofstream fileout;


int main()
{
		int pilih;
		cout<<"\t\t\t\t\t\t\tDaftar Penerbangan ";
        cout<<"\n___________________________________________________________________________________________________________________________________";
        cout<<"\n\tAsal\t\t\t|\t\tTujuan\t\t|\t\tHarga\t\t|\tKode Penerbangan    |";
        cout<<"\n___________________________________________________________________________________________________________________________________";
        cout<<"\n\t1.Bandung\t\t|\t\ta.Jogjakarta\t|\tRp. 700.000\t\t|\t\t1a\t      |";
        cout<<"\n___________________________________________________________________________________________________________________________________";
        cout<<"\n\t1.Bandung\t\t|\t\tb.Surabaya\t|\tRp. 1.000.000\t\t|\t\t1b\t      |";
        cout<<"\n___________________________________________________________________________________________________________________________________";
        cout<<"\n\n\n\n___________________________________________________________________________________________________________________________________";
        cout<<"\n\t2.Jogjakarta\t\t|\t\ta.Bandung\t|\tRp. 600.000\t\t|\t\t2a\t      |";
        cout<<"\n___________________________________________________________________________________________________________________________________";
        cout<<"\n\t2.Jogjakarta\t\t|\t\tb.Surabaya\t|\tRp. 800.000\t\t|\t\t2b\t      |";
        cout<<"\n___________________________________________________________________________________________________________________________________";
        cout<<"\n\n\n\n___________________________________________________________________________________________________________________________________";
         cout<<"\n\t3.Surabaya\t\t|\t\ta.Bandung\t|\tRp. 950.000\t\t|\t\t3a\t      |";
        cout<<"\n___________________________________________________________________________________________________________________________________";
        cout<<"\n\t3.Surabaya\t\t|\t\tb.Jogja\t\t|\tRp. 900.000\t\t|\t\t3b\t      |";
        cout<<"\n___________________________________________________________________________________________________________________________________";

		cout<<"\nMenu : "<<endl;
		menuawal:
		cout<<"1.Input Data "<<endl;
		cout<<"2. Output"<<endl;
		cout<<"3.Searching  "<<endl;
		cout<<"4. Exit "<<endl;
		cout<<" ===================================================================================="<<endl;
		cout<<"PILIH : ";cin>>pilih;
		 switch(pilih)
		{
			case 1:
			inputData();
            goto menuawal;
			break;

			case 2:
			outputData();
			break;

			case 3:
			searching();
			break;

			case 4:
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
		cout<<"Input Banyaknya Penumpang: ";cin>>banyakCustomer;

		for (int i = 0; i < banyakCustomer; i++)
		{
			cout<<" Penumpang ke-"<<i+1<<endl;
			cout<<" Nama Penumpang : ";cin.ignore(); getline(cin,customer[i].nama);
			cout<<" NIK = ";cin>>customer[i].NIK;
            cout<<"	Kode Penerbangan : ";cin>>customer[i].kodePenerbangan;

				if(customer[i].kodePenerbangan=="1a")
                {
                    customer[i].hargaTiket=700000;
                }
                if(customer[i].kodePenerbangan=="2a")
                {
                    customer[i].hargaTiket=600000;
                }
                if (customer[i].kodePenerbangan=="2b")
                {
                    customer[i].hargaTiket=800000;
                }
                if(customer[i].kodePenerbangan=="1b")

                {
                    customer[i].hargaTiket=1000000;
                }
                if(customer[i].kodePenerbangan=="3b")
                {
                    customer[i].hargaTiket=900000;
                }
                if(customer[i].kodePenerbangan=="3a")
                {
                    customer[i].hargaTiket=950000;
                }
                cout<<endl;



		}

			for (int i = 0; i<banyakCustomer ; i++)
		{
			fileout.open(namaFile.c_str(),ios::app);
			fileout<<customer[i].nama<<endl;
			fileout<<customer[i].NIK<<endl;
			fileout<<customer[i].kodePenerbangan<<endl;
			fileout<<customer[i].hargaTiket<<endl;

			fileout.close();
			cout<<endl;
		}
		system("pause");
		system("cls");
		main();
}
void outputData()
{	string namaFile;
	int pointer;

		menu:
		cout<<"Masukan Nama File yang di Output : ";cin>>namaFile;
		filein.open(namaFile.c_str());
		if (!filein.good())
		{
			cout<< "\t" << namaFile << " tidak ada di dalam disk" << endl;
			filein.close();
			goto menu;
		}

		ambilfile(&pointer);
		for (int i = 0; i < pointer; i++)
		{
			cout<<i+1<<endl;
			cout<<" Nama Penumpang: "<<customer[i].nama<<endl;

            cout<<"		NIK : "<<customer[i].NIK<<endl;
            cout<<"		Kode Penerbangan : "<<customer[i].kodePenerbangan<<endl;
            cout<<"		Harga tiket : "<<customer[i].hargaTiket<<endl;


			cout<<"\n ===================================================================================="<<endl;

		}

		filein.close();
		system("pause");
		system("cls");
		main();
}

void ambilfile(int *pointer)
{
	int i;
	for (i= 0; true ; i++)
	{

		getline(filein,customer[i].nama);
		if(filein.eof())
		{
		break;
		}





				filein>>customer[i].NIK;
				filein>>customer[i].kodePenerbangan;
				filein>>customer[i].hargaTiket;



		filein.ignore();
	}
	*pointer=i;

}


void aturfile (int pointer)
{
	for (int i = 0; i<pointer ; i++)
		{

			fileout<<customer[i].nama<<endl;
			fileout<<customer[i].kodePenerbangan<<endl;
			fileout<<customer[i].NIK<<endl;
			fileout<<customer[i].hargaTiket<<endl;




			cout<<endl;
		}
}
void seq()
{	int pilih;
    seq:
    cout<<"MENU : "<<endl;
    cout<<"1.Cari Berdasarkan Nama"<<endl;
    cout<<"2.Cari Berdasarkan Harga"<<endl;
    cout<<"3.Kembali ke menu utama"<<endl;
    cout<<"Pilih : ";cin>>pilih;
			switch(pilih)
			{
					case 1:
					seqNama();
					goto seq;
					break;

					case 2:
					seqHarga();
					goto seq;
					break;


					case 3:
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
    int pointer;
    bool found;
    string namaFile,penumpang;
    cout<<" Nama File yang ingin digunakan : ";cin>>namaFile;
    filein.open(namaFile.c_str());
    if(!filein.good())
    {   cout<<namaFile<<" tidak ada dalam disk ";
    }
    else
    {   ambilfile(&pointer);
        cout<<" Nama Penumpang yang ingin dicari : ";cin.ignore();getline(cin,penumpang);
        cout<<endl;
        found = false;
					for(int  i=0;i<pointer; i++)
					{
							if(penumpang==customer[i].nama)
							{
								found=true;
								cout<<" Nama Penumpang: "<<customer[i].nama<<endl;
                                cout<<"		NIK : "<<customer[i].NIK<<endl;
                                cout<<"		Kode Penerbangan : "<<customer[i].kodePenerbangan<<endl;
                                cout<<"		Harga tiket : "<<customer[i].hargaTiket<<endl;
                                cout<<"\n ===================================================================================="<<endl;
								}
                    }
    }


    if(!found)
    {  cout<<penumpang<<" tidak ada dalam data "<<namaFile<<endl;
    }
					filein.close();
}


void seqHarga()
{
    int pointer, harga;
    bool found;
    string namaFile,penumpang;
    cout<<" Nama File yang ingin digunakan : ";cin>>namaFile;
    filein.open(namaFile.c_str());
    if(!filein.good())
    {   cout<<namaFile<<" tidak ada dalam disk ";
    }
    else
    {   ambilfile(&pointer);
        cout<<" Masukkan harga tiket yang ingin dicari : ";cin>>harga;
        cout<<endl;
        found = false;
            for(int  i=0;i<pointer; i++)
            {
							if(harga==customer[i].hargaTiket)
							{
								found=true;
								cout<<" Nama Penumpang: "<<customer[i].nama<<endl;
                                cout<<"		NIK : "<<customer[i].NIK<<endl;
                                cout<<"		Kode Penerbangan : "<<customer[i].kodePenerbangan<<endl;
                                cout<<"		Harga tiket : "<<customer[i].hargaTiket<<endl;
                                cout<<"\n ===================================================================================="<<endl;
                            }
            }
    }


    if(!found)
    {  cout<<harga<<" tidak ada dalam data "<<namaFile<<endl;
    }
					filein.close();
}

void searching()
{	search:
	int pilih;
	cout<<" MENU :"<<endl;
	cout<<"1.Seq Search "<<endl;
	cout<<"2.Binary Search "<<endl;
	cout<<"3.Kembali Ke Menu Utama"<<endl;
	cout<<"Pilih: ";cin>>pilih;
	switch(pilih)
	{
		case 1:
		seq();

		break;

		case 2:
		binaryHarga();
		break;

		case 3:
		system("cls");
		main();

		default:
		cout<<" Salah Input"<<endl;
		goto search;
	}
}
void binaryHarga()
{
		string nfile, nfile1;
		int pilih1,i,j,k,pointer,hargaCari;
		int first;
		int last;
		bool found;
		found=false;
		awal:
		cout<<"Masukan Nama File yang digunakan (.txt): ";cin>>nfile;

			filein.open(nfile.c_str());
			if (!filein.good())
			{
				cout<< "\t" << nfile << " tidak ada di dalam direktori" << endl;
				filein.close();
				goto awal;
			}
			ambilfile(&pointer);
			filein.close();
			cout<< "\tTempat file dengan nama yang sudah urut : "; cin>> nfile1;
			fileout.open(nfile1.c_str());
			cout<<endl;
			for(int i = 0; i<pointer-1; i++) {
					for(int j = 0; j<pointer-1-i; j++) {
				    	if(customer[j].hargaTiket > customer[j+1].hargaTiket) {
					        temp = customer[j];
					        customer[j] = customer[j+1];
					        customer[j+1] = temp;
				        }
				    }
				}

			aturfile(pointer);
			fileout.close();
            for(i=0; i<pointer; i++)
            {
            cout<<" Nama Penumpang: "<<customer[i].nama<<endl;
                                cout<<"		NIK : "<<customer[i].NIK<<endl;
                                cout<<"		Kode Penerbangan : "<<customer[i].kodePenerbangan<<endl;
                                cout<<"		Harga tiket : "<<customer[i].hargaTiket<<endl;
                                cout<<"\n ===================================================================================="<<endl;
            }
			cout<< "\t\t Harga tiket yang ingin dicari : "; cin>>hargaCari;
			i = 0;
			j = pointer;
			while((!found) & (i <= j)){
				k = (i + j) / 2;
			    if(hargaCari == customer[k].hargaTiket)
			        found = true;
			    else
			    {
			        if(hargaCari < customer[k].hargaTiket)
			    	    j = k - 1;
			        else
			        	i = k + 1;
			    }

			cout<<endl;
			if(found)
			{		            cout<<" Nama Penumpang: "<<customer[k].nama<<endl;
                                cout<<"		NIK : "<<customer[k].NIK<<endl;
                                cout<<"		Kode Penerbangan : "<<customer[k].kodePenerbangan<<endl;
                                cout<<"		Harga tiket : "<<customer[k].hargaTiket<<endl;
                                cout<<"\n ===================================================================================="<<endl;
            }
            else
			{
			    cout << "\t\t tidak ada ";
                    system ("pause");
			    system("cls");
			}
			main();
			}
}



void sorting()
{
    string namaFile, namaFileUrut;
    int i,j,pointer;
    awal:
    cout<<"Masukan Nama File yang ingin diurutkan (.txt): ";cin>>namaFile;

			filein.open(namaFile.c_str());
			if (!filein.good())
			{
				cout<< "\t" << namaFile << " tidak ada di dalam direktori" << endl;
				filein.close();
				goto awal;
			}
			ambilfile(&pointer);
			filein.close();
			cout<< "\tBeri nama file dengan nama yang sudah urut : "; cin>> namaFileUrut;
			fileout.open(namaFileUrut.c_str());
			cout<<endl;
			for(int i = 0; i<pointer-1; i++) {
					for(int j = 0; j<pointer-1-i; j++) {
				    	if(customer[j].nama > customer[j+1].nama) {
					        temp = customer[j];
					        customer[j] = customer[j+1];
					        customer[j+1] = temp;
				        }
				    }
				}
            aturfile(pointer);
			fileout.close();
			main();


}

