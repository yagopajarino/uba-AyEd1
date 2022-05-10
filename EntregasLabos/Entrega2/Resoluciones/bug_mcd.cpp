#include <iostream>

using namespace std;

int maximo(int x, int y){
  if(x<0)
    x=-x;
  if(y<0)
    y=-y;
  if(x>y)
    return x;
  else
    return y;
}

int minimo(int x, int y){
  if(x<0)
    x=-x;
  if(y<0)
    y=-y;
  if(x<y)
    return x;
  else
    return y;
}

int maximoComunDivisor(int x, int y){
  int a = maximo(x,y);
  int b = minimo(x,y);
  int resto;
  while(b!=0){
    resto = a%b;
    a = b;
    b = resto;
  }
  return a;
 }

int main() {
    /* No hace falta modificar el main */
    int a,b;
    //Leo a
    cin >> a >> b;
    
    int res = maximoComunDivisor(a,b);
    
    //Devuelvo el maximo comun divisor
    cout << res;
    return 0;
}
