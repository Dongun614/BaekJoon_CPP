#include <iostream>

using namespace std;

int main(){
    int medal, kid;
    cin >> medal >> kid;

    if(medal % kid == 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}