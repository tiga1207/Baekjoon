//2563

#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {

    // 첫째 줄: 색종이의 수가 주어진다
    int num;
    cin>>num;
    int x[num];
    int y[num];

    int all=0;
    int overlapSum=0;

    for(int i =0; i<num; ++i){
        cin>>x[i]>>y[i];
    }

    //2번 이상 같은 부분이 겹치게 되는경우 그 부분을 전부 빼게 되는 문제 발생
    for(int i=0; i<num; ++i){
        for(int j=i+1; j<num; ++j){
            if(abs(x[i]-x[j])<10 && abs(y[i]-y[j])<10){
                overlapSum+=(10-abs(x[i]-x[j]))*(10-abs(y[i]-y[j]));
            }
        }
    }
    
    // 검은 도화지
    all = 10*10*num;

    cout<<all-overlapSum;


    cout<<overlapSum;

    return 0;
}