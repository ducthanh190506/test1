#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
//câu1
void findPairsWithSumK(const vector<int>& arr, int K) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    for (int num : arr) {
        int complement = K - num;
        if (freq[complement] > 0) {
            if (num == complement && freq[num] < 2) {
                continue;
            }
            cout << num << " " << complement << endl;
            freq[num]--;
            freq[complement]--;
        }
    }
}
int main() {
    int N, K;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> K;
    findPairsWithSumK(arr, K);
    return 0;
}
