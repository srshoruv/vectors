#include <iostream>
#include <vector>
using namespace std;

void mostWater(vector<int> heights) {
    int st = 0;
    int end = heights.size() - 1;
    int mid = (st + end) / 2;
    int leftMax = st, rightMax = mid;

    while (st < mid) {
        leftMax = max(leftMax,heights[st]);
        st++;
    }

    while (mid <= end) {
        rightMax = max(rightMax,heights[mid]);
        mid++;
    }

    int result = max(leftMax, rightMax);
    cout << result;

    
}

int main() {
    vector<int> heights = {1,8,6,2,5,4,8,3,7};
    mostWater(heights);
}