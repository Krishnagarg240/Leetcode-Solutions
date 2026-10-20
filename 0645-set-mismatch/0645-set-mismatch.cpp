class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++)
            nums[i]--;

        for(int i = 0; i < n; i++) {
            nums[nums[i] % n] += n;
        }

        vector<int> ans(2);

        for(int i = 0; i < n; i++) {
            if(nums[i] / n == 2)
                ans[0] = i + 1;
            else if(nums[i] / n == 0)
                ans[1] = i + 1;
        }

        return ans;
    }
};