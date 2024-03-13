//	2750

#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr;

    for(int i=0; i<n; ++i){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    for(int i=0; i<n;++i){
        int temp=0;
        for(int j=i+1; j<n;++j){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

     for(int i=0; i<n;++i){
        cout<<arr[i]<<"\n";
     }



    return 0;
}