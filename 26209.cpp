#include <iostream>

using namespace std;

#define NUM 8

int main(){
    string result = "S";
    int numList[NUM];

    
    for(int i=0; i<NUM; i++){
        cin >> numList[i];
        if(numList[i] == 9){
            result = "F";
        }
    }

    cout << result << endl;

    return 0;
}