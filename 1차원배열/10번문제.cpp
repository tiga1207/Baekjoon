//1546
#include <iostream>

using namespace std;


int main() {
   //입력부
   // 첫 번째 줄: 시험과목 개수 N
   int N,M=0;
   cin>>N;

   // 두 번째 줄: 세준이의 현재 성적
   double score[N];
   for(int i=0;i<N; ++i){
        cin>>score[i];
   }

    //자기 점수 중 최댓값 M
    for(int k=0;k<N; ++k){
        if(M <= score[k]){
            M = score[k];
        }
    }

   //출력부
   //조건: 10^2 이하의 오차를 허용하나, 소수 2번째 자리까지 출력하라는건 X
   // 모든 점수를 점수 / M * 100으로 수정
   double sum, avg=0;
   for(int j=0 ; j<N; ++j){
       score[j] = (score[j] / M) * 100;
       sum += score[j];

   }
   avg=sum/N;

   //첫째 줄: 새로운 평균 출력
    cout<<avg;
    return 0;
}