class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
       vector<vector<int>> bucket(nums.size() + 1);

        for(int x: nums){
            mp[x]++;  //store frequency
            
        }

        for(auto it:mp){
            int number = it.first;
            int frequency = it.second;
            bucket[frequency].push_back(number);   //store in bucket according to frequency
        }
        vector<int> ans;
        for(int i = bucket.size()-1; i>0; i--){  //traverse the bucket 
          for(int nums: bucket[i])
          ans.push_back(nums);  // push element of bucket[vector[ele]]
          if(ans.size()==k){
                return ans;
            } 
        }
        return ans;
    }
};
