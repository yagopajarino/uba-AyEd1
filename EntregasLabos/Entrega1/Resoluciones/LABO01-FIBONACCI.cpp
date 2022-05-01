#include <iostream>

using namespace std;

// Funcion de fibonacci que calcula n-esimo termino
int fibonacci(int n){
    int a = 0;
    int b = 1;
    for (int i = 1; i < n; ++i) {
       int temp = a;
       a = a + b;
       b = temp;
    }
    return a+b;
}
int main() 
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;    
    return 0;
}