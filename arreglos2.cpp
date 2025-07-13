#include<iostream>
using namespace std;
int main(){
    int numero[20],i,multi=1,num;

    cout<<"Ingrese un rango de numero: "; cin>>num;
    if(num<=0 && num>20){
        cout<<"debe ingresar numero entre el rago 1-20"<<endl;
        return 1;
    }

    for(i=0;i<num;i++){
        cout<<"ingrese el numero: "<<(i+1)<<": "; cin>>numero[i];
        
    }   
    for(i=0;i<num;i++){
        multi=multi*numero[i];
        } 
    cout<<"\nLa multiplicacion es: "<<multi;

    return 0;
}