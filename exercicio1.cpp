//1) Escrever um programa para exibir os n�meros de 1 at� 50 na tela 
#include <iostream>
using namespace std;
main ()
{
	int cont,num=0;
	cout<<"\nDigite um numero: ";
		cin>>num;
	for (cont=1;cont<=50;cont=cont+1)
	{
		cout<<"\no numero digitado:"<<num;
		num=num+1;
	}
}
