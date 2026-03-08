#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
   int total =20;
   cout<<"Loading.....\n\n";
    for(int i=0;i<=total;i++){
        cout<<"[";
        for(int j=0;j<i;j++){
            cout<<"=";
    }
    for(int j=0;j<total-i;j++){
        cout<<" ";
    }
    cout<<"]"<<(i*5)<<"%\r";
    cout.flush();
    Sleep(120);
}
    cout<<"\n\nLoading Complete!";
    return 0;
}