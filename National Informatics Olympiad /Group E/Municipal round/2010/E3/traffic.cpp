#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

const int redTime = 40;
const int yellowTime = 4;
const int greenTime = 60;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y, z;

    cin >> x >> y >> z;

    int totalSeconds = ( ((x < 8 ? 24 : 0 ) + x - 8) * 60 + y) * 60 + z,
        currentSecond = 0;


    while (true){
        if(currentSecond > totalSeconds) {
            cout << "izchakai" << endl;
            break;
        }
        currentSecond += greenTime;
        if(currentSecond > totalSeconds) {
            cout << "premini" << endl;
            break;
        }
        currentSecond += yellowTime;
        if(currentSecond > totalSeconds) {
            cout << "izchakai" << endl;
            break;
        }
        currentSecond += redTime;
        if(currentSecond > totalSeconds) {
            cout << "spri" << endl;
            break;
        }
        currentSecond += yellowTime;
    }


    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}