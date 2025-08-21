#include <iostream>

using namespace std;

long long factorial(int number);

int main(){
    int num;

    cin >> num;
    long long result = factorial(num);
    cout << result << endl;

    return 0;
}

long long factorial(int number){
    long long ret = 1;

    for(int i=number; i>0; i--){
        ret = ret * i;
    }

    return ret;
}