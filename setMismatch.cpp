#include <iostream>
#include <vector>
using namespace std;

vector<int> find(vector<int> nums) {
    for (int i=0; i<nums.size(); i++){
        if (nums[i]==nums[i-1]){
            cout << "(" << i << "," << i+1 << ")";
        }
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,5,7};
    find(nums);
}
