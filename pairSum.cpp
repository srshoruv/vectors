#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum (vector<int> vec, int target) {
    int start = 0;
    int end = vec.size() - 1;
    int sum = 0;
    vector<int> ans;

    while (start < end){
        sum = vec[start] + vec[end];
        if ( sum == target) {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        } else if ( sum > target) {
            end--;
        } else {
            start++;
        }
    } return ans;
}

int main(){
    vector<int> vec = {2,5,7,9,11,13,15};
    int target = 9;

    vector<int> ans = twoSum(vec, target);
    cout << "(" << ans[0] << "," << ans[1] << ")";
    
}