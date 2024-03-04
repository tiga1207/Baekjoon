// 9506


#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;


int main() {
    int n=0;
    while(n!=-1){
        int count=0;
        int sum=0;

        cin>>n;

        //약수 찾기 및 배열에 넣기
        for(int i=1; i<n; ++i){
            if(n%i==0){
                count ++;
            }
        }
        
        int store[count]={0,};

        for(int i=1,j=0; i<n; ++i){
            if(n%i==0){
                store[j++]=i;
            }
        }

        //합구하기.
        for(int i=0; i<count; ++i){
            sum+=store[i];
        }
        if(n != -1){

            if(sum != n){
                cout<<n<<" is NOT perfect."<<"\n";     
            }
            else{
                cout<<n<<" = ";
                for(int i=0; i<count-1; ++i){
                    cout<<store[i]<<" + ";
                }
                cout<<store[count-1]<<"\n";           
            }
            
        }else{
            break;            
        }
    
    }
    return 0;
}