class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector< int > result ; 

        unordered_map<int , int > ans ;
        for(int i = 0  ; i < nums.size();i++){
            int sum = target - nums[i];
            if(ans.find(sum)!=ans.end()){
                result.push_back(ans[sum]);
                result.push_back(i);
                return result ; 
            }
            ans[nums[i]]=i;


        }
        return result ;
    }
};