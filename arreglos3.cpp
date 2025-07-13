#include<iostream>
using namespace std;
int main(){
    int numero[20],i,n;
    cout<<"Ingrese una cantidad: "; cin>>n;

    for(i=0;i<n;i++){
        cin>>numero[i];
    }
    cout<<"\n---En orden inverso---"<<endl;

    for(i=n-1;i>=0;i--){
        cout<<numero[i]<<endl;
    }    

    return 0;
}