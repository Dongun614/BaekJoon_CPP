#include <iostream>

using namespace std;

#define PIECE_NUMBER 6

int main(){
    int limit[PIECE_NUMBER] = {1, 1, 2, 2, 2, 8}; //king, queen, rook, bihshop, pawn
    int temp;

    for(int i=0; i<PIECE_NUMBER; i++){
        cin >> temp;
        cout << limit[i] - temp << endl;
    }    

    return 0;
}