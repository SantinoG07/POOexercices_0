#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <int> numeros;

//Los * los utilizamos para apuntar al contenido de la direccion
int sumarnums(int *numeros, int cantidad){
    int suma=0;
    for(int i=0; i<cantidad; i++){
        suma+=*(numeros+i);
    }
    return suma;
}

float sacarpromedio(int *numeros, int cantidad){
    float suma=sumarnums(numeros, cantidad);
    return suma/cantidad;
}


int main(){
    int promedio=0, num=0, cantidad=0;
    bool flag=true;

    while(true){
        cout<<"Ingrese numero(para salir del ingreso ingrese -1)"<<endl;
        cin>>num;
        if(num==-1){
            break;
        }else{
            numeros.push_back(num);
        }
    }

    int *ptr=&numeros[0];
    
    cantidad=numeros.size();
    cout<<"La suma es: "<<sumarnums(ptr, cantidad)<<endl;
    cout<<"El promedio es: "<<sacarpromedio(ptr, cantidad)<<endl;

    system("pause");
    return 0;
}