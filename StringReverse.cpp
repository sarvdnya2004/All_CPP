
#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cout<<"enter the name\n"; //Sarvadnya
    getline(cin, name);
    int size = name.length();
    for(int i = size; i >= 0; i-- ){
        cout<<name[i]; //ayndavras
    }
}
