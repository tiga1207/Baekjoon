#include <iostream>
using namespace std;

int main() {
    int n[11];
    int a;
    int m[11];
    for(int i=0; i<10;++i){
        cin>>a;
        n[i]=a;
        m[i]= n[i]%a;
    }

    return 0;
}