//10871
#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;

    int k;
    
    int a[n];
    int b[n];



    for(int i =0 ; i< n ; ++i){
        cin>>k;
        a[i] = k;
    }
    for(int j=0 ; j < n ; ++j){
        if(a[j]<x){
            b[j]=a[j];
            cout<<b[j]<<" ";
        }

    }


    return 0;
}