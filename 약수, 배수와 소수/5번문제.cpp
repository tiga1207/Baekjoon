//2581


#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

// 자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램

//ex) M=60, N=100일때 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 
//이들 소수의 합은 620이고, 최솟값은 61이 된다




int main() {

    int n,m;
    cin>>n>>m;

    vector<int> sosu;
    int sum=0;



    for(int i=n; i<=m;++i){
        int count =0;

        for(int j=1;j<=i;++j){
            if(i%j==0){
                count++;
            }
        }

        if(count ==2){
            sosu.push_back(i);
            sum+=i;
        }




    }
    if(sosu.empty()){
        cout<<-1;
    }
    else{
        cout<<sum<<"\n"<<sosu[0];
    }


    //약수 개수 찾기

    return 0;
}