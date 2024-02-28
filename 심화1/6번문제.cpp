// 2941
#include <iostream>
using namespace std;
int main() {
    //크로아티아 알파벳 갯수 출력하기
    //c= / c- / dz= / d- / lj / nj / s=/ z=
    //위 단어는 각 1개씩 취급, 나머지는 상관 없음.

    int countEx=0;
    string n;
    cin>>n;
    for(int i=0;i<n.size();++i){
        if(n[i]=='d' && n[i+1] == 'z' && n[i+2] == '='){
            countEx+=1;
        }
        else if(n[i]=='c' && n[i+1] == '-'){
            countEx+=1;
        }
        else if(n[i]=='d' && n[i+1] == '-'){
            countEx+=1;
        }
        else if(n[i]=='l' && n[i+1] == 'j'){
            countEx+=1;
        }
        else if(n[i]=='n' && n[i+1] == 'j'){
            countEx+=1;
        }
        else if(n[i]=='s' && n[i+1] == '='){
            countEx+=1;
        }
        else if(n[i]=='z' && n[i+1] == '='){
            countEx+=1;
            //이놈때문에 지금 dz=일때 2번 더해짐.
        }
        else if(n[i]=='c' && n[i+1] == '='){
            countEx+=1;
        }
    }
    cout<<n.size()-countEx;
    // cout<<countEx;



    return 0;
}