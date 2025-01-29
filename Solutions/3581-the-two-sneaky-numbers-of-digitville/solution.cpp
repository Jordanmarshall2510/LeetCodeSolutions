class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> v;

        sort(nums.begin(), nums.end());

        for(size_t i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                v.push_back(nums[i]);
            }
        }

        return v;
    }
};
