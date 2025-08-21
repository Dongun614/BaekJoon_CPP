#include <iostream>

using namespace std;

int factorial(int number);

int main(){
    int num;

    cin >> num;
    int result = factorial(num);
    cout << result << endl;

    return 0;
}

int factorial(int number){
    int ret = 1;

    for(int i=number; i>0; i--){
        ret = ret * i;
    }

    return ret;
}