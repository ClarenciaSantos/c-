//3) Desenvolva um algoritmo que calcule e exiba a soma dos mil primeiros números inteiros.
#include <iostream>
using namespace std;
main()
{
 int num, soma=0,cont=1;
 do
 {
    cout<<"a somatoria foi: "<<soma<<endl;
	soma=soma+cont;
	cont=cont+1;
 }
	while (cont <=1000);
	cout<<"a soma foi: "<<soma;
}
