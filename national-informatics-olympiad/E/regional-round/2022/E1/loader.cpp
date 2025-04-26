#include <cmath>
#include <cstdio>
#include <ios>
#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, n;
    cin >> a >> b >> n;

    int journies = 0, aJournies = 0, bJournies = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= a) aJournies++;
        else if (x <= b) bJournies++;
        else journies++;
    }

    journies += bJournies;

    if (aJournies >= bJournies) journies += ceil((aJournies - bJournies) * 1.0 / 2);

    cout << journies << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}
