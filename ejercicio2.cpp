#include <iostream>
using namespace std;

int main(){
    int numero;

    cout<<"Ingresa un numero positivo y par: ";
    cin>>numero;

    while (numero <= 0 || numero%2 != 0)
    {
        //en caso de que el numero ingresado no seea valida
        cout<<"El numero ingresado no es valido, ingresa uno positivo y par: ";
        cin>>numero;
    }

    cout<<"Gracias por utilizar el programa!";
    
    
}