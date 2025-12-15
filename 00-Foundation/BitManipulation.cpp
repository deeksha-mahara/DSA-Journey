/*
 * Problem: Number of 1 Bits (LeetCode #191)
 *
 * Approach: Brian Kernighan’s Algorithm
 * Instead of checking every bit (which takes 32 loops), we only loop
 * as many times as there are 1s.
 *
 * Key Logic: n & (n-1) always flips the least significant set bit to 0.
 *
 * Complexity:
 * Time: O(k) where k is the count of 1s (Much faster than O(32) for sparse numbers).
 * Space: O(1)
 */

#include <iostream>
#include <cstdint> 

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0) {
            n = n & (n - 1); // Removes the rightmost 1
            count++;
        }
        return count;
    }
};

