# [1512. Number of Good Pairs](https://leetcode.com/problems/number-of-good-pairs/)

Given an array of integers `nums`, return *the number of **good pairs***.

A pair `(i, j)` is called *good* if `nums[i]==nums[j]` and `i`<`j`.

<br>

#### Example 1:
```
Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
```
<br>

#### Example 2:
```
Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.
```
<br>

#### Example 3:
```
Input: nums = [1,2,3]
Output: 0
```
<br>

#### Constraints:
- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 100`
