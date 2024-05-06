//3009

#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    // 세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.
    // 세 점의 좌표가 한 줄에 하나씩 주어진다. 좌표는 1보다 크거나 같고, 1000보다 작거나 같은 정수이다.
    // 직사각형의 네 번째 점의 좌표를 출력한다.

    // 주어진 x및 y 좌표 중에 숫자가 2개 중첩되면 패스x
    vector <int> arrX;
    vector <int> arrY;
    int x,y=0;
    int xResult, yResult=0;
    for(int i=0;i<3;++i){
        cin>>x>>y;
        arrX.push_back(x);
        arrY.push_back(y);
    }

    if(arrX[0]==arrX[1]){
        xResult=arrX[2];
    }
    else if(arrX[0]==arrX[2]){
        xResult=arrX[1];
    }
    else{
        xResult=arrX[0];
    }

    if(arrY[0]==arrY[1]){
            yResult=arrY[2];
        }
    else if(arrY[0]==arrY[2]){
        yResult=arrY[1];
    }
    else{
        yResult=arrY[0];
    }

    cout<<xResult<<" "<<yResult;
    return 0;
}