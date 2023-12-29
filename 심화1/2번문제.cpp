#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    int temp;
    array<int,6> result;
    array<int,6> real={1,1,2,2,2,8};
    for(int i=0; i<real.size();++i){
        cin>>temp;
        result[i]=real[i]-temp;
    }
    
    for(int j=0;j<result.size();++j){
        cout<<result[j]<<" ";
    }
    

    return 0;
}