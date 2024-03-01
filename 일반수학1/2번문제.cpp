//11005

#include <iostream>
#include <math.h>
using namespace std;

//10진법 -> n진법

//주어진 수 나눌 때마다 나머지를 배열에 저장하고, 역으로 뒤집어 출력하는데,
//몫나머지[배열 역순]으로 출력하면 될 듯.
//단 나머지가 9보다 크면 문자로 아니면 숫자로.

int main() {

    int n,b;
    cin>>n>>b;
    string a;

    while(n!= 0){
        int remain = n % b;
        n = n/b;
        if(remain > 9){
            a += remain -10 + 'A';
        }
        else{
            a += remain + '0';
        }

    }
    

    for(int i= a.size()-1;i>=0;--i){
        cout<<a[i];
    }


    return 0;
}