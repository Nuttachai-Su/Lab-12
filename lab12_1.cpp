#include<iostream>
using namespace std;


int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int i){
    int sum = 0;
    if(i == 0) sum = 0;
    else if (i == 1) sum = 1;
    else if (i > 1) {
        sum += fibonacci(i-1) + fibonacci(i-2);
    }

    return sum;
}