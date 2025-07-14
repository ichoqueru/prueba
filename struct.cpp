#include<iostream>
using namespace std;

struct persona{
    char nombre[20];
    int edad;
}persona1,persona2;

int main(){
    cout<<"Ingrese el nombre: "; 
    cin.getline(persona1.nombre,20);

    cout<<"Ingrese la edad: ";
    cin>>persona1.edad;

    cout<<"\nImprimendo datos\n";
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;


    return 0;
}