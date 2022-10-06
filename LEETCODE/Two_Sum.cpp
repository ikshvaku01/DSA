class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mm;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(mm.find(target - nums[i]) == mm.end()){
                mm.insert(make_pair(nums[i],i));
            }else{
                ans = {mm[target - nums[i]], i};
            }
            
        }
    return ans;
    }
};
