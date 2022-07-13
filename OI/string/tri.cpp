#include<bits/stdc++.h>
using namespace std;
struct trie {
    int nex[1000][26],cnt;
    bool exist[1000];
    void insert(string s) {
        int p = 0;
        for(int i = 0;i<s.size();i++) {
            int c = s[i]-'a';
            if(!nex[p][c]) nex[p][c] = ++cnt;
            p = nex[p][c];
        }
        exist[p] = 1;
    }

    bool find(string s) {
        int p = 0;
        for(int i = 0;i<s.size();i++) {
            int c = s[i]-'a';
            if(!nex[p][c]) return 0;
            p = nex[p][c];
        }
        return exist[p];
    }
};
int main()
{
    trie r;
    r.insert("abcdefg");
}