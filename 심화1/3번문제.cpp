//2444
#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;


//n=5일때
        //1. n-1만큼 공백 , 1개 출력
        //2. n-2만큼 공백 , 3개
        //3. n-3만큼 공백 , 5개
        //4. n-4 공백 , 7
        //5. n-5 공백 , 9
    
int main() {
    int n;
    cin>>n;

    //상단부
    for(int i=0; i< n;++i){
        for(int j=n-i-1; j>0; --j){
            cout<<" ";
        }
        for(int j=0;j<2*(i+1)-1;++j){
            cout<<"*";
        }
        cout<<"\n";
    }
    //하단부
    for(int i=0; i< n-1 ;++i){
        for(int j=0;j<i+1;++j){
            cout<<" ";
        }
        for(int j=2*(n-i-1)-1;j>0;--j){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}