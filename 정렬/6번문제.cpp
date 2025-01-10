#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string n;
    cin>>n;
    
    for(int i=0; i<n.size()-1;++i)
    {
        for(int j=0;j<n.size()-i-1;++j)
        {
            if(n[j]<n[j+1])
            {
                swap(n[j],n[j+1]);
            }
        }
    }

    cout<<n;

    return 0;
}