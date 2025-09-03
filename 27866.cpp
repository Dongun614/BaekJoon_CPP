#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int idx;

    cin >> s;
    cin >> idx;

    cout << s[idx-1] << endl;

    return 0;
}