//4) Fa�a um algoritmo que leia 30 dist�ncias em milhas, as converta para
// quil�metros e as exiba (1milha=1.6km).
#include <iostream>
using namespace std;
main()
{
 float milha, km;
 int cont=1;
 do
 { 
	milha=cont*1.6;
	cout<<"a convers�o foi: "<<milha<<endl;
	cont=cont+1;
 }
	while (cont <=30);
}
