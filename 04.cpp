#include <iostream>
#include <string>
#include <vector>

using namespace std;


//Los * los utilizamos para apuntar al contenido de la direccion
void copiararray(int *numeros, int cantidad, int *numeros1){
    for(int i=0;i<cantidad; i++){   
        *(numeros1+i)=*(numeros+i);
    }   
}


int main(){
    int promedio=0, num=0, cantidad=0;
    bool flag=true;
    vector <int> numeros;

    while(true){
        cout<<"Ingrese numero(para salir del ingreso ingrese -1)"<<endl;
        cin>>num;
        if(num==-1){
            break;
        }else{
            numeros.push_back(num);
        }
    }

    
    cantidad=numeros.size();
    vector <int> numeros1(cantidad);
    int *ptr=&numeros[0];
    int *ptr2=&numeros1[0];

    copiararray(ptr, cantidad, ptr2);

    cout<<"El arreglo original:"<<endl;
    for(int i=0; i<numeros.size(); i++){
        cout<<numeros[i];
        cout<<", ";
    }
    cout<<endl;
    cout<<"El arreglo duplicado:"<<endl;
    for(int i=0; i<numeros.size(); i++){
        cout<<numeros1[i];
        cout<<", ";
    }
    cout<<endl;
    system("pause");
    return 0;
}