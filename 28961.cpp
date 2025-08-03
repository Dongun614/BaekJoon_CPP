#include <iostream>
#include <string>

using namespace std;

int main(){
    string club[5] = {"MatKor", "WiCys", "CyKor", "AlKor", "$clear"};

    string input;
    cin >> input;

    if(input == "M"){
        cout << club[0] << endl;
    } else if(input == "W"){
        cout << club[1] << endl;
    } else if(input == "C"){
        cout << club[2] << endl;
    } else if(input == "A"){
        cout << club[3] << endl;
    } else if(input == "$"){
        cout << club[4] << endl;
    } else {
        cout << "잘못된 입력입니다" << endl;
    }

    return 0;
}