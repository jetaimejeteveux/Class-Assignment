#include <iostream>
#include <math.h>
using namespace std;

int bilDeret(int n){
	if (n == 0){
		return 0;
	}
	else{
		return pow(n,n)+bilDeret(n-1);
	}
}

int main(){
	int n;
	cout << "banyak deret : ";
	cin >> n;
	cout << "Hasil = " << bilDeret(n);
}
