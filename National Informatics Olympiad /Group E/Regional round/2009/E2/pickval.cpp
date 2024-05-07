#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int previousNum,
        currentNum,
        nextNum;

    int peakNum = 0,
        valleNum = 0;

    cin >> previousNum >> currentNum >> nextNum;

    int firstNum = previousNum,
        secondNum = currentNum;

    while(true) {
       if(currentNum < previousNum && currentNum < nextNum) valleNum++;
       else if(currentNum > previousNum && currentNum > nextNum) peakNum++;

        int input;
        cin >> input;

        if(input == 0) break;

        previousNum = currentNum;
        currentNum = nextNum;
        nextNum = input;
    }

    if(nextNum < currentNum && nextNum < firstNum) valleNum++;
    else if(nextNum > currentNum && nextNum > firstNum) peakNum++;

    if(firstNum < nextNum && firstNum < secondNum) valleNum++;
    else if(firstNum > nextNum && firstNum > secondNum) peakNum++;

    cout << peakNum << " " << valleNum << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}