#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    //대소문자, 공백으로 이뤄진 문자열
    string str;
    
    getline(cin,str); // cin>>str로 할 경우 공백 입력받으면 중지됨.
    
    stringstream str_split(str);
    
    string word;
    vector<string> words;
/*
str_split >> word:
>> 연산자는 공백을 스킵하고, 문자열에서 공백 이전까지의 내용을 추출합니다.
따라서 공백을 포함하지 않는 단어들을 추출할 수 있습니다.

getline(str_split, word, ' '):
getline 함수는 특정 구분자(이 경우 공백)를 기준으로 문자열을 추출합니다.
따라서 공백을 포함한 한 단어를 추출합니다.


*/
    while(str_split>>word){
        words.push_back(word);
    }
    cout<<words.size();

/*
    while(getline(str_split,word,' ')){
        words.push_back(word);
    }
    cout<<words.size();
*/



    return 0;
}