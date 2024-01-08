#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    int n,m;

    //첫째 줄에 행렬의 크기 N 과 M이 주어진다.
    cin>>n>>m;

    //행렬 A,B
    int determinant_A[n][m];
    int determinant_B[n][m];
    

    //둘째 줄부터 N개의 줄에 행렬 A의 원소 M개가 차례대로 주어진다
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>determinant_A[i][j];
        }
    }

    // 이어서 N개의 줄에 행렬 B의 원소 M개가 차례대로 주어진다
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>determinant_B[i][j];
        }
    }

    //첫째 줄부터 N개의 줄에 행렬 A와 B를 더한 행렬을 출력한다. 행렬의 각 원소는 공백으로 구분한다.
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<determinant_A[i][j]+determinant_B[i][j]<<"";
        }
        cout<<'\n';
    }


    return 0;
}         