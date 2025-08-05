#include <iostream>

using namespace std;

//1. 세 수를 입력받는다.
//2. 나누고 곱하고, 곱하고 나누고 두 개를 계산한다.
//3. 더 큰 값을 출력한다.

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    int division_fist;
    int multiple_first;

    division_fist = A / B * C;
    multiple_first = A * B / C;

    if(division_fist < multiple_first){
        printf("%d\n", multiple_first);
    } else {
        printf("%d\n", division_fist;
    }

    return 0;
}