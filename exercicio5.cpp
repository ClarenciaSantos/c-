//5) Ler 10 n�meros e imprimir quantos s�o pares e quantos s�o �mpares.
#include <iostream>
using namespace std;
main()
{
    int num, cont, par=0, impar=0;
    for(cont=1;cont<=10;cont=cont+1)
    {
        cout<<"digite um numero:";
        cin>>num;
        if(num % 2 == 0)
            par=par+1;
        if(num % 2 == 1)
            impar=impar+1;
    }
        cout<<"a quantidade de impares foi:"<<impar<<endl;
        cout<<"a quantidade de pares foi:"<<par<<endl;
    
    
    
}
