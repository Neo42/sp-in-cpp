#include <bits/stdc++.h>
using namespace std;

char str[100001];
int n, top, s[100001];

int main() {
  scanf("%d%s", &n, str);
  top = 0;
  bool ok = true;
  for (int i = 0; i < n && ok; i++) {
    if (str[i] == '(' || str[i] == '[') {
      s[++top] = str[i];
    } else if (!top) {
      ok = false;
    } else {
      if (str[i] == ')') {
        if (s[top] == '(')
          --top;
        else
          ok = false;
      } else {
        if (s[top] == '[')
          --top;
        else
          ok = false;
      }
    }
  }

  if (top) ok = false;

  if (ok)
    printf("Yes\n");
  else
    printf("No\n");
}