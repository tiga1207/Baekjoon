#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {

    /* 
    문제
    9×9 격자판에 쓰여진 81개의 자연수 또는 0이 주어질 때, 
    최댓값을 찾고 그 최댓값이 몇 행 몇 열에 위치한 수인지?
    */

    //행렬선언, 최댓값 저장 변수 선언, 최댓값이 위치한 행 번호와 열 번호 저장 변수 선언
    int determinant_A[10][10];
    int max=0;
    int row,colum;
    // 첫째 줄부터 아홉 번째 줄까지 한 줄에 아홉 개씩 수가 주어진다. 주어지는 수는 100보다 작은 자연수 또는 0이다.
    for(int i=1;i<=9;++i){
        for(int j=1;j<=9;++j){
            cin>>determinant_A[i][j];
            if(determinant_A[i][j]>=max){
                max=determinant_A[i][j];
                row=i;
                colum=j;
            }
        }
    }

    //첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 위치한 행 번호와 열 번호를 빈칸을 사이에 두고 차례로 출력한다. 
    cout<<max<<'\n'<<row<<" "<<colum;
    
    //최댓값이 두 개 이상인 경우 그 중 한 곳의 위치를 출력한다.

    return 0;
}