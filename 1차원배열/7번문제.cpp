//5597
#include <iostream>
using namespace std;

int main() {
    int n;
    int m[30]={0,};

    //입력은 총 28줄 출석번호가 한줄에 하나씩, 출석번호는 중복 x

    //출력은 2줄, 1번째줄: 제출하지 않은 학생의 출석번호(가장 작은 것)
    // 2번 째 줄: 그다음 출석번호

    //출석번호 1~30번까지

    for(int i=0;i<28;++i){
        cin>>n;
        m[n-1]=n;
    }

    for(int i=0;i<30;++i){
        if(m[i]==0){
            cout<<i+1<<"\n";
        }
    }



    return 0;
}