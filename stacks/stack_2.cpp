#include <bits/stdc++.h>
using namespace std;

// 10 times of operations for each operation on each line

int numOfOperations, top, s[100001];
char str[11];

int main() {
  scanf("%d", &numOfOperations);
  top = 0;
  for (int i = 1; i <= numOfOperations; i++) {
    scanf("%s", str);

    if (str[2] == 's') {
      int x;
      scanf("%d", &x);
      s[++top] = x;

    } else if (str[0] == 'p') {
      --top;
    } else {
      int k;
      scanf("%d", &k);
      printf("%d\n", s[top + 1 - k]);
    }
  }
}