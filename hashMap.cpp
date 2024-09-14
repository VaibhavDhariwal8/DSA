#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // iterate in the map
    // for(auto it:mpp){
    //     cout << it.first << "->"<< it.second << endl;
    // }

    int q;
    cin >>q;
    while(q--){
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] <<endl;
    }
    return 0;
}

// unordered_map O(1) -> avg and best case  O(N) -> worst case
// map O(log(N)) -> avg best and worst case