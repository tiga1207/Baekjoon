#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    string s;

    cin>>t;
    for(int i=1;i<=t;++i){
        cin>>s;
        cout<<s[0];//문자열 1번째(인덱스 상 0이 첫 번째)
        cout<<s[s.length()-1]<<'\n';
    }
    

    return 0;
}