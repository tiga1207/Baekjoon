//5086

#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

//두 수가 주어졌을 때, 다음 3가지 중 어떤 관계인지 구하는 프로그램을 작성하시오.

// 첫 번째 숫자가 두 번째 숫자의 약수이다.
// 첫 번째 숫자가 두 번째 숫자의 배수이다.
// 첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.

// 첫 번째 숫자가 두 번째 숫자의 약수라면 factor 를, 배수라면 multiple 을, 둘 다 아니라면 neither
int main() {
    int first,second=0;

    while(1){
        cin>>first>>second;
        //첫 번째 숫자가 두 번째 숫자의 약수이다.
        if(first < second){
            if(second%first ==0 ){
                cout<<"factor"<<"\n";
            }
            else{
                cout<<"neither"<<"\n";
            }
        }
        else if (first > second){
            if(first%second ==0 ){
                cout<<"multiple"<<"\n";
            }
            else{
                cout<<"neither"<<"\n";
            }
        }
        //종료 조건
        else if(first==0 && second==0){
            break;
        }
        else{
            cout<<"neither"<<"\n";
        }
    }
    

    return 0;
}