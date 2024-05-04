#include <iostream>
#include <math.h>

using namespace std;

int main() {
    system("CLS");

    int n,i;
    cout << "Insert a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " bukanlah bilangan prima.";
    } else {
        
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                cout << n << " bukanlah bilangan prima.";
                break;
            }
    
        }
        if (i > sqrt(n)){
            cout << n << " merupakan bilangan prima.";
        }
    }

    return 0;
}