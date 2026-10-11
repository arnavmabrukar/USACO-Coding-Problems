
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int,int>> beforeAfter(4);

    for (int i = 0; i < 4; i++) {
        int before, after;
        cin >> before >> after;
        beforeAfter[i] = {before, after};
    }

    int gold2plat = beforeAfter[3].second
                  - beforeAfter[3].first;

    int silver2gold = beforeAfter[2].second
                    - beforeAfter[2].first
                    + gold2plat;

    int bronze2silver = beforeAfter[1].second
                      - beforeAfter[1].first
                      + silver2gold;

    cout << bronze2silver << endl;
    cout << silver2gold << endl;
    cout << gold2plat << endl;

    return 0;
}
