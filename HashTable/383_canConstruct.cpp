#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    int a[26] = {0};
    for(char c:magazine){
        a[c-'a']++;
    }
    for(char c:ransomNote){
        a[c-'a']--;
    }
    for(int i=0; i<26; i++){
        if(a[i]<0) return false;
    }
    return true;
}

int main()
{
    string a = "aa";
    string b = "ab";
    bool result = canConstruct(a, b);
    cout<<result<<endl;
    return 0;
}

