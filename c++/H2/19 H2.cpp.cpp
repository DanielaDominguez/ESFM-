#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	float r,c,p,t,nr,nc,np,nt;
	float dr,dc,dp;
	cout<<"Ingrese lo gastado en el departamento de ropa"<<endl;
	cin>>r;
	cout<<"Ingrese lo gastado en el departamento de comestibles"<<endl;
	cin>>c;
	cout<<"Ingrese lo gastado en el departamento de perfumeria"<<endl;
	cin>>p;
	t=r+c+p;
	if(t>100){
		cout<<"Su total es de: "<<t<<endl;
		dr=r*(double)0.05;
		dc=c*(double)0.035;
		dp=p*(double)0.08;
		nr=r-dr;
		nc=c-dc;
		np=p-dp;
		nt=nr+nc+np;
		cout<<"Su descuento en ropa es de: "<<dr<<endl;
		cout<<"Su descuento en comestibles es de: "<<dc<<endl;
		cout<<"Su descuento en perfumeria es de: "<<dp<<endl;
		cout<<"Su nuevo monto total es de: "<<nt<<endl;
		cout<<"Usted ahorro: "<<t-nt;
	}else{
		cout<<"Su total es de: "<<t;
		cout<<"GRACIAS POR SU COMPRA"<<endl;
	}
}
