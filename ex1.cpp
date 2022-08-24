//1) faça um algoritmo que leia 3 notas de um aluno, calcule a média e exiba 
//foi aprovado (media maior que 7) ou reprovado.
#include <iostream>
using namespace std;
main()
{
 int nota, media,cont=1, soma=0;
 do
 {
 	cout<<"digite a nota: ";
    cin>>nota;
	soma=soma+nota;
 	cont=cont+1;
 }
	while (cont <=3);
	media=soma/3;
	 
	if(media > 7)
	cout<<"aprovado: " <<media;
	else
	cout<<"reprovado: "<<media;
}
