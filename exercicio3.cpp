//3) Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido. 
#include <iostream>
using namespace std;
main ()
{
	int num=0, cont, tab;
	cout<<"Digite um numero: ";
		cin>>num;
		if (num<=10)
	for (cont=1;cont<=10;cont=cont+1)
	{ 
		tab=num*cont;
		cout<<"\ntabuada do numero: "<<tab;
	}
}
