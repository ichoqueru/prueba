#include<iostream>
using namespace std;
int main(){
    int numero[20],i,n;
    cout<<"Ingrese una cantidad: "; cin>>n;

    for(i=0;i<n;i++){
        cout<<numero[i]<<endl;
    }
    cout<<"\n---En orden inverso---"<<endl;

    for(i=0;i<n;i--){
        cout<<numero[i]<<endl;
    }
    

    return 0;
}