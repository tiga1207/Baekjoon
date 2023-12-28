#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
//방법1: if문으로 뒷자리 부터 수 크기 비교하기
//방법2: 배열을 이용해 수 뒤집고 크기 비교하기

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    if(stoi(a)>stoi(b)){
        cout<<a;
    }
    else{
        cout<<b;
    }


//방법3: for문으로 뒤집기

/*
    string reverse_a,reverse_b;
    for(int i=a.length()-1;i>=0;--i){
        reverse_a+=a[i];
        reverse_b+=b[i];
    }
    if(stoi(reverse_a)>stoi(reverse_b)){
        cout<<reverse_a;
    }
    else{
        cout<<reverse_b;
    }

*/
    return 0;
}
