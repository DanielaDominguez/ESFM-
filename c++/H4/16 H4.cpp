#include <iostream>
using namespace std;
int prim(int n);
int main(){
   int n;
    cout<<"Ingrese numero"<<endl;
    cin>>n;
    cout<<prim(n)<<endl;
    return 0;
}
int prim(int n){
	int i;
	int a=0;
	   for(i=1;i<(n+1);i++){
         if(n%i==0){
             a++;
            }
         }
         if(a!=2){
              cout<<"No es Primo";
            }else{
                cout<<"Si es Primo";
         }
}

