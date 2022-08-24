#include <iostream>
using namespace std;
main()
{
	int cont,idade,sexo,masc=0,fem=0,maior=0,menor=0;
	float peso,altura,imc,abaixo=0,acima=0,ideal=0,obeso=0;
	for(cont=1;cont<=30;cont=cont+1)
	{
		cout<<"digite sua idade: ";
		cin>>idade;
		cout<<"digite seu sexo 1-masculino 2-feminino: ";
		cin>>sexo;
		cout<<"digite seu peso: ";
		cin>>peso;
		cout<<"digite sua altura: ";
		cin>>altura;
		imc=peso/(altura*altura);
	if(imc<=18.5)
		{
		cout<<"voce esta abaixo do peso "<<endl;
			cout<<"seu imc e:"<<imc<<endl;
			abaixo=abaixo+1;
		}
	else
		if(imc>=18.6 && imc<=24.9)
		{
			cout<<"peso ideal PARABENS "<<endl;
			cout<<"seu imc e:"<<imc<<endl;
			ideal=ideal+1;
		}
	else
		if(imc>=25 && imc<=29.9)
		{
			cout<<"voce esta acima do peso "<<endl;
			cout<<"seu imc e:"<<imc<<endl;
			acima=acima+1;
		}
	else
		if(imc>=30)
		{
			cout<<"voce esta obeso cuidado com sua saúde "<<endl;
			cout<<"seu imc e:"<<imc<<endl;
			obeso=obeso+1;
		}
	if(sexo==1)
		masc=masc+1;
	else
		fem=fem+1;
	if(idade<=18)
		menor=menor+1;
	else
		maior=maior+1;
	
		
	
	}
	cout<<"\na quantidade de homens e:"<<masc;
	cout<<"\na quantidade de mulheres e:"<<fem;
	cout<<"\na quantidade de menores de idade e:"<<menor;
	cout<<"\na quantidade de maiores de idade e:"<<maior;
	cout<<"\na abaixo do peso:"<<abaixo;
	cout<<"\na peso ideal:"<<ideal;
	cout<<"\na acima do peso:"<<acima;
	cout<<"\na obeso:"<<obeso;
	
}
