#include <iostream>
#include <string>
#include <vector>

using namespace std;


//Los * los utilizamos para apuntar al contenido de la direccion
int numeroocurrencias(int cantidad, int *ptr, int numabuscar){
    int numdeocurrencias=0;
    for(int i=0; i<cantidad; i++){
        if(*(ptr+i)==numabuscar){
            numdeocurrencias++;
        }
    }

    return numdeocurrencias;
}


int main(){
    vector <int> numeros;
    int num, numero=0;

    while(true){
        cout<<"Ingrese numero(para salir del ingreso ingrese -1)"<<endl;
        cin>>num;
        if(num==-1){
            break;
        }else{
            numeros.push_back(num);
        }
    }
    cout<<"Ingrese el numero a buscar"<<endl;
    cin>>numero;

    int *ptr= &numeros[0];
    int cantidad=numeros.size();

    cout<<"Aparece "<<numeroocurrencias(cantidad, ptr, numero)<<" veces"<<endl;



    system("pause");
    return 0;
}