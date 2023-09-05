

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void helper(map<char, string>& dict, int idx, string A, vector<string>& ans, string res, int n)
{
    if (idx == n)
    {
        ans.push_back(res);
        return;
    }
    string str =  dict[A[idx]];
    for (auto i : str)
    {
        helper(dict, idx + 1, A, ans, res + i, n);
    }
}

vector<string> letterCombinations(string digits) {
    int n = digits.size();
    map<char, string> dict;

    dict['0'] = "";
    dict['1'] = "0";
    dict['2'] = "abc";
    dict['3'] = "def";
    dict['4'] = "ghi";
    dict['5'] = "jkl";
    dict['6'] = "mno";
    dict['7'] = "pqrs";
    dict['8'] = "tuv";
    dict['9'] = "wxyz";
    vector<string> ans;
    if (n == 0)
        return ans;
    helper(dict, 0, digits, ans, "", n);

    return ans;
}




int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


}


