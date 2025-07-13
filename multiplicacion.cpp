#include<iostream>
using namespace std;
int main(){
    int num,i,multi;
    cout<<"Ingrese un numero: "; cin>>num;
if(num>=1 && num<=10){
    for(i=1;i<=10;i++){
        multi=i*num;
        cout<<multi<<endl;
    }
}
    return 0;
}