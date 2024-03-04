//1978

#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    int n=0;
    int count= 0;
    
    cin>>n;
    int test[n]={0,};
    int sum[n]={0,};//약수 개수


    for(int i=0; i<n; ++i){
        cin>>test[i];
    }


    //약수
    for(int i=0; i<n; ++i){
        for(int j=1;j<=test[i];++j)
        {
            if(test[i]%j==0){
                sum[i]++;
        }
        }
        if(sum[i] == 2){
            count++;
        }
    }

    //test[i]!=1이 아닐때, 해당 수의 약수의 개수가 2보다 크다면 소수x

    
        
    

    // for(int i=0; i<n; ++i){
    //     // cout<<i<<"'st test= : "<<test[i]<<"\n";
    //     // cout<<i<<"'st sum= : "<<sum[i]<<"\n";
    // }



    cout<<count;

    return 0;
}