// pigeonhole sort algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pigeonholeSort(vector<int>& arr) {

    if (arr.empty()) return;
    int maxEl = *max_element(arr.begin(), arr.end());
    int minEl = *min_element(arr.begin(), arr.end());
    int range = maxEl - minEl + 1;
    if (range <= 0) return;
    vector<vector<int>> pigeonholes(range);
    for (int i = 0; i < arr.size(); i++) {
        pigeonholes[arr[i] - minEl].push_back(arr[i]);
    }
    int index = 0;
    for (int i = 0; i < range; i++) {
        for (int val : pigeonholes[i]) {
            arr[index++] = val;
        }
    }
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    pigeonholeSort(arr);
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}