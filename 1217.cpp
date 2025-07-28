#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    if(n == 0 || m == 0){
        return 0;
    }

    printf("%d\n%d\n", n/m, n%m);

    return 0;
}