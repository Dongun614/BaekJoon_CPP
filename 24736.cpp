#include <iostream>

using namespace std;
//스코어 지표를 int 배열로 선언
//team_a, team_b라는 종합 점수 저장할 변수 선언
//반복문 통해서 5번 temp 값을 받아서 int 배열 인덱스랑 i값 이용해서 종합 점수 누산하기
//이후 두 값 출력

int main(){
    int team_score[2] = {0,};
    int score[6] = {6, 3, 2, 1, 2};
    int temp;

    for(int i=0; i<2; i++){
        for(int j=0; j<6; j++){
            cin >> temp;
            temp = temp * score[j];
            team_score[i] += temp;
        }
    }

    cout << team_score[0] << " " << team_score[1] << endl;

    return 0;
}