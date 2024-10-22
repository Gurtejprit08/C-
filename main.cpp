#include <iostream>
using namespace std;

int main() 
{ int positivi=0, negativi=0, nulli=0, n;
 for (int i=1;i<=10; i++)
   {
     cout<<"inserisci un numero:";
     cin>>n;
     if (n>0)
       positivi= positivi +1;
     if (n<0)
       negativi= negativi +1;
     if (n==0)
       nulli= nulli +1;
     
   }
   cout<<"i numeri positivi sono:"<<positivi;
   cout<<"i numeri negativi sono:"<<negativi;
   cout<<"i numeri nulli sono:"<<nulli;
  return 0;
 
}

