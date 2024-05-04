#include <iostream>
#include <iomanip>
using namespace std;

main (){
    system("CLS");
    int jam, menit, detik1, detik2;

    cout<<"masukan detik :";
    cin>>detik1;

    jam=detik1/3600;
    menit=(detik1 % 3600)/60;
    detik2= (detik1 % 3600)%60;

    stringstream ss;
    cout<<setfill('0')<<setw(2)<<jam<<":"<<setw(2)<<menit<<":"<<setw(2)<<detik2;

    

}