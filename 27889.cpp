#include <iostream>
#include <string>

using namespace std;

const string nlcs = "North London Collegiate School";

int main(){
    string abbr;
    cin >> abbr;

    if(abbr.compare("NLCS") == 0){
        cout << "North London Collegiate School" << endl;
    } else if(abbr.compare("BHA") == 0){
        cout << "Branksome Hall Asia" << endl;
    } else if(abbr.compare("KIS") == 0){
        cout << "Korea International School" << endl;
    } else if(abbr.compare("SJA") == 0){
        cout << "St. Johnsbury Academy" << endl;
    }

    return 0;
}