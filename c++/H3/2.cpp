#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num,result;
	cout<<"Ingrese el numero"<<endl;
	cin>>num;
	if(num>0){
		result=pow(num,2);
		cout<<"El resultado es "<<result<<endl;
		
	}
	else {
		cout<<"Error el numero debe ser mayor a cero"<<endl;
	}
	return 0;
}
