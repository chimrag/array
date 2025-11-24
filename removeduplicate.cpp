#include<bits/stdc++.h>
using namespace std;
int removeduplicate(vector<int> &arr,int n){
    int i=0;
    for ( int j=1; j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
        
  
    }
    return i+1;

}
int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5};
    int newLength = removeduplicate(arr, arr.size());

    cout << "After removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
}
