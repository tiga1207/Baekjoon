// str.find 쓰는 문제. npos가 (int)에서는 -1 이지만 
//unsigned는 2의 보수로 인해 최대 크기의 양수가 출력됨을 인지하기

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {

//변수 선언
    string str;
    array<int,26> a={-1};
    cin>>str;


    for(char k='a';k<='z';++k){
        int i=0;
        a[i]=(int)str.find(k);
        cout<<a[i]<<' ';
        ++i;
    }





    return 0;
}