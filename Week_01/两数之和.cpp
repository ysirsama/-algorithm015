class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int> ans;
        vector<int> b(2, -1);
        for(int i =0;i<nums.size();i++)
            ans.insert(map<int,int>::value_type(nums[i],i));
        for(int i =0;i<nums.size();i++)
        {
            if(ans.count(target-nums[i])>0&&(ans[target-nums[i]]!=i))
            {
                b[0]=i;
                b[1]=ans[target-nums[i]];
                break;
            }
        }
        return b;
    }
};