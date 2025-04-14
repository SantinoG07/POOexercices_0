#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <int> numeros;

//Los * los utilizamos para apuntar al contenido de la direccion
int menor(int *numeros, int cantidad){
    int menor=*numeros;
    for(int i=0; i<cantidad; i++){
        if(menor>*(numeros+i)){
            menor=*(numeros+i);
        };
    }
    return menor;
}

int mayor(int *numeros, int cantidad){
    int mayor;
    for(int i=0; i<cantidad; i++){
        if(mayor<*(numeros+i)){
        mayor=*(numeros+i);
        }
    }
    return mayor;
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
    cout<<"El numero menor es: "<<menor(ptr, cantidad)<<endl;
    cout<<"El numero mayor es: "<<mayor(ptr, cantidad)<<endl;

    system("pause");
    return 0;
}