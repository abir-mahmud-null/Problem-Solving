```cpp
min(a,b); // compares a and b then returns the smaller one
max(a,b); // same thing but maximum
sort(start_iterator, end_iterator, custom_comparator);
sort(vec.begin(), vec.end(), greater<int>()); // for vectors
cout<<(w < 0 ? "YES" : "NO") //condition ? value_if_true : value_if_false

```

## Important Conceptual Problems

[1468E](https://codeforces.com/problemset/problem/1468/E )   
Suppose the values of a1
, a2
, a3
, a4
 are sorted in non-descending order. Then the shorter side of the rectangle cannot be longer than a1
, because one of the sides must be formed by a segment of length a1
. Similarly, the longer side of the rectangle cannot be longer than a3
, because there should be at least two segments with length not less than the length of the longer side. So, the answer cannot be greater than a1⋅a3
.

It's easy to construct the rectangle with exactly this area by drawing the following segments:

- from (0,0) to (a1,0);  
- from (0,a3) to (a2,a3);  
- from (0,0)to (0,a3);  
- from (a1,0)to (a1,a4);  

So, the solution is to sort the sequence [a1,a2,a3,a4]
, and then print a1⋅a3
.
