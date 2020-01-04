#include <bits/stdc++.h>
using namespace std;

int arr[51];
int temp[51];

void merge_now (int st, int ed){
    int mid = (st + ed) / 2;
    int cnt = 0, i, j;
    for (i = st, j = mid + 1; i <= mid && j <= ed; ){
        if (arr[i] < arr[j]){
            temp[cnt++] = arr[i];
            i++;
        }
        else{
            temp[cnt++] = arr[j];
            j++;
        }
    }

    while (i <= mid){
        temp[cnt++] = arr[i];
        i++;
    }

    while (j <= ed){
        temp[cnt++] = arr[j];
        j++;
    }

    int k = 0;
    for (int i = st; i <= ed; i++){
        arr[i] = temp[k];
        k++;
    }
}

void mergesort (int st, int ed){
    if (st == ed) return;
    int mid = (st + ed) / 2;
    mergesort (st, mid);
    mergesort (mid + 1, ed);
    merge_now (st, ed);
}

int main (){
    freopen ("in.txt", "r", stdin);
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", arr + i);
    mergesort (0, n - 1);
    for (int i = 0; i < n; i++)
        printf ("%d ", arr[i]);
    printf ("\n");
    return 0;
}

