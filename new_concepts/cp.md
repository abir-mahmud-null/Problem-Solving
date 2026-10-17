```cpp
min(a,b);     // compares a and b then returns the smaller one
max(a,b);     // same thing but maximum

char a;
int b = a-"0";   // ASCII code to interger maybe idk but turns string to integer

string s;
cout<<s[0];  // using string as an array
cout<<s.size();

sort(start_iterator, end_iterator, custom_comparator);
sort(arr, arr + n);                                // example for the above statement
sort(v.begin(), v.end(), greater<int>());      // for vectors

cout<<(w < 0 ? "YES" : "NO")                       //condition ? value_if_true : value_if_false
  
accumulate( InputIt first, InputIt last, T init );

//if T init is zero then it takes everythhing in 32 bit, so you will need long long for 10**9 stuffs

```

## Important Conceptual Problems

[1468E](https://codeforces.com/problemset/problem/1468/E )   
Suppose the values of a1, a2, a3, a4 are sorted in non-descending order. Then the shorter side of the rectangle cannot be longer than a1, because one of the sides must be formed by a segment of length a1. Similarly, the longer side of the rectangle cannot be longer than a3, because there should be at least two segments with length not less than the length of the longer side. So, the answer cannot be greater than a1⋅a3.

It's easy to construct the rectangle with exactly this area by drawing the following segments:

- from (0,0) to (a1,0);  
- from (0,a3) to (a2,a3);  
- from (0,0)to (0,a3);  
- from (a1,0)to (a1,a4);  

So, the solution is to `sort` the sequence [a1,a2,a3,a4], and then `print a1⋅a3`.

[1765B](https://codeforces.com/problemset/problem/1765/B)

The first one is the condition on the number of characters: `n mod 3 ̸ = 2`, since after the first key press, we get the remainder 1 modulo 3, after the second key press, we get the remainder 0 modulo 3, then 1 again, then 0 — and so on, and we cannot get the remainder 2. Then we need to check that, in each pair of characters which appeared from the same key press, these characters are the same — that is, s2 = s3, s5 = s6, s8 = s9, and so on

[CSES Repetitions](https://cses.fi/problemset/task/1069/)  

Here we don't know how many characters are given, so we take input as string and use `.size()` to get the size of the string and run the code for that duration, then each time we take i iteration, such as:
for 1: s[0]!=s[1] then cur = 0; else cur++;
for 2: s[1]!=s[2] then cur = 0; else cur++;

```cpp
int main() {
    string s;
    cin >> s;
    int n = s.size();
    int cur = 1;
    int res = 1;
    for (int i = 1; i < n; i++) {
        if (s[i - 1] != s[i]) cur = 0;
        cur++;
        res = max(res, cur);
    }
    cout << res << "\n";
}
```
