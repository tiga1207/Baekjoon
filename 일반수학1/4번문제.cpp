//2903
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    //초기
    //규칙: 아래 규칙의 제곱으로 수가 늘어남.
    //2제곱 3제곱 5제곱
    //초기 : 2^2/ 1번째 3^3/ 2번째: 5^5
    
    //규칙:(2^0+2^(i번째))의 제곱

    //pow 주의사항
    /*
    C++의 pow는 부동 소수점 타입을 인자로 받는 버전만 있으며, 정수 pow는 존재하지 않습니다. 대신, double pow(double, double)로 오버로딩 된 버전을 사용하게 됩니다.
https://en.cppreference.com/w/...

그러므로 pow의 출력값은 double이 되는데, 이걸 바로 출력하게 되면 큰 숫자를 출력하게 되는 경우 잘못된 포맷으로 출력이 되게 됩니다. N = 15 한번 넣어보세요.

함수 리턴값을 int ans에 넣어주게 되면 double값이 int로 캐스팅되게 되는데, double은 int 범위의 수는 정확하게 표현할 수 있으므로 이렇게 하는 경우에는 잘 출력이 됩니다. (만약 64비트 정수를 사용했다면 답이 큰 경우 부정확한 값이 저장되겠죠.)

다만, pow 연산 자체가 부정확할 가능성을 배제할 수 없기 때문에, 이왕이면 직접 정수 버전의 pow를 구현하는 것이 낫습니다
    */

    int n;
    cin>>n;
    int result= pow(pow(2,n)+1,2);
  
    cout<<result<<"\n";

    return 0;
}