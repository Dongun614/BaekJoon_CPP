#include <iostream>

using namespace std;

//입력할 숫자의 개수를 받음
//갯수만큼 int 배열을 malloc을 통해서 만든다.
//for문을 통해 숫자를 받는다
//찾아야하는 숫자를 입력받는다.
//count라는 값 만든다
//for문 돌면서 찾아야할 값이랑 같으면 count 값을 증가시킨다
//count 값을 출력한다.


int main(){
    int num;
    cin >> num;

    int* numbers = (int*)malloc(sizeof(int) * num);

    for(int i=0; i<num; i++){
        cin >> numbers[i];
    }

    int find_num;
    cin >> find_num;

    int count = 0;

    for(int i=0; i<num; i++){
        if(numbers[i] == find_num){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}