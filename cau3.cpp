#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& a) {
    int n=a.size();
    bool swapped;
    for (int i=0;i<n-1;i++){
        swapped=false;
        for(int j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped =true;
            }
        }
        if(!swapped) break;
    }
}

//thuật toán bubble sort dễ cài đặt có thể dừng sớm khi sắp sếp đúng, nhưng cần hoán đổi nhiều
//thuật toán Selection Sort ổn định về số lần hoán đổi nhưng không tối ưu
//thuật toán Insertion Sort là có độ ổn định và tối ưu nhất
