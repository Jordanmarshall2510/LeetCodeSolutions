class Solution {
public:
    vector<int> splitNums(int n) {
        vector<int> nums;

        string intString = to_string(n);

        for (char &c : intString) {
            nums.push_back((int) c - 48);
        }

        return nums;
    }

    bool isHappy(int n) {
        int total = 0;
        int number = n;
        int retries = 10;

        while(retries--)
        {
            vector<int> v = splitNums(number);
            for(int i = 0; i < v.size(); i++)
            {
                total += (v[i] * v[i]);
            }

            if(total != 1)
            {
                std::cout << number << ": " << total << endl;
                number = total;
                total = 0;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};
