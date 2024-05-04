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

    int n, d, k;

    cin >> n >> d >> k;

    int sum = 1;

    for(int i = 0; i < k; i++)
        sum += ((i+1) * d) % n + 1;


    cout << sum << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}
