#include <bits/stdc++.h>
using namespace std;

// Based on the number on the first line in the input and the popped numbers on
// the second line infer the operation sequence

int n, top, x, l, s[100001];

int main() {
  scanf("%d", &n);
  l = 0;
  top = 0;
  for (int i = 1; i <= n; i++) {
    scanf("%d", &x);
    if (x != s[top]) {
      for (int j = l + 1; j <= x; j++) {
        s[++top] = j;
        printf("push %d\n", j);
      }
    }
    --top;
    printf("pop\n");
    l = x;
  }
}