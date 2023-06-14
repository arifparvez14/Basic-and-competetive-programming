#include <bits/stdc++.h>
using namespace std;

int arr[101];

int main (){
    freopen ("in.txt", "r", stdin);
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", arr + i);

    for (int i = 0; i < n; i++)
        printf ("%d ", arr[i]);
    printf ("\n");

    int iteration = 0;

    for (int i = 0; i < n - 1; i++){
        iteration++;
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap (arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (!flag) break;
    }

    for (int i = 0; i < n; i++)
        printf ("%d ", arr[i]);
    printf ("\n");

    printf ("Iteration : %d\n", iteration);

    return 0;
}
