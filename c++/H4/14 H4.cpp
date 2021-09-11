#include<iostream>
using namespace std;

float cm(float x);

int main() {
	float x;
	cout << "Escribe la medida en cm" << endl;
	cin >> x;
	cout <<x<<" cm son: "<<cm(x)<<" in"<<endl;
	return 0;
}

float cm(float x) {
	float in;
	in=(x/2.54);
	return in;
}

