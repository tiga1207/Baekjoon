#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    int input_case_count=0;
    cin>>input_case_count;
    string input_word[input_case_count];
    int output_count=0;
    for(int i=0;i<input_case_count;++i){
        cin>>input_word[i];
        for(int j=0;j<input_word[i].size();++j){
            
        }

    }
    cout<<output_count;

    return 0;
}
/*연속 단어 정의: 
1. 만약 일정 인덱스까지 문자가 그 뒤 문자와 같다면 패스
-> a[i] == a[i+1] 단 이럴 경우 해당 조건문의 범위를 넘어가는 경우가 생기니
a[0]과 a[i-1], a[i]를 사용하는게 더 나아보임.

2. 문자가 달라지는 시점이 나왔을 때의 인덱스를 기억한 뒤, 
해당 인덱스 이후로 처음 문자가 사용된다면 해당 단어는 그룹단어가 아님

3. 만약 2번 조건도 만족할 시에는 다음 문자 기준으로 1번~2번 반복
->언제까지? 문자열 끝까지

*/