//25314
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==0){
        cout<<"int";
    }
    else{
    for(int i=0;i<n/4;++i){
        cout<<"long ";

    }
    cout<<"int";
    }

    return 0;
}