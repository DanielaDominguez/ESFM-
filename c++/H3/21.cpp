#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int n=0,c=0,c2=0,res=0,nc=0;
  cout<<"\nLos numeros primos del 1 al 100 son: "<<endl;
  for(c=1;c<=100;c++)
  {
    for(c2=1;c2<=c;c2++)
    {
      res=c%c2;
      if(res==0)
      {
        nc=nc+1;
      }
    }
    if(nc==2)
    {
      cout<<" "<<c;
    }
    nc=0;
  }
  
  getch();
  return 0;
}
