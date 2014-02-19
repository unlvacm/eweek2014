# Problem 4: Fair Division of Coins
## *300 Points*

Given a bag with a maximum of 100 coins, determine how close the most fair division between two persons can be. This means that the difference between the amount each person obtains should be minimized. 

For example, if you are given a bag with two coins, both of value 50, then the fair division difference is 0. If you are given a bag with three coins of values 2, 2, and 5, then the fair division difference is 1. 

The value of a coin varies from 1 cent to 500 cents. It's not allowed to split a single coin.

### Input 
Input will consist of:

* a line with the number of problems *n*, followed by *n* times:
 	* a line with a non negative integer *m* (*m <= 100*) indicating the number of coins in the bag;
 	* a line with *m* numbers separated by one space, each number indicates the value of a coin.

### Output
The output consists of *n* lines. Each line contains the minimal positive difference between the amount the two persons obtain when they divide the coins from the corresponding bag.

### Assumptions
No error checking required. All input will be valid.

Program will be tested using Linux redirection. (e.g., $ ./a.out < sample-input.txt )

### Sample Input
```
2
3
2 3 5
4
1 2 4 6
```
### Sample Output

```
0
1
```