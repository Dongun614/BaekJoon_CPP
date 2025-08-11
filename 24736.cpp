#include <iostream>

using namespace std;

#define TEAM_NUM 2
#define TEAM_A 0
#define TEAM_B 1

#define SCORE_TYPE 5
#define TOUCH_DOWN 6
#define FIELD_GOAL 3
#define SAFETY 2
#define POINT_AFTER 1
#define TWO_POINT_CONVERSION 2


int main(){
    int team_score[TEAM_NUM] = {0,};
    int score[SCORE_TYPE] = {TOUCH_DOWN, FIELD_GOAL, SAFETY, POINT_AFTER, TWO_POINT_CONVERSION};
    int temp;

    for(int i=0; i<TEAM_NUM; i++){
        for(int j=0; j<SCORE_TYPE; j++){
            cin >> temp;
            temp = temp * score[j];
            team_score[i] += temp;
        }
    }

    cout << team_score[TEAM_A] << " " << team_score[TEAM_B] << endl;

    return 0;
}