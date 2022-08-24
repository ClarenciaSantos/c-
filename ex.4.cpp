//4) Faça um algoritmo que leia 30 distâncias em milhas, as converta para
// quilômetros e as exiba (1milha=1.6km).
#include <iostream>
using namespace std;
main()
{
 float milha, km;
 int cont=1;
 do
 { 
	milha=cont*1.6;
	cout<<"a conversâo foi: "<<milha<<endl;
	cont=cont+1;
 }
	while (cont <=30);
}
