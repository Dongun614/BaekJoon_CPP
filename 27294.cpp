//술하고 같이 초밥을 먹거나 점심식사가 아닐때 -> 280
//점심식사(12~16)이면서 술과 같이 먹지 않을 때 -> 320

#include <iostream>

using namespace std;

int main(){
    int T, S;
    cin >> T >> S;

    if(S == 1 || !(T >= 12 && T <= 16)){
        cout << 280 << endl;
    }else if(S == 0 && (T >= 12 && T <= 16)){
        cout << 320 << endl;
    }

    return 0;
}