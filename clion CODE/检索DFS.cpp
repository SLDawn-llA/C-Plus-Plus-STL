
//
// Created by Administrator on 2024/2/2.
//#include<iostream>

    /*int x,y;
    char z;
    scanf("%d",&x);
    scanf("%d",&z);
    scanf("%d",&y);
    if(z= (char) "DFS")
        cout<<""*/
/*#include <iostream>
#include <string>
using namespace std;

pair<int, int> checkSubsequence(const string& s) {
    int containsDFS = s.find("DFS") != string::npos ? 1 : 0;
    int containsdfs = s.find("dfs") != string::npos ? 1 : 0;
    return make_pair(containsDFS, containsdfs);
}

int main() {
    int numTests;
    cout << "Enter the number of tests: ";
    cin >> numTests;

    for(int i = 0; i < numTests; i++) {
        string testString;
        cout << "Enter the test string: ";
        cin.ignore(); // Clear the input buffer
        int y;
        cin >>y;
        getline(cin, testString);
        pair<int, int> result = checkSubsequence(testString);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}*/
//北大 2
/*#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    for (auto t : {"DFS", "dfs"}) {
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (k < 3 && s[i] == t[k]) {
                k++;
            }
        }
        std::cout << (k == 3) << " ";
    }
    std::cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
//浙大 1
#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) (void)20240202
#endif
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    for (int ti = 0; ti < t; ti += 1) {
        string s;
        cin >> s >> s;
        auto f = [&](string s, string t) {
            int i = 0;
            for (char c : s) {
                if (i < (int)t.size() and t[i] == c) { i += 1; }
            }
            return i == (int)t.size();
        };
        cout << f(s, "DFS") << " " << f(s, "dfs") << "\n";
    }
}
*/







