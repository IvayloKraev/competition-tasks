#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int result = 1;
    int oldA, oldB, oldResult = 0;

    cin >> oldA >> oldB;

    for(int i = 0; i < n - 1; ++i){
        int a, b;
        cin >> a >> b;

        if((a <= oldA && b <= oldB) || (a <= oldB && b <= oldA)) ++result, oldA = a, oldB = b;
        else {
            if(result > oldResult) oldResult = result;
            result = 1, oldA = a, oldB = b;
        }
    }

    if(result > oldResult) oldResult = result;


    cout << oldResult << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}