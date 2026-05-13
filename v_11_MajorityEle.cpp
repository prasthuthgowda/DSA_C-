#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pairSum(vector<int> nums , int target){
    vector<int> ans;
    int n = nums.size();

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i] + nums[j] == target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }
    // optimized 

    int i = 0, j = n-1;
    sort(nums.begin() , nums.end());
    while(i < j){
        int pairSum = nums[i] + nums [j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {2,7,11,15};
    int taget = 26;

    vector<int> ans = pairSum(nums,taget);
    cout << ans[0] << " , " <<ans[1] << endl;
    return 0;
}
