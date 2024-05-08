#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

int thimbles[3] = {1, 2, 3};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while(true){
        char m;
        cin >> m;

        if(m == '.') break;

        if(m == 'A')
            swap(thimbles[0], thimbles[1]);
        else if(m == 'B')
            swap(thimbles[2], thimbles[1]);
        else if(m == 'C')
            swap(thimbles[0], thimbles[2]);
    }

    cout << thimbles[0] << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}