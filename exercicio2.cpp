//2) Fazer um programa para encontrar todos os números pares entre 1 e 100. (num % 2 == 0)
#include <iostream>
using namespace std;
main()
{
    int num, cont, par=0;
    for(cont=1;cont<=100;cont=cont+1)
    {
        cout<<"digite um numero:";
        cin>>num;
        if (num % 2 == 0)
        par=par+1;
    }
        cout<<"a quantidade de pares foi:"<<par;    
}
