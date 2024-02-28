//1157

#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    //가장 많이 사용된 알파벳 알아내기
    //입력: 첫째 줄에 대소문자 단어 주어짐. 

    //A=> 65, Z=>90 / a=97, z=122
    //알파벳 갯수 크기인 배열을 0으로 선언하고 입력 문자열 크기 만큼 for문 돌린 후에
    // 해당 문자를 집어 넣을 때마다 +1 해서 넣기. 
    //단, 대소문자를 구별하지 않으니, 갯수 셀 때는 +32위치에 있는 알파벳 수까지 합해야함.
    //아니면 32보다 크거나 같으면 이라는 조건문 사용하기

    int max=0; //최댓값 여부 확인 변수
    int maxIndex=0; //최댓값 인덱스
    int findnum=0; //최댓 값 인덱스 갯수
    int arr[26]={0,}; //알파벳 갯수 배열
    
    string n;// 사용자 문자열 입력 변수
    cin>>n;

    //arr배열에 알파벳 갯수 넣기. 
    
    for(int i=0;i<n.size();++i){
        if(n[i]-65>=32){
            arr[n[i]-97]+=1;
        }
        else{
            arr[n[i]-65]+=1;
        }
    }   

    //최댓 값 찾기
    for(int i=0;i<26;++i){
        if(arr[i]>max){
            max=arr[i];
            maxIndex=i;
        }
    }

    //최댓값과 동일한 요소 있는 지 찾기
    for(int i=0;i<26;++i){
        if(arr[i] == max){
            findnum +=1;
        }
    }

    //만약 배열 내부에 max와 동일한 값이 2개 이상일 경우 ?를 출력하라.     
    if(findnum >=2){
        cout<<"?";
    }
    else{
        cout<<char(maxIndex+65);
    }


    return 0;
}