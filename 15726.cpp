#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    int division_fist;
    int multiple_first;

    division_fist = ((double) A / B) * C;
    multiple_first = ((double) A * B) / C;

    if(division_fist < multiple_first){
        cout << multiple_first << endl;
    } else {
        cout << division_fist << endl;
    }

    return 0;
}