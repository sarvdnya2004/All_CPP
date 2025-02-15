#include <bits/stdc++.h>  
using namespace std;  

int main() {  
    int mo = 3300;  
    int choice;  
    int count_thou = 0;  
    int count_hun = 0;  

    while (mo > 0) {  
        cout << "Enter choice:\n1. 1000 rs\n2. 100 rs\n";  
        cin >> choice;  

        switch (choice) {  
            case 1:  
                if (mo >= 1000) {  
                    count_thou = mo / 1000; 
                    mo %= 1000; 
                } else {  
                    cout << "No more 1000 notes\n";  
                }  
                break;  
            case 2:  
                if (mo >= 100) {  
                    count_hun = mo / 100;  
                    mo %= 100; 
                } else {  
                    cout << "No more 100 notes\n";  
                }  
                break;  
            default:  
                cout << "Invalid choice\n";  
                break;  
        }  
    }  

    cout << "1000 notes: " << count_thou << endl;  
    cout << "100 notes: " << count_hun << endl;  

    return 0;  
}

// 1000 notes: 3
// 100 notes: 3