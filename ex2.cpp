//2) Elabore um algoritmo que converta valores
//de graus Celsius para Fahrenheit de 1 a 100. (F = C × 1,8 + 32).
 #include <iostream>
using namespace std;
main()
{
 float cels, fah, soma;
 int cont=1;

 do
 {
    cout<<"digite um grau celsius: ";
    cin>>cels;
	fah=cels*1.8+32;
	cout<<"a conversâo foi: "<<fah<<endl;
	cont=cont+1;
 }
	while (cont <=100);
}
	 
