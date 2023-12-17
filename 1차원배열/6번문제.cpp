#include <iostream>
using namespace std;

int main() {

    int n;//1~n번호의 바구니
    int m;//공을 바꾸는 횟수

    cin>>n>>m;

    int box[n+1]={0};


    //바구니에는 처음 바구니 번호와 같은 번호의 공 1개 있음
    for(int k=1;k<=n;++k){
        box[k]=k;
    }


    //공 교환시 임시 저장할 변수
    int i,j,cnt;

    //공 교환 m번 시행
    for(int k =0; k<m; ++k){
        cin>>i>>j;
        cnt=box[i];
        box[i]=box[j];
        box[j]=cnt;
    }


    for(int k =1; k<=n; ++k){
        if(k!=n){
            cout<<box[k]<<" ";
        }
        else{
            cout<<box[k];
        }
    }

    return 0;
}