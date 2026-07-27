class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int  x: nums){
            if(mp.count(x)==true){  //have i seen this before;
                return true;
            }
            mp[x] = 1; //if no, insert ele
        }
        return false;
    }
};