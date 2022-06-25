#include<iostream>
using namespace std;

void swapK(char* s, int front, int end) {
    int len = (end-front+1)/2;
    char temp;
    for (int i = 0; i < len; ++i) {
        temp = s[front];
        s[front++] = s[end];
        s[end--] = temp;
    }
}

string reverseStr(string s, int k) {
    // base指针每次往后移动2k个字符，但只反转前k个，跳过后半部分
    for (int base = 0; base < s.length(); base+=(2*k)) {
        // 比较剩余字符串的长度
        // 大于k则反转k个字符
        // 小于k则反转剩余所有字符
        swapK(&s[0], base, base+min(k-1, int(s.length()-base-1)));
    }
    cout<<s<<endl;
}

int main()
{
    string a = "heapoujmnls";
    a = reverseStr(a, 4);
    return 0;
}

