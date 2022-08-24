//5) Faça um algoritmo que leia 15 valores e os converta de 
//comprimentos em polegadas para centímetros e exiba os resultados. (1pol=2.5cm)
#include <iostream>
using namespace std;
main()
{
 float pol , cm;
 int cont=1;
 do
 { 
 	cout<<"digite um valor em polegadas:";
 	cin>>pol;
	cm = pol *2.5;
	cout<<"a conversâo foi: "<<cm<<endl;
	cont=cont+1;
 }
	while (cont <=15);
}
