// 틀린문제 + 보류

#include <iostream>
using namespace std;

int main() {
    int H,M;
    cin>>H>>M;

    if (H>0)
    {
        if(M<45){
            cout<<H-1<<" "<<(60-45+M);
        }
        else if(M>=45){
            cout<<H-1<<" "<<M-45;
        }
    }
    else{
        if(M<45){
            cout<<H+23<<" "<<(60-45+M);
        }
        else if(M>=45){
            cout<<H+23<<" "<<M-45;
        }
    }


    return 0;
}