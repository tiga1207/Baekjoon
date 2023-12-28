#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {

    string str;
    int test_case; //문자 총 받을 개수
    int re_case;

    cin>> test_case;
    for(int i =0;i<test_case;++i){
        cin>>re_case;
        cin>>str;
        for(int k=0;k<str.length();++k){
            for(int j=0; j<re_case; ++j){
                cout<<str[k];
            }
        }
        cout<<'\n';
    }

    

    return 0;
}