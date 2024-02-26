#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    //ABC= 2/ DEF =3/ GHI =4/ JKL =5 / MNO =6 / 
    //PQRS=7 / TUV=8 / WXYZ=9
    // 1을 걸때 2초 걸림 즉, 2를 걸면 3초 걸림

    //1. "A" =65라는 것을 이용해서 풀기.
    string input;
    int sum=0;
    int phone[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

    cin>>input;

    for(int i=0 ; i< input.length();++i){
        sum += phone[(input[i]) - 65];
    }

    cout<<sum;

    return 0;
}