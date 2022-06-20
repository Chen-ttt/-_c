#include<vector>
#include<iostream>
#include<unordered_set>
using namespace std;

int getSum(int n){
    int sum = 0;
    while(n){
        sum += (n%10) * (n%10);
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    unordered_set<int> sum_list;
    int sum = n;

    while(1){
        if(sum_list.find(sum) != sum_list.end()){ // found! sum exists!
            return false;
        } else {
            sum_list.insert(sum);
            sum = getSum(sum);
            if(sum==1) break;
        }
    }
    return true;
}

int main()
{
    bool result = isHappy(19);
    cout<<result<<endl;
    return 0;
}

