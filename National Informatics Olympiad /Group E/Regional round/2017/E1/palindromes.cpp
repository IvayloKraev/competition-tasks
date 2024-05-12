#include <iostream>
#include <cmath>
#include <cstdio>

#define endl '\n'

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int resultI, resultJ, resultPalindrome = 0;

    for (int i = n - 1; i > 0; --i) {
        for (int j = i; j > 0; --j) {
            int palindrome = i * j,
                    numbers = log10(palindrome) + 1;
            int del = 1;

            bool isPalindrome = true;

            while (true) {
                if (del > numbers / 2) break;

                int a = static_cast<int>(palindrome / pow(10, del - 1)) % 10,
                        b = static_cast<int>(palindrome / pow(10, numbers - del)) % 10;

                if (a != b) {
                    isPalindrome = false;
                    break;
                }

                del++;
            }

            if(isPalindrome && palindrome > resultPalindrome) resultI = i, resultJ = j, resultPalindrome = palindrome;
            else if(isPalindrome && palindrome == resultPalindrome && j < resultJ) resultI = i, resultJ = j, resultPalindrome = palindrome;
        }
    }

    cout << resultJ << " " << resultI << endl << resultPalindrome << endl;


    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}