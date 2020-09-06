class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> ans;
        vector<int> b(2,-1);
        for(int i=0;i<nums.size();i++){
            if(ans.count(target-nums[i])>0){
                b[0]=ans[target-nums[i]];
                b[1]=i;
                break;
            }
            ans[nums[i]]=i;
        }
        return b;
    }
};