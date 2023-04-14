#include<iostream>
using namespace std;

long long fib(int n){
    if (n==0 || n == 1)
        return 1;
    else 
        return fib(n-2) + fib(n-1);
}

int main(){
    int n;
    cout<<"ingrese el numero: ";cin>>n;

    cout<<"el fibo de "<<n<<"es"<<fib(n);








    return 0;

}