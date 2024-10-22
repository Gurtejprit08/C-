#include <iostream>

using namespace std;
int main() 
{ 
  int somma=0,a,n;
  cout<<"quanti numeri vuoi inserire?";
  cin>>n;

    for(int i=1;i<=n;i++)
    {
      cout<<"inserisci un numero; ";
      cin>>a;
      somma= somma+a;
    }
    cout<<somma;
  return 0;

}