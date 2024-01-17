#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    //원의 크기로 접근해야함
    //원을 그려 2번 만나는 조건일 경우 2출력
    //원을 그려 한 점에서 만나는 조건일 경우 1
    //원의 크기와 xy좌표가 둘다 같을 경우 -1 출력

    
    int testCase;
    cin>>testCase;
    for(int i=0;i<testCase;++i){
        int x1,y1,r1,x2,y2,r2;
    
        cin>>x1>>y1>>r1>>x2>>y2>>r2;

        double d=sqrt((pow(x2-x1,2)+pow(y2-y1,2)));

        if(d ==0 && r1 == r2){
            cout<<-1<<'\n';
        }
        else if(r1+r2==d || abs(r1-r2)==d){
            cout<<1<<'\n';
        }
        else if(abs(r1-r2)<d && d<r1+r2){
            cout<<2<<"\n";
        }
        else{
            cout<<0<<'\n';
        }


    }



    return 0;
}