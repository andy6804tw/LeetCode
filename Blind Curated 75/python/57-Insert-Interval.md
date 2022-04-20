# 57. Insert Interval (Python)
## Problem
You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

**Example 1:**
```
Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]
```

**Example 2:**
```
Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
Output: [[1,2],[3,10],[12,16]]
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
```

## Constraints:
- 0 <= intervals.length <= 104
- intervals[i].length == 2
- 0 <= starti <= endi <= 105
- intervals is sorted by starti in ascending order.
- newInterval.length == 2
- 0 <= start <= end <= 105

## Solution 1.
這一解法分成三步驟：

1. 將小於 newInterval 的區間塞入 newList 直到 newInterval[0]>intervals[i][1]
2. 將有覆蓋到 newInterval 的區間合併，同時找出 min start 和 max end
3. 塞入剩下未涵蓋的區間

- 串列處理、Graph
- Run Time: 63 ms

```py
class Solution(object):
    def insert(self, intervals, newInterval):
        
        newList=[]
        i=0
        # add all the intervals ending before newInterval starts
        while i<len(intervals) and newInterval[0]>intervals[i][1]:
            newList.append(intervals[i])
            i+=1
        # merge all overlapping intervals to one considering newInterval
        while i<len(intervals) and newInterval[1]>=intervals[i][0]:
            newInterval = [min(newInterval[0],intervals[i][0]), max(newInterval[1],intervals[i][1])]
            i+=1
        newList.append(newInterval) # add the union of intervals we got
        # add all the rest
        while i<len(intervals):
            newList.append(intervals[i])
            i+=1
            
        return newList
```