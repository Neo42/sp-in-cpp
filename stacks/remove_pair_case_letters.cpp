#include <bits/stdc++.h>
using namespace std;

int n, top, s[100001];
char str[100001];

int main() {
  top = 0;

  scanf("%d%s", &n, str);

  for (int i = 0; i < n; i++) {
    bool does_match = abs(str[i] - s[top]) == 32;

    if (top >= 1 && (does_match))
      --top;
    else
      s[++top] = str[i];
  }

  for (int i = 1; i <= top; i++) {
    printf("%c", s[i]);
  }
}