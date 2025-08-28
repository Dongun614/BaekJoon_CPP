#include <iostream>

using namespace std;

#define UR 56
#define TR 24
#define UO 14
#define TO 6

int main(){
    int ur, tr, uo, to;

    cin >> ur >> tr >> uo >> to;

    ur = ur*UR;
    tr = tr*TR;
    uo = uo*UO;
    to = to*TO;

    int result = ur + tr + uo + to;

    cout << result << endl;
    
    return 0;
}