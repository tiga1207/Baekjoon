#include <iostream>

using namespace std;

int main() {

    //카운팅 정렬 사용하기

    int n;
    cin>>n;
    int numbers[10000] ={0}; //1~10000까지 (문제에서는 0은 사용하지 않으니 0에 사용되는 메모리 절약을 위해 10001이 아닌 10000으로 사용.)

    for(int i=0;i<n;++i)
    {
        int k;
        cin>>k;
        numbers[k-1]+=1; //일반적인 카운팅 정렬에서는 numbers[k]+=1이지만, 이 풀이에서는 numbers[0]은 0 대신 1로 카운팅 취급.
    }

    for(int i=0; i<10000; ++i)
    {
        while(numbers[i]>0)
        {
            cout<<i+1<<'\n';
            numbers[i]-=1;
        }
    }


    return 0;
}


// 메모리 공간이 극한적으로 제한되기에, 아래 방법은 불가.

// #include <iostream>
// using namespace std;

// // 입력 : 첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 10,000보다 작거나 같은 자연수이다.
// // 출력 : 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
// int main() {

//     //입력 받고 배열에 저장 후, 오름차순 정렬을 위해 버블정렬 사용하기
    
//     int n;
//     cin>>n;
//     int numbers[n];
    
//     for(int i=0;i<n;++i)
//     {
//         cin>>numbers[i];
//     }

//     for(int i=0; i<n-1;++i)
//     {
//         for(int j =0; j<n-1-i; ++j)
//         {
//             if(numbers[j] > numbers[j+1]) //앞의 수가 뒤의 수보다 클 경우 자리 바꿈.
//             {
//                 int temp = 0;
//                 temp = numbers[j] ;
//                 numbers[j] = numbers[j+1];
//                 numbers[j+1] = temp;
//             }
//         }
//     }

//     for(int i=0;i<n;++i)
//     {
//         cout<<numbers[i]<<'\n';
//     }

//     return 0;
// }