#include <iostream>
using namespace std;

int main() {
    int arr[]= {12,23,34,54,56};
    int num = 54;
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size;i++){
        if (arr[i] == num){
            cout<<"element found at"<<i+1;
        }
    }
}