#include <iostream>
#include<sstream>
#include<string>
using namespace std;

int main() {

    int i=0;
    string s;
    int sum=0;
    


    cin>>i>>s;

    for(int j=0; j<i;++j){
        stringstream ss;
        int num;
        ss<< s[j];
        ss>>num;

        sum+=num;
    }
    cout<<sum;

    return 0;
}