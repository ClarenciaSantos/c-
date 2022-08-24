//6) Faça um programa em C que receba 10 números
// e conte quantos deles estão no intervalo entre 10 e 20
//e quantos deles estão fora do intervalo, escrevendo estas informações.
#include <iostream>
using namespace std;
main()
{
    int num, cont, fr=0, dt=0;
    for(cont=1;cont<=10;cont=cont+1)
    {
        cout<<"digite um numero: ";
        cin>>num;
        if (num>=10 && num<=20)
            dt=dt+1;
        if (num<=9 || num>=21)
            fr=fr+1;
    }
        cout<<"\na quantidade de numeros dentro do intervalo sao:"<<dt;
        cout<<"\na quantidade de numeros fora do intervalo sao:"<<fr;
}
