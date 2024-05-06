#include <iostream>
#include<vector>
using namespace std;
int main() {


    //(x,y) 입력 받는 것들 중, (x좌표가  가장 큰 수 - x좌표가 가장 작은 수) * (y ~~)
    int inputSize=0;
    vector <int> arrX;
    vector <int> arrY;
    cin>>inputSize;
    for(int i=0;i<inputSize; ++i){
        int x,y=0;
        cin>>x>>y;
        arrX.push_back(x);
        arrY.push_back(y);
    }
        int xmax= arrX[0];
        int xmin= arrX[0];

        int ymax = arrY[0];
        int ymin= arrY[0];
    // int xmax,xmin,ymax,ymin=0;
    for(int j=0;j<inputSize;++j){
        if(arrX[j]>xmax){
            xmax=arrX[j];
        }
        if(arrX[j]<xmin){
            xmin=arrX[j];
        }
        if(arrY[j]>ymax){
            ymax=arrY[j];
        }
        if(arrY[j]<ymin){
            ymin=arrY[j];
        }

    }
    cout<<(xmax-xmin)*(ymax-ymin);

    return 0;
}