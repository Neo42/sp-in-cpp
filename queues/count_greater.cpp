#include <bits/stdc++.h>
using namespace std;

int n, x, front = 1, rear = 0, q[100001];

int main() {
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &x);

    // Solution 1: Count greater ones
    // q[++rear] = x;
    // int m = 0;
    // for (int j = 1; j < rear; j++) {
    //   if (q[j] >= x - 5) ++m;
    // }
    // printf("%d ", m);

    // Solution 2:
    // Pop all smaller and ascending therefore contiguous ones
    for (; rear >= front && q[front] < x - 5; ++front)
      ;

    // count the rest
    printf("%d ", rear - front + 1);

    // push x at last
    q[++rear] = x;
  }
}
