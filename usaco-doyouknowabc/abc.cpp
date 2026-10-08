#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    vector<int> nums(7);

    for(int i=0; i < 7; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    // the smallest int has to be A
    int a = *nums.begin();
    int b = *(nums.begin()+1);
    int c = (nums.back())-b-a;

    printf("%d %d %d", a, b, c);



    return 0;
}