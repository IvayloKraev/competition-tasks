#include <iostream>
#include <cstdio>
#include <cmath>

#define endl '\n'

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    int boxesNumber = 1;

    if(!(a + b <= e || a + c <= e || a + d <= e)) boxesNumber++;
    if(!(b + c <= e || b + d <= e)) boxesNumber++;
    if(c + d > e) boxesNumber++;

    cout << boxesNumber << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}