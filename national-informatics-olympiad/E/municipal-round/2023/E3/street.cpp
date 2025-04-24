#include <iostream>
#include <cstdio>

#define endl '\n';

using namespace std;


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, evenN = 0, oddN = 0;

    int previousEven = 0,
        previousOdd = 0;

    cin >> n;

    for(int i = 0; i < n; ++i){
        int input;
        cin >> input;
        if(input % 2 == 1) {
            oddN += (input - previousOdd - 1) / 2;
            previousOdd = input;
        } else {
            evenN += (input - previousEven - 2) / 2;
            previousEven = input;
        }
    }

    cout << oddN << " " << evenN << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}