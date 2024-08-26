#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    string str;
    cin >> str;
    int red = 0, blue = 0;
    for (auto c: str) {
        if (c == 'R') {
            red++;
        }
    }
    blue = n - red;


    int redMax = 0, blueMax = 0;

    for (int i = 1; i < n; ++i) {
        if (str.at(i - 1) != str.at(i)) {
            if(str.at(0) == 'R') {
                redMax = i;
            } else {
                blueMax = i;
            }
            break;
        }
    }

    for (int i = n - 2; i >= 0; --i) {
        if (str.at(i + 1) != str.at(i)) {
            int count = n - i - 1;
            if (str.at(n - 1) == 'R') {
                redMax = redMax > count ? redMax : count;
            } else {
                blueMax = blueMax > count ? blueMax : count;
            }
            break;
        }
    }

    red -= redMax;
    blue -= blueMax;

    cout << (red < blue ? red : blue);
}
