#include <iostream>

using namespace std;

int main(){
    int num; //입력받을 숫자의 총 개수
    int histo; //히스토그램 길이 입력받을 변수

    cin >> num;

    for(int i=0; i<num; i++){
        cin >> histo;
        for(int j=0; j<histo; j++){
            cout << "=" ;
        }
        cout << endl;
    }

    return 0;
}