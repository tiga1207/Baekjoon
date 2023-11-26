#include <iostream>
using namespace std;

int main() {
    int a;
    int b[101]={0};
    int c;
    int sum=0;
    
    cin>>a;
    
    for(int i=0;i<a;++i){
        cin>>b[i];
    }
    cin>>c;
    
    for(int j=0;j<a;++j){
        if(c==b[j]){
            sum+=1;
        }
    }
    
    cout<<sum;
 
    return 0;
}