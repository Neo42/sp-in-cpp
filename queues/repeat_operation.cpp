#include <bits/stdc++.h>;
using namespace std;

int x, k, y, front = 1, rear = 0, q[100001];

int main() {
  scanf("%d%d", &x, &k);
  q[++rear] = x;

  for (int i = 1; i <= k; i++) {
    y = q[front];
    printf("%d\n", y);
    ++front;
    q[++rear] = 2 * y;
    q[++rear] = 2 * y + 1;
  }
}