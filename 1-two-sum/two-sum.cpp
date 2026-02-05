#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> store;
        for (int i = 0; i < arr.size(); i++) {
            int need = target - arr[i];
            if (store.count(need)) {
                return {store[need], i};
            }

            store[arr[i]] = i;
        }
        return {};
    }
};
