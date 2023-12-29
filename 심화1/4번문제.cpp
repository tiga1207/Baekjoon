#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    string reverse_str;
    cin>>str;

    reverse_str=str;
    reverse(str.begin(),str.end());
    if(str==reverse_str){
        cout<<1;
    }
    else{
        cout<<0;
    }







    return 0;
}