#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    /*카드 합 21 넘지 않도록 하면서 카드 합을 최대한 크게 만드는 게임

새로운 규칙 만들었음

각 카드는 양의 정수, 딜러는 ㅜ장의 드드를 숫자가 보이도록 함. 그런다음 딜러는 숫자 m을 외침

제한 시간 안에 n장의 카드중에서 3장 카드를 골라야함.
고른 카드의 합은 m을 넘지 않으면서 가깝게 만들어야한다.

#입력

첫 줄: 카드의 개수와 딜러가 부르는 수 m제공
둘 째줄: 카드에 쓰여 있는 수가 주어짐.

#출력

m을 넘지 않으면서 m에 가까운 카드 3장의 합을 출력

ac*/
    //입력

    int card_count; //카드 개수
    int dealer_card; // 딜러가 외치는 숫자
    cin>>card_count>>dealer_card; //입력받기
    int card_pack[card_count]; // 사용자가 입력하는 카드 팩들의 각 숫자들 저장배열
    for(int i=0 ; i<card_count;++i){
        cin>>card_pack[i];
    }
    
    //출력
    //nC3을 이용해서 이차원 배열 하나 생성하여 모든 카드 조합을 저장시킨다.
     
    int combined= card_count*(card_count-1)*(card_count-2)/6;
    int resultCard[combined][3];

    //카드 조합배열에서 해당 배열의 합이 M을 넘지 않을 때, M-카드배열 합이 최소가 되는 배열을 선택
    for(int i=0; i<dealer_card;++i){
        for(int j=1; dealer_card;++j){
            for(int k=2; dealer_card;++k){
                resultCard[i][i]=card_pack[i];
                resultCard[i][j]=card_pack[j];
                resultCard[i][k]=card_pack[k];
            }
        }
    }
    // 해당 배열의 합을 출력

    return 0;
}