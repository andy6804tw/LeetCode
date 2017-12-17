# 292. Nim Game (C Language)

## Problem

You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.

Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.

For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.

Credits:
Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.




##### Solution 1.

這題是在兩個玩家情況下輪流拿石頭，拿到最後一個獲勝，題目有說到剩 4 顆石頭必輸，所以要盡可能想辦法讓對方拿到 4 顆(4的倍數)，以下舉幾個所有可能情況。
- 1~3顆全拿(獲勝)
- 4顆(輸)
  - 我方拿1、2、3顆對方都獲勝
- 5顆(獲勝)
  - 我方拿1顆對方剩4顆情況
- 6顆(獲勝)
  - 我方拿2顆對方剩4顆情況
- 7顆(獲勝)
  - 我方拿3顆對方剩4顆情況
- 8顆(輸)
  - 我方拿1、2、3顆對方都獲勝
.
.
.
重複

- 數學解法
- Run Time: 0 ms
- 時間複雜度: O(1)
- 空間複雜度: O(1)

```c
bool canWinNim(int n) {
    if(n<4)
        return 1;
    else
        return (n%4)!=0;
}
```
