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

    int apartmentNum = 0;
    for(int i = 0; i < 4; ++i){
        char floor[2], room[2], type;

        cin >> floor[0] >> floor[1] >> room[0] >> room[1] >> type;

        if(floor[0] != '0') cout << floor[0];
        cout << floor[1] << " ";

        if(type == 'A') apartmentNum++;
    }

    cout << apartmentNum << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}