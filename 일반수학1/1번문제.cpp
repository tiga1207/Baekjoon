//2745
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    // B진법 수 N -> 10진법으로 바꿔 출력하기
    // 참고 : A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
    //A=65임을 이용하자


    // 첫째 줄에 N(사용자 입력 숫자)과 B(진법)가 주어진다. (2 ≤ B ≤ 36)
    string N;
    int B;    
    int sum=0;
    
    cin>>N>>B;

    for(int i=0; i<N.size();++i){
        if((N[i])>=65){
            sum += (N[i]-55) * pow(B,(N.size()-i-1));
            // cout<<i<<"번째에 있는 수는 : "<<N[i]<<"\n";
        }
        else{
            sum += (N[i]-48) *  pow(B,(N.size()-i-1));
            // cout<<i<<"번째에 있는 수는 : "<<N[i]<<"\n";
        }
    }
    
    cout<<sum;


    return 0;
}