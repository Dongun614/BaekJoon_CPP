#include <iostream>
#include <string>

using namespace std;

int main(){
    char input;
    cin >> input;

    if(input == 'M'){
        cout << "MatKor" << endl;
    } else if(input == 'W'){
        cout << "WiCys" << endl;
    } else if(input == 'C'){
        cout << "CyKor" << endl;
    } else if(input == 'A'){
        cout << "AlKor" << endl;
    } else if(input == '$'){
        cout << "$clear" << endl;
    } else {
        cout << "잘못된 입력입니다" << endl;
    }

    return 0;
}