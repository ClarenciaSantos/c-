//5) Ler 10 números e imprimir quantos são pares e quantos são ímpares.
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
