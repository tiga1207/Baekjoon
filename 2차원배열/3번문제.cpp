#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {

    // 한 줄의 단어는 글자들을 빈칸 없이 연속으로 나열해서 최대 15개의 글자들로 이루어진다.
    // 다섯 개의 단어들의 글자 개수는 서로 다를 수 있다

    // 총 다섯줄의 입력이 주어진다. 각 줄에는 최소 1개, 최대 15개의 글자들이 빈칸 없이 연속으로 주어진다. 
    // 주어지는 글자는 영어 대문자 ‘A’부터 ‘Z’, 영어 소문자 ‘a’부터 ‘z’, 숫자 ‘0’부터 ‘9’ 중 하나이다.
    //  각 줄의 시작과 마지막에 빈칸은 없다.

    string determinant_A[5];
    
    for(int i=0; i<5;++i){
        cin>>determinant_A[i];
    }

    for(int j=0; j<15;++j){
        for(int i=0; i<5;++i){
            if(determinant_A[i].length()>j){
                cout<<determinant_A[i][j];
            }
        }
        }

    return 0;
}