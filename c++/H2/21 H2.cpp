
#include<iostream>
using namespace std;


int main() {
	float num;
	cout << "Los numeros pares entre 1 y 100: " << endl;
	num = 1;
	while (num<=100) {
		if (num%2==0) {
			cout << num << endl;
		}
		num = num+1;
	}
	return 0;
}

