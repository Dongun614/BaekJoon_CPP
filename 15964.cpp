#include <iostream>

using namespace std;

long long at(long long a, long long b);

int main(){
    long long A, B;
    cin >> A >> B;

    long long result = at(A,B);

    cout << result << endl;
    return 0;
}

//연산자의 기호는 ＠으로, A＠B = (A+B)×(A-B)
long long at(long long a, long long b){
    return (a+b) * (a-b);
}