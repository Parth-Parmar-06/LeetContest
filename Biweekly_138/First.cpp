#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        vector<int> n(4, 0);
        int idx = 3;
        int ans = 0;
        while (idx!=-1) {
            n[idx--] = min(min(num1%10, num2%10), num3%10);
            num1/=10; num2/=10; num3/=10;
        }
        idx = 0;
        while (idx != 4) ans = (ans*10) + n[idx++];
        return ans;
    }
};
int main() {
    Solution obj;
    int ans = obj.generateKey(987, 879, 798);
    cout << "Ans: " << ans;
    return 0;
}