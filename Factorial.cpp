#include <iostream>
using namespace std;
int Factorial(int x){
    if(x < 0){
        return 1;
    } else {
        int fact = 1;
        for(int i = 1; i <= x; ++i){
            fact *= i;
        } return fact;
    }
}

int Factorial2(int x){
    int res = 1;
    for(int i = 2; i<=x; ++i){
        res *= i;
    } return res;
}

int Factorial3(int x){
    if(x <= 1){
        return 1;
    } else {
        return x * Factorial3(x-1); 
    }
}
int main() {
   cout << Factorial(5);

}
