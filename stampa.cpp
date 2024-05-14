/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

Davide Susini 14/05/24
*/

# include <iostream>
using namespace std;
int main()
{
  int i=0 ,n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while (i<n)
  {
   cout<<"Bada come la fuma"<<endl; 
   i++;
  }
  system("pause");
}
