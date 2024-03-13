//25305


#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    
    /*
    대회에 N명의 학생들이 응시했다. 점수가 가장 높은 k명은 상을 받음 이 때, 상을 받는 커트라인이 몇 점?

커트라인: 상을 받는 사람들 중 점수가 가장 가장 낮은 사람의 점수

첫째 줄: 응시자의 수 N과 상을 받는 사람의 수 k가 공백을 사이에 두고 주어진다.

둘째 줄: 각 학생의 점수 x가 공백을 사이에 두고 주어진다.
    
    */


   int n,k=0;
   vector<int> arr;
    cin>>n>>k;
    for(int i=0; i<n;++i){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    for(int i=0; i<n;++i){
        int temp=0;
        for(int j=i+1;j<n;++j){
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


   cout<<arr[k-1];




    return 0;
}