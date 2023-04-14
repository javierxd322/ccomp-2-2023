#include<iostream>
using namespace std;

void intercambio(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){

    int q=3;
    int r=5;
    intercambio(q,r);
    cout<<"valor de q en main es: "<<q<<endl ;
    cout<<"valor de r en main es: "<<r<<endl;
}