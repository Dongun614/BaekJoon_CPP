#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){
    int slot, turn;
    int start, space;
    int count = 0;

    cin >> slot >> turn;

    int* row = (int*)malloc(sizeof(int)*slot);
    memset(row, 0, sizeof(int) * slot);

    for(int i=0; i<turn; i++){
        cin >> start >> space;
        for(int j=start-1; j<slot; j+=space){
            row[j] = 1;
        }
    }

    for(int i=0; i<slot; i++){
        if(row[i] == 0){
            count++;
        }
    }

    free(row);

    cout << count << endl;
    return 0;
}