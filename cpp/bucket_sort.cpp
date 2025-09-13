// bucket sort algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(vector<float>& arr) {
    int n = arr.size();
    vector<vector<float>> buckets(n);
    for(int i=0; i<n; i++) {
        int idx = n * arr[i];
        buckets[idx].push_back(arr[i]);
    }
    for(int i=0; i<n; i++) sort(buckets[i].begin(), buckets[i].end());
    int idx = 0;
    for(int i=0; i<n; i++) {
        for(float x : buckets[i]) arr[idx++] = x;
    }
}

int main() {
    vector<float> arr = {0.897, 0.565, 0.656, 0.123, 0.665, 0.343};
    bucketSort(arr);
    for(float x : arr) cout << x << " ";
    return 0;
}
