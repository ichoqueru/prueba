#include<iostream>
using namespace std;
int main(){
    int num1,num2,suma,resta,multiplicacion,division;
    suma=0;
    resta=0;
    multiplicacion=0;
    division=0;
    
    cout<<"Ingrese un número: "; cin>>num1;
    cout<<"Ingrese otro número: "; cin>>num2;

    suma=num1+num2;
    resta=num1-num2;
    multiplicacion=num1*num2;
    division=num1/num2;

    cout<<"\nLa suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"Lamultiplucacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;

    return 0;
}