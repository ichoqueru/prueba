#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char nombre[40];
    cout<<"Ingrese su nombre: "; 
    cin.getline(nombre,40);

    cout<<nombre<<endl;

    return 0;
}