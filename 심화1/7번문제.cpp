//1316
#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;


/*연속 단어 정의: 
1. 만약 일정 인덱스까지 문자가 그 뒤 문자와 같다면 패스

2. 문자가 달라지는 시점이 나왔을 때의 인덱스를 기억한 뒤, 
해당 인덱스 이후로 처음 문자가 사용된다면 해당 단어는 그룹단어가 아님

3. 만약 2번 조건도 만족할 시에는 다음 문자 기준으로 1번~2번 반복
->언제까지? 문자열 끝까지

*/

int main() {
    //그룹단어 수 찾기, 글자가 연속해서 나타나는 경우 
    //ex> kin , ccazzb 반례 ex) aabbca

    //입력부
    //첫째 줄 단어의 개수 N, 둘째 줄 n개의 단어 입력됨.

    int n; //입력단어 개수
    cin>>n;

    char indexrem=0;

    string a[n];//단어 저장 배열
    int groupsum=0; //그룹단어 개수
    


    for (int i=0; i<n; ++i){
        cin>>a[i];
    }

    for(int i =0; i<n;++i){
        for(int j=0; j<a[i].size();++j){
            //단어가 바뀐 시점에서 뒤에 같은 단어가 나오는가?
            if(a[i][j]!=a[i][j+1]){
                indexrem=a[i][j];
            }
            if(indexrem != a[i][j+2]){
                groupsum++;
            }
        }
    }


    //출력부
    cout<<groupsum;

    return 0;
}
