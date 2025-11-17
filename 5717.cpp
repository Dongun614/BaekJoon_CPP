#include <iostream>

using namespace std;

int main(){
    int female, male;
    
    while(1){
        cin >> female >> male;
        if(female == 0 && male == 0){
            break;
        }
        cout << female + male << endl;
    }
    
    return 0;
}