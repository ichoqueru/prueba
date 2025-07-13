#include<iostream>
using namespace std;
int main(){
    int num,i,multi;
    cout<<"Ingrese un numero: "; cin>>num;
if(num>=1 && num<=10){
    for(i=1;i<=20;i++){
        multi=i*num;
        cout<<i<<"x"<<num<<"="<<multi<<endl;
    }
}
else{
    cout<<"El numero no esta dentro del rango de 1-10"<<endl;
}
    return 0;
}