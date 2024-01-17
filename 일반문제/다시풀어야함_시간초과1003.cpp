#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int countZero=0;
    int countOne=0;
    
    int fibonacci(int n){
    if (n == 0) {
        countZero++;
        return 0;
    } else if (n == 1) {
        countOne++;
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int testCaseCount;
    cin>>testCaseCount;
    int userInput;
    
    

    for(int i=0; i<testCaseCount; ++i ){
        cin>>userInput;
        fibonacci(userInput);
        cout<<countZero<<" "<<countOne<<"\n";
        countZero=0;
        countOne=0;
    }


    return 0;
}