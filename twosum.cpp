#include<bits/stdc++.h>
using namespace std;

int longestSubarrayk(vector<int> &a, int k){
    int n = a.size();
    long long sum = 0;
    int maxlen = 0;

    unordered_map<long long, int> mp;
    mp[0] = -1;

    for(int i = 0; i < n; i++){
        sum += a[i];

        long long need = sum - k;

        if(mp.find(need) != mp.end()){
            int len = i - mp[need];
            maxlen = max(maxlen, len);
        }

        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }

    return maxlen;
}

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter value of K: ";
    cin >> k;

    vector<int> a(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Longest subarray length with sum K is: ";
    cout << longestSubarrayk(a, k);

    return 0;
}
