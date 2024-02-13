#include <bits/stdc++.h>
using namespace std;

int popped, lower, n, top, s[100001];

int main() {
  scanf("%d", &n);
  lower = 0;
  top = 0;
  for (int i = 1; i <= n; ++i) {
    scanf("%d", &popped);
    if (s[top] != popped) {
      for (int j = lower + 1; j <= popped; ++j) {
        s[top] = j;
        printf("push %d\n", j);
      }
    }
    printf("pop\n");
    --top;
    lower = popped;
  }
}