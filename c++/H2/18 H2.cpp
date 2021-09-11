#include <iostream> 
#include <stdlib.h> 
using namespace std; 
int votos[8][4], ganador = 0; 
int mayorVotos; bool empate = false; 
int main() 
{ 
	for(int j = 0; j < 4; j++) 
		{	 
			votos[7][j] = 0;	
		} 
	for(int i = 0; i < 7; i++) 
		{ 
			cout<<i+1<<" PROVINCIA\n"; 
			for(int j = 0; j < 4; j++) 
				{	
					do 
						{ 
							cout<<"Votos del "<<j+1<<" partido: "; 
							cin>>votos[i][j]; 
							if(votos[i][j] < 0) 
								{ 
									cout<<"No puedes ingresar votos negativos\n"; 
								} 
						}while(votos[i][j] < 0); 
						votos[7][j] += votos[i][j]; 
				}				 
				cout<<endl; 
		} 
	mayorVotos = votos[7][0]; 
	for(int j = 1; j < 4; j++) 
		{ 
			if(votos[7][j] > mayorVotos) 
				{ 
					mayorVotos = votos[7][j]; 
					ganador = j; 
				}	
		} 
	for(int j = 0; j < 4 && empate == false ; j++) 
		{ 
			if(votos[7][j] == mayorVotos && ganador != j) 
				{ 
					empate = true; 
				}	
		} 
	if(empate) 
		{ 
			cout<<"Empataron con mayores votos:\n"; 
			for(int j = 0; j < 4 ; j++) 
				{ 
					if(votos[7][j] == mayorVotos) 
						{ 
							cout<<"Partido "<<j+1<<endl; 
						}	
				} 
		} 
	else 
		{ 
			cout<<"Ganador: Partido "<<ganador+1<<endl; 
		} 
//system("pause"); 
return 0; 
}
