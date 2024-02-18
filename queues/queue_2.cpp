#include <bits/stdc++.h>

using namespace std;

int n, front = 1, rear = 0, q[100001];  // ++rear >= 1
char str[1011];

int main() {
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%s", str);
    if (str[2] == 's') {
      int x;
      scanf("%d", &x);
      q[++rear] = x;
    } else if (str[2] == 'p') {
      ++front;
    } else {
      int x;
      scanf("%d", &x);
      printf("%d\n", q[front + x - 1]);
    }
  }
}
