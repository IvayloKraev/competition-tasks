#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

#define endl '\n'
#define squareMetersPerBox 16

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int l, w, h;

    cin >> l >> w >> h ;

    long long int surface = (l * h * 2) + (w * h * 2);

    cout << fixed << setprecision(0) << ceil(surface * 1.0 / squareMetersPerBox) << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}