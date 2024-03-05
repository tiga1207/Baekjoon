//1085

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include<math.h>
using namespace std;

int main() {

    int x,y,w,h;
    vector<int> arr;
    cin>>x>>y>>w>>h;
    int min=abs(x-w);

    arr.push_back(abs(x-w));
    arr.push_back(abs(y-h));
    arr.push_back(abs(x-0));
    arr.push_back(abs(y-0));

    for(int i=0; i<arr.size();++i){
        if(min>=arr[i]){
            min=arr[i];
        }
    }

    cout<<min;

    return 0;
}