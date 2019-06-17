#include <iostream>
using namespace std;

int main () {
int jumlah = 0;
int elemen[100];
int sum = 0, max = 0, min = 0;


cout << "Banyaknya element yang akan diinput :";
cin >> jumlah;




for(int i=0; i<jumlah; i++) {
cout << "Input element ke " <<i+1;

cin >> elemen[i];
}


sum = 0;
int *x;
x = elemen;

cout << "\n data yang anda masukan adalah ";
max = min = *x;
for(int i=0; i<jumlah; i++) {
cout << *(x + i) << ",";

sum = sum + *(x + i);
    if (max < *(x + i)) {
        max = *(x + i);
    }
    if (min > *(x + i)) {
min = *(x + i);
    }
}

cout << "\n terbesar : " << max;
return 0;
}
