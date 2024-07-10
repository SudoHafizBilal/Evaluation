#include <stdio.h>
int main(){
    int divisor = 5;
    int dividend = 25;
    int n = 5;
    int M = divisor;
    int Q[5] = dividend;
    int A[5] = 0;
    while(n > 0){
        A = A << 1;
        Q = Q << 1;
        A = M - A;
    if(A[5] == 0){
        Q[0] = 1;
    }
    else{
        Q[0] = 0;
    }
    n = n-1;
    }
      
}