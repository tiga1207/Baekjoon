#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int result=0;

    int paper[100][100] = {0};

    for (int i = 0; i < num; ++i) {
        int x, y;
        cin >> x >> y;

        //배열은 0부터 시작하니, 0을 기준으로..
        x -= 1;
        y -= 1;

        // 해당 좌표에 색종이가 없는 경우에만 +1 색종이가 겹치는경우 제외
        for (int j = x; j < x + 10; ++j) {
            for (int k = y; k < y + 10; ++k) {
                if (paper[j][k] == 0) {
                    paper[j][k] = 1;
                }
            }
        }
    }


    //1로 더해져 있는 코드 더하기
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            result += paper[i][j];
        }
    }
    cout << result;

    return 0;
}
