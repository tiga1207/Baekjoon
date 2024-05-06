#include <iostream>
using namespace std;
int main() {


// 삼각형의 세 각을 입력받은 다음, 

// 세 각의 크기가 모두 60이면, Equilateral
// 세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
// 세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
// 세 각의 합이 180이 아닌 경우에는 Error

    int a,b,c=0;

    cin>>a>>b>>c;

    int angleSum=a+b+c;

    if((a==b && b==c && b==c )&& angleSum==180){
        cout<<"Equilateral";
    }
    else if(angleSum==180 && (a==b || b==c || a==c)){
        cout<<"Isosceles";
    }
    else if(angleSum==180 && a!=b!=c){
        cout<<"Scalene";
    }
    else if(angleSum!=180){
        cout<<"Error";
    }



    return 0;
}

