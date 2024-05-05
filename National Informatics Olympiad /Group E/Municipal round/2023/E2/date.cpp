#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int d, m, y;

    cin >> d >> m >> y;

    ++d;

    if(m == 2){
        if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
            if(d == 30)  d = 1, ++m;
        }
        else if (d == 29) d = 1, ++m;
    } else if(m == 12) {
        if(d == 32) d = 1, m = 1, ++y;
    } else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10){
        if(d == 32) d = 1, ++m;
    } else {
        if(d == 31) d = 1, ++m;
    }

    cout << d << " " << m << " " << y << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}