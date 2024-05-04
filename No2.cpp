#include <iostream>
#include <string.h>
using namespace std;

int main (){
    char kata1[100];
    char kata2;
    system("CLS");

    cout<<"masukan kalimat : ";
    gets(kata1);
    

    for (int i=0; i < strlen(kata1); i++){
        kata2 = toupper(kata1[i]);
        cout<<kata2;
    }
return 0;
    
}
