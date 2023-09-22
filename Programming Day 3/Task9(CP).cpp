#include <iostream>
using namespace std;
main (){ 
	int number;
	cout << "Enter a 4-digit number: ";
	cin >> number;
	int n_o;
	n_o = number % 10;
	int n_t;
	n_t = number / 10 ;
	int n_th;
	n_th = n_t % 10;
	int n_f;
	n_f = n_t / 10;
	int n_fv;
	n_fv = n_f % 10;
	int n_s;
	n_s = n_f / 10;
	int n_sv;
	n_sv = n_o + n_th + n_fv + n_s;
	cout << "Sum of the individual digits: " << n_sv;
	}
