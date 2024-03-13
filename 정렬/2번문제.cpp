//2587

#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    int sum=0;
    int avg=0;
    int mid=0;
    vector<int> input;

    //입력값 받기
    for(int i=0; i<5; ++i){
        int a;
        cin>>a;
        input.push_back(a);
    }

    //평균
    for(int i=0; i<5; ++i){
        sum+=input[i];
    }
    avg= sum / 5;

    //중앙값

    for(int i=0; i<5; ++i){
        int temp=0;
        for(int j=i+1;j<5;++j){
            if(input[i]>input[j]){
                temp=input[i];
                input[i]=input[j];
                input[j]=temp;
            }
        }
    }

    mid=input[2];

    //값 출력
    cout<<avg<<"\n"<<mid;

    


    return 0;
}