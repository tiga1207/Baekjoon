//2720
#include <iostream>
using namespace std;
int main() {
    //쿼터: 0.25달러, 다임: 0.10 달러, 니켈 0.05 달러, 페니: 0.01달러
    //쿼터: 25센트, 다임 10센트, 니켈 5센트, 페니 1센트

    int q,d,n,p=0;

    int t,c;
    //첫 줄: 테스트 케이스 T, 거스름돈 c(센트 단위 1달려 = 100센트)
    cin>>t;
    for(int i=0; i<t ; ++i){
        cin>>c;
        q=d=n=p=0;

        q= c/25;
        c%=25;

        d= c/10;
        c%=10;

        n= c/5;
        c%=5;

        p= c;

        cout<<q<<" "<<d<<" "<<n<<" "<<p<<"\n";
    }
    //출력
    // (쿼터, 다임, 니켈, 페니) 개수
    
    return 0;
}
