#include<iostream>
using namespace std;

int gcd(int, int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int A , int B){
    int GCD;
    int M, N;
    if (A >= B) M = A, N = B;
    else if (A < B) M = B, N = A;

    if (M % N == 0) GCD = N;
    else if (M % N != 0){
        M = B;
        N = A%B;
        GCD = gcd(M,N);
    }
    return GCD;
}