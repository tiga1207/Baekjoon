//2751
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {

    int n=0;
    cin>>n;
    set<int> inputSet;

    for(int i=0; i<n; ++i){
        int a;
        cin>>a;
        inputSet.insert(a);
    }

    vector<int> inputVect(inputSet.begin(), inputSet.end());

    for(int i=0; i< inputVect.size(); ++i){
        cout<<inputVect[i]<<"\n";
    }



    return 0;
}