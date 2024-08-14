#include <iostream>
#include <vector>
using namespace std;

vector<int> sum(vector<int> nums) {
    
    for (int i=0; i<nums.size(); i++){
        for (int j=++i; j<nums.size(); j++ ) {
            for (int k=++j; k<nums.size(); k++) {
                if (i != j && i != k && i != k && i != k && nums[i] + nums[j] + nums[k] == 0) {
                    cout << "(" << nums[i] << "," << nums[j] << "," << nums[k] << ")";
                    
                    cout << endl;
                   
                } 
            }
        }

    }
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    sum(nums);
}
