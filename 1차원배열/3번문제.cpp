#include <iostream>
using namespace std;

int main() {
    int n,x;
    
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>x;
        a[i]=x;
    }
    int max=a[0],min=a[0];

    for(int j=0;j<n;++j){
        if(a[j]>max){
            max=a[j];
        }
        if(a[j]<min){
            min=a[j];
        }
        
    }

    cout<<min<<" "<<max; 


    return 0;
}