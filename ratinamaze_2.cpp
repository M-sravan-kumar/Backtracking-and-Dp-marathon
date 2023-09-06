
bool findPath(vector<vector<int>>& matrix, int r, int c, string res, vector<string>& ans, int n)
{
    if (r < 0 || c < 0 || r >= n || c >= n || matrix[r][c] == 0 || matrix[r][c] == 2)
        return false;

    if (r == n - 1 && c == n - 1)
    {
        ans.push_back(res);
        return true;
    }

    if (matrix[r][c] == 1)
    {
        matrix[r][c] = 2;
        bool op1, op2, op3, op4;
        op1 = findPath(matrix, r - 1, c, res + 'U', ans, n);
        op2 = findPath(matrix, r + 1, c, res + 'D', ans, n);
        op3 = findPath(matrix, r, c - 1, res + 'L', ans, n);
        op4 = findPath(matrix, r, c + 1, res + 'R', ans, n);

        matrix[r][c] = 1;
        return op1 || op2 || op3 || op4;

    }

}

vector<string> findPath(vector<vector<int>> &m, int n)
{

    vector<string> ans;

    bool val = findPath(m, 0, 0, "", ans, n);

    return ans;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


}


