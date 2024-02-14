#include <bits/stdc++.h>
using namespace std;

int n, top, s[100001];
char str[100001];

int main() {
  top = 0;
  scanf("%d%s", &n, str);

  for (int i = 0; i < n; i++) {
    if (str[i] == s[top])
      --top;
    else
      s[++top] = str[i];
  }

  for (int i = 1; i <= top; i++) {
    printf("%c", s[i]);
  }
}