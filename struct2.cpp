#include<iostream>
using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){
    for(int i=0;i<2;i++){
        cout<<"Ingrese nombre: ";
        cin.getline(empleados[i].nombre,20);
        cout<<"ingrese direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion,30);
        cout<<"Ingrese ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad,20);
        cout<<"Ingrese provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia,20);
        cout<<"Salario: "; cin>>empleados[i].salario;

    }

    //imprimiendo los datos

    for(int i=0;i<2;i++){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario;
        cout<<"\n";
    }

    return 0;
}