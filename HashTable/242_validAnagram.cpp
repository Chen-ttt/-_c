#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length()!=t.length()) return false;

    int count[26] = {0};
    for(int i=0; i<s.length(); i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for (int j=0; j<26; j++) {
        if(count[j]!=0){
            return false;
        }
    }
    return true;
}

int main()
{
    string a = "rat";
    string b = "car";
    bool result = isAnagram(a, b);
    cout<<result<<endl;
    return 0;
}

