#include <iostream>

using namespace std;

int main(){
    int total; // 총 금액
    int items; // 물건 종류
    int price, number; // 물건 가격과 수량
    
    int temp; // 물건 하나에 대한 가격을 저장할 변수
    int cmp_tot = 0; // 실제 총 금액

    cin >> total >> items;

    for(int i=0; i<items; i++){
        cin >> price >> number;
        temp = price * number;
        cmp_tot += temp;
    }

    if(total == cmp_tot){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}