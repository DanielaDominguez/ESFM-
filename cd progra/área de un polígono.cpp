//�rea de un pol�gono
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin

int main ()
{
	setlocale(LC_CTYPE,"Spanish");
    ofstream archivo;
 
    remove("DonEst.txt");
    archivo.open("DonEst.txt",std::ios::app);
    int a;
    cout<<"�Quieres conocer la informaci�n del archivo?"<<endl;
	cout<<"1.-SI"<<endl;
	cout<<"2.-NO"<<endl;
    cin>>a;
    switch (a){
    	case 1:
		 archivo<<"Estudio Ingenier�a Matem�tica en la Escuela Superior de F�sica y Matem�tica del Instituto Polit�cnico Nacional"<<endl;
		 break;
		 
		case 2: 
		break;
		 
    }
    archivo.close();
    std::cin.get();
    system("start DonEst.txt");
    return 0;
}

	system("pause");
	return 0;
}
