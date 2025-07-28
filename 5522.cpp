#include <iostream>

using namespace std;

#define NUM 5
int main(){
    int A[NUM];
    int total = 0;

    for(int i=0; i<NUM; i++){
        cin >> A[i];
        total += A[i];
    }

    cout << total << endl;

    return 0;
}