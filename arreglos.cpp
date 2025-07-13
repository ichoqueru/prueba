#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numero[]={1,2,3,4,5};
    int suma=0,i;
    for(i=0;i<5;i++){
        suma=suma+numero[i];
        
    }

    cout<<"La suma de los elementos del vector es: "<<endl;


    getch();
    return 0;
}