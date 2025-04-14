#include <iostream>
#include <string>
#include <vector>

using namespace std;


//Los * los utilizamos para apuntar al contenido de la direccion
string concatenararray(char *numeros, int cantidad, char *numeros1, int cantidad1){
    string cadena="";
    for(int i=0;i<cantidad; i++){   
       cadena+=*(numeros+i);
    }
    for(int j=0;j<cantidad1; j++){   
        cadena+=*(numeros1+j);
    }      
    return cadena;
}


int main(){
    bool flag=true;
    string palabras;
    string palabras1;


    cout<<"Ingrese la primer oracion o palabra"<<endl;
    getline(cin,palabras);
    cout<<"Ingrese la segunda oracion o palabra"<<endl;
    getline(cin,palabras1);


    
    int cantidad=palabras.size();
    int cantidad1=palabras1.size();
    char *ptr=&palabras[0];
    char *ptr2=&palabras1[0];

    cout<<"La concatenacion de array nos da:"<<endl;
    cout<<concatenararray(ptr, cantidad, ptr2, cantidad1)<<endl;

    

    system("pause");
    return 0;
}