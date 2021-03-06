
#include "smath.h"
int factorial(int n){
  int ans=1;
  while(n){
    ans*=n--;
  }
  return ans;
}