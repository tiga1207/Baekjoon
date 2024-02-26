//11718

#include <iostream>
using namespace std;
int main() {
    //입력받은 대로 출력, 입력은 최대 100줄, 대소문자공백 숫자로만 이뤄짐.
    // 각 줄은 100글자, 빈줄은 x 각줄은 공백시작x 공백마무리x
    string str;
    while(1){
        
        getline(cin, str);
        if(str == ""){
            break;
        }
        cout<<str<<"\n";
    }

    return 0;
}