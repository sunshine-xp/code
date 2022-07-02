#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arry[], int left, int right) {
    for(int i = left; i < right; i++) {
        for(int j = i; j < right; j++) {
            if(arry[j] > arry[j + 1]) {
                swap(arry[j], arry[j + 1]);
            }
        }
    }
}