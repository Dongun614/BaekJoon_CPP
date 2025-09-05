//Quick sort 사용하기 
//https://gmlwjd9405.github.io/2018/05/10/algorithm-quick-sort.html

#include <iostream>

using namespace std;

void quicksort(int list[], int left, int right);
void SWAP(int a, int b);

#define NUMBER 3
int main(){
    int num[NUMBER];

    for(int i=0; i<NUMBER; i++){
        cin >> num[i];
    }

    quicksort(num, 1, NUMBER-1);

    //1. 리스트가 들어온다.
    //2. 첫번째 요소를 pivot으로 잡는다.
    //3. 두번째 요소와 맨 마지막 요소가 각각 left, right가 된다.
    //4. 순차적으로 이름과 맞지 않는 요소를 찾는다.
    //5. 각각 찾으면 둘은 서로 교환된다.


    return 0;
}

void quicksort(int list[], int low, int high){
    int pivot = list[0];

    while(pivot > list[low]) low++;
    while(pivot < list[high]) high--;

    if(low < high){
        SWAP(low, high);
    }else{
        SWAP(pivot, high);
    }

    for(int i=0; i<3; i++){
        cout << list[i] << " ";
    }
}

void SWAP(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}