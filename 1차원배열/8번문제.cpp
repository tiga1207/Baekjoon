//3052
#include <iostream>
#include<set>
using namespace std;

int main() {
    //1. 수 10개 입력 받기
    //2. 42로 나눈 나머지 구하기
    int input;
    int n[42]={0,}; // 사용자 입력 저장 변수
    int count=0; //서로 다른 값 갯수 카운팅 변수
    for(int i=0; i<10; ++i){
        cin>>input;
        n[input%42]+=input;
    }
    //3. 나온 값들 중 서로 다른 값 갯수 구하기 
    for(int j=0; j<42; ++j){
        if(n[j]!=0){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}
//다른풀이 (set 사용)

/*
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n[10];
    set<int> set_input; // 서로 다른 나머지를 저장할 set

    for(int i = 0; i < 10; ++i) {
        cin >> n[i];
        n[i] %= 42;
        set_input.insert(n[i]); // set에 나머지 값 추가
    }

    cout << set_input.size(); // set의 크기가 서로 다른 나머지의 갯수
    return 0;
}
*/