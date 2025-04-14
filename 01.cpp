#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Los * los utilizamos para apuntar al contenido de la direccion
void cambiodevariables(string* palabra1, string* palabra2){
    string temporal= *palabra1;
    *palabra1=*palabra2;
    *palabra2= temporal;
}

int main(){
    string palabra1, palabra2;

    cout<<"Ingrese palabra 1"<<endl;
    cin>>palabra1;
    cout<<"Ingrese palabra 2"<<endl;
    cin>>palabra2;

    cout<<"Antes del cambio:"<<endl<<"Palabra 1:"<<palabra1<<endl<<"Palabra 2:"<<palabra2<<endl;

    //Los & los utilizamos para apuntar al direccion de variable
    cambiodevariables(&palabra1, &palabra2);

    cout<<"Despues del cambio:"<<endl<<"Palabra 1:"<<palabra1<<endl<<"Palabra 2:"<<palabra2<<endl;
    
    system("pause");
    return 0;
}