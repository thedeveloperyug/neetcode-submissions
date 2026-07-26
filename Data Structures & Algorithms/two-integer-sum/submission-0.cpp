// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int i=0;
//         int j=1;
//         for(i : nums.size()-1){
//             for(j:nums.size()){
//                 if(nums[i]+nums[j]==target && i!=j){
//                     return i, j;
//                 }
//             }
//         }
//     }
// };
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]+nums[j]==target && i!=j){
                    return {i, j};
                }
            }
        }
    }
};
