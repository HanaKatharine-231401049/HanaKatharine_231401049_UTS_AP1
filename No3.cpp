#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int primer(int n){
    int i;
    if (n <= 1) {
        return 0;
    } else {
        
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
                break;
            }
    
        }
        if (i > sqrt(n)){
            return 1;
        }
    }

}

int main(){
    system("CLS");
    string inputan;
    int i,angka,total=0; 

    cout<<"masukkan baris angka :";
    cin>>inputan; 

    for (i=1; i < inputan.length();i++){
        int angka = inputan[i] - '0';
        if (primer(angka)){
            total += angka;
        }
    }
    cout<<"total :"<<total;


    

    
}