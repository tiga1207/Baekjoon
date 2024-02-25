//10811
#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    //오름차순으로 정렬된 n개 바구니(1~n까지 써져있음)
    //m번 바구니의 순서를 역순으로 만들 것임.(범위에 들어 있는 바구니 순서)

    //입력부
    int n,m;
    //첫째 줄: n과 m
    cin>>n>>m;
    int bosket[n+1];


    int i,j;

    for(int k=1; k<=n;++k){
        bosket[k]=k;
    }

    //둘 째줄: 바구니의 순서를 역순으로 만드는 법 주어짐.
    //왼쪽으로 부터 i번째 부터 j번째 바구니의 순서를 역순으로 만든다.
    for(int x=1; x<=m; ++x){
        cin>>i>>j;
        reverse(bosket+i,bosket+j+1);
        //reverse함수는 첫 번째 인자~ 두 번째 인자 까지의 범위를 역순으로 만든다.
        //두 번째 인자는 포함되지 않음. [First, Last) 범위에 유의해야함.
    }

    //출력부
    //왼쪽 바구니부터 공백으로 구분해 출력
    for(int y=1; y<=n;++y){
        cout<<bosket[y]<<" ";
    }


    return 0;
}