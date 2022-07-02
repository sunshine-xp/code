#include<bits/stdc++.h>
using namespace std;



void Binary_Insert_sort(int arry[], int first, int end) {
    for(int i = first + 1; i <= end; i++) {
        int low = first, high = i - 1;
        while(low <= high) {
            int mid = (low + high) >> 1;
            if(arry[mid] > arry[i]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        int key = arry[i];
        for(int j = i; j > high + 1; j--) {
            arry[j] = arry[j - 1];
        }
        arry[high + 1] = key;
    }
}