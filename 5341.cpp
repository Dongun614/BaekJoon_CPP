#include <iostream>

using namespace std;

int main(){
    int result[1024];

    int a;

    int idx = 0;
    while(1){
        cin >> a;
        if(a == 0){
            break;
        }
        
        //덧셈 계산
        int temp = 0;
        for(int i=a; i>0; i--){
            temp += i;
        }

        result[idx++] = temp;
    }

    for(int i=0; i<idx; i++){
        printf("%d\n", result[i]);
    }

    return 0;
}