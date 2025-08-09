#include <iostream>

using namespace std;

#define STUDENT_NUM 28
#define REGULAR 8
#define SMALL 3

int cal_left(int regular, int small);

int main(){
    int reg, sml;
    cin >> reg >> sml;

    int left_cake;
    left_cake = cal_left(reg, sml);

    cout << left_cake << endl;
    return 0;
}

int cal_left(int regular, int small){
    int ret;
    regular = regular * REGULAR;
    small = small * SMALL;
    ret = (regular + small) - STUDENT_NUM;

    return ret;
}