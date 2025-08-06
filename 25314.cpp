#include <iostream>

using namespace std;

int main(){
    int how_long;

    cin >> how_long;

    how_long = how_long / 4;

    for(int i=0; i<how_long; i++){
        cout << "long ";
    }

    cout << "int" << endl;

    return 0;
}