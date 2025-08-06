#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int case_num;
    cin >> case_num;
    int A, B;

    for(int i=0; i<case_num; i++){
        cin >> A >> B;
        cout << A + B << "\n";
    }

    return 0;
}