#include<bits/stdc++.h>
using namespace std;

int is_prime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 1; // Not prime, return immediately when a divisor is found.
        }
    }
    return 0; // Prime, no divisors found.
}

int main()
{
    int n; 
    cout << "enter the limit of prime no.";
    cin >> n;
    for(int i = 2; i < n; i++){
        if(is_prime(i) == 0){
            cout << i << " "; // Print prime numbers.
        }
    }
    return 0;
}
