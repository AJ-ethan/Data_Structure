#include <bits/stdc++.h>
#include<iostream>

using namespace std;
 
int dp[1001][1001]; // 2D matrix
bool isPal(string s, int i, int j)
{
    if (i > j)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];

    if (s[i] != s[j])
        return dp[i][j] = 0;
    return dp[i][j] = isPal(s, i + 1, j - 1);
}
 
int countSubstrings(string s)
{
    memset(dp, -1, sizeof(dp));
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (isPal(s, i, j))
                count++;
        }
    }

    return count;
}
 
// Driver code
int main()
{
 
    string s = "abbaeae";
 
    cout << countSubstrings(s);
 
    //"bb" , "abba" ,"aea", "eae" are
    // the 4 palindromic substrings.
 
    // This code is contributed by Bhavneet Singh
 
    return 0;
}
