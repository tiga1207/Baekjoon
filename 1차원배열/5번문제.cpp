#include <iostream>
using namespace std;

int main() {
    int n,m;//1~n번 공, 바구니 있음. 공 넣는 횟수 M
    cin>>n>>m;

    //조건: 만약 바구니에 공이 이미 있으면 새로운 공을 넣음.
    // 공을 넣을 바구니는 연속되야함.
    int box[n] ={0};
    
    int i,j,k;

    for(int x=1;x<=n;++x){
        box[x]=0;
    }

    //m개의 줄을 걸쳐서 공을 넣는 방법이 주어짐.
    //i~j번 바구니에 k번 공을 넣음
    for(int x=1; x<=m; ++x){
        cin>>i>>j>>k;
        for(i;i<=j;++i){
            box[i]=k;
        }
    }
    //공이 들어있지 않은 바구니는 0을 출력한다.
    for(int x=1;x<=n;++x){
        if(x!=n){
        cout<<box[x]<<" ";
        }
        else{
            cout<<box[x];
        }
    }
    
    return 0;
}