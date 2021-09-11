//suma, producto vec, x esc x vector
/*librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <cmath>

using namespace std;  //este renglon nos permite poder usar el cout y el cin para entrada y salida por pantalla

int main()
{
    int n,opcion;
    char salir;
    float a[100], b[100];
    float x,y,prod,nor,nora,norb;
	double cos,angulo;
 
 	do 
	{
		//system("cls");  
		cout<<"Ingrese 1 si desea calcular el producto escalar de dos vectores\n";
		cout<<"Ingrese 2 si desea calcular la norma de un vector\n";
		cout<<"Ingrese 3 si desea calcular el coseno del angulo entre dos vectores\n";
		cout<<"ingrese 4 si desea calcular la suma de dos vectores\n";
		
		cin>>opcion;
		
		
		switch(opcion)
		{
			case 1:
				{
					cout<<"Ingrese el tamaño de los vectores\n";
					cin>>n;
					
					for(int i=0;i<n;i++)
					{
						cout<<"a["<<i+1<<"]=";
						cin>>x;
						a[i]=x;
					}
					
					for(int i=0;i<n;i++)
					{
						cout<<"b["<<i+1<<"]=";
						cin>>y;
						b[i]=y;
					}
					
					for(int i=0;i<n;i++)
					{
						prod+=a[i]*b[i];
					}
					
					cout<<"El producto escalar es: "<<prod;
					break;
				}
				
			case 2:
				{
					 cout<<"Ingrese el tamaño de los vectores\n";
					 cin>>n;
					 
					 for(int i=0;i<n;i++)
					 {
					 	cout<<"a["<<i+1<<"]=";
						cin>>x;
						a[i]=x;
						nor+=a[i]*a[i];
					}
					nor= (sqrt(nor));
					cout<<"La norma es: "<<nor;
					break;
				}
				
			case 3:
				{
					cout<<"Ingrese el tamaño de los vectores\n";
					cin>>n;
					
					for(int i=0;i<n;i++)
					{
						cout<<"a["<<i+1<<"]=";
						cin>>x;
						a[i]=x;
					}
					
					for(int i=0;i<n;i++)
					{
						cout<<"b["<<i+1<<"]=";
						cin>>y;
						b[i]=y;
					}
					
					for(int i=0;i<n;i++)
					{
						prod+=a[i]*b[i];
                    }
					
					for(int i=0;i<n;i++)
					{
						nora+=a[i]*a[i];
						norb+=b[i]*b[i];
					}
					nora= (sqrt(nora));
					norb= (sqrt(norb));
					cos+=prod/(nora*norb);
					cout<<"El coseno es: "<<cos<<"\n\n";
					angulo = acos(cos);
					cout << "acos(x) = " << angulo << " radianes" <<"\n\n"<< endl;     // result in degrees
					cout << "acos(x) = " << angulo*180/3.1416 << " grados" <<"\n\n"<< endl;
					break;
				}  
		}
		cout<<"\n Desea salir del programa (s/n)?: ";
		cin>>salir;
		
	}while((salir != 's') && (salir != 'S'));
	
             
    system ("pause");
    return 0;
}

//vector de prueba (2,4) y (-2,3)  theta 1.18 rad  67.6 grados
// vetor de prueba (-1,3,4) y (5,-2,7)   theta 1.56 rad   89.5 grados
