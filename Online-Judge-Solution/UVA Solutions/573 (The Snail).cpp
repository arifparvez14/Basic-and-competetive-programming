#include<bits/stdc++.h>
using namespace std;
int main() {
    float h, u, d, f, climb;
    int day;
    while((cin>>h>>u>>d>>f) && h!=0) {
        f = (u*f)/100;
        climb = u;
        day = 1;
        while(1) {
            if (climb > h) {
                printf("success on day %d\n",day);
                break;
            }
            climb -= d;
            if (climb < 0) {
                printf("failure on day %d\n",day);
                break;
            }
            u = u - f;
            if(u < 0) u = 0;
            climb += u;
            day++;
        }
    }
    return 0;
}
