class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for (size_t i = 0; i < operations.size(); i++) {
            if ((operations[i] == "++X") || (operations[i] == "X++")) {
                x++;
            } else if ((operations[i] == "--X") || (operations[i] == "X--")) {
                x--;
            }
        }

        return x;
    }
};
