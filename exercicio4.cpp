//4) Leia 20 idades e calcule a média entre as idades. 
#include <iostream>
using namespace std;
main ()
{
	int idade,cont,soma=0;
	float media;
	for (cont=1;cont<=3;cont=cont+1)
	{
		cout<<"\nDigite uma idade:";
		cin>>idade;
		soma=soma+idade;
	}
	media=soma/3;
	cout<<"\na media foi:"<<media;
}
