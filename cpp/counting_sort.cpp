// counting sort algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countingSort(vector<int>& arr) {
    int maxEl = *max_element(arr.begin(), arr.end());
    int minEl = *min_element(arr.begin(), arr.end());
    int range = maxEl - minEl + 1;

    vector<int> count(range), output(arr.size());
    for(int i=0; i<arr.size(); i++) count[arr[i]-minEl]++;
    for(int i=1; i<count.size(); i++) count[i] += count[i-1];
    for(int i=arr.size()-1; i>=0; i--) {
        output[count[arr[i]-minEl]-1] = arr[i];
        count[arr[i]-minEl]--;
    }
    arr = output;
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    countingSort(arr);
    for(int x : arr) cout << x << " ";
    return 0;
}
