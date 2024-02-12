#include <bits/stdc++.h>
using namespace std;

// 10 times of operations for each operation on each line

int m, top, s[100001];
char str[11];

int main() {
  scanf("%d", &m);
  top = 0;
  for (int i = 1; i <= m; i++) {
    scanf("%s", str);

    if (str[1] == 'u') {
      int x;
      scanf("%d", &x);
      s[++top] = x;

    } else if (str[0] == 'p') {
      --top;
    } else {
      printf("%d\n", s[top]);
    }
  }
}