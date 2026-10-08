#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a; int b; int x; int y; cin >> a >> b >> x >> y;

    int tractor = abs(b-a);
    int teleport1 = abs(x-a)+abs(y-b);
    int teleport2 = abs(x-b)+abs(y-a);

    int bestDist = min({tractor, teleport1, teleport2});

    cout << bestDist << endl;
    
    return 0;
}