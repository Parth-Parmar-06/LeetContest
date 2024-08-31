#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string stringHash(string s, int k) {
        int n = s.size();
        int p = n/k;
        vector<int> hashValues(p, 0);
        string result = "";
        int idx = 0;
        for (int i=0; i<p; i++) {
            for (int j=idx; j<idx+k; j++) {
                hashValues[i] = hashValues[i]+(s[j]-'a');
            }
            idx+=k;
            result += ((hashValues[i]%26) + 'a');
        } return result;
    }
};
int main() {
    Solution obj;
    string ans = obj.stringHash("abcd", 2);
    cout << "Ans: " << ans;
    return 0;
}