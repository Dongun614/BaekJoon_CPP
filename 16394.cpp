#include <iostream>

using namespace std;
#define ESTABLISH 1946

int main(){
    int cur_year;
    int result;

    cin >> cur_year;

    result = cur_year - ESTABLISH;
    cout << result << endl;

    return 0;
}