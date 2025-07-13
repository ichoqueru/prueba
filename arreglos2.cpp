#include<iostream>
using namespace std;
int main(){
    int numero[20],i,multi=0;

    cout<<"Ingrese un numero: "; cin>>numero[20];

    for(i=0;i<numero[20];i++){
        multi=multi*numero[20];
    }
    cout<<"La multiplicacion es: "<<multi<<endl;

    return 0;
}