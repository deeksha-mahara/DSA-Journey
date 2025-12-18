/*
 * Problem: Power of Two (LeetCode #231)
 *
 * Approach: Bitwise AND Logic
 * 1. A number is a power of two if it has exactly ONE bit set to '1'.
 * Examples: 4 (100), 8 (1000), 16 (10000).
 * 2. The expression 'n & (n-1)' always removes the rightmost '1'.
 * 3. If n is a power of two, removing that single '1' should leave 0.
 *
 * Complexity:
 * Time: O(1) - No loops, just one operation.
 * Space: O(1)
 */

#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && ((n & (n - 1)) == 0);
    }
};

int main() {
    Solution sol;
    int n = 16;
    std::cout << "Input: " << n << std::endl;
    std::cout << "Is Power of Two? " << (sol.isPowerOfTwo(n) ? "Yes" : "No") << std::endl;
    return 0;
}