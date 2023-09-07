class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        while (i < strs[0].length()) {
            for(auto iterator: strs) {
                if(iterator[i] != strs[0][i]){
                    goto out_of_2_loops;
                }
            }
            i++;
        }
    out_of_2_loops:
    return strs[0].substr(0, i);
    }
};