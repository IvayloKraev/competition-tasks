#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int s, p, r;

    cin >> s >> p >> r;

    int distance = 0, days = 0;

    while (true){
        distance += p;

        if(distance >= s) break;

        days++;
        distance -= r;
    }

    cout << days << " " << ((days + 3) % 7) << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}