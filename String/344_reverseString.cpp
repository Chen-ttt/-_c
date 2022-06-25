#include<iostream>
using namespace std;

void reverseString(string s) {
    int len = s.size()/2;
    char temp;
    int front = 0, end = s.size()-1;
    for (int i = 0; i < len; ++i) {
        temp = s[front];
        s[front++] = s[end];
        s[end--] = temp;
    }
}

int main()
{
    //vector<char> a = {"h","e","l","l","o"};
    string a = "hello";
    reverseString(a);
    cout<<a<<endl;
    return 0;
}

