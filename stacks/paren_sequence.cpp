#include <bits/stdc++.h>
using namespace std;

char str[100001];
int top, n, s[100001];

int main() {
  scanf("%d%s", &n, str);
  bool ok = true;
  // remember to declare all variables
  top = 0;
  // use 0 based iteration to use i for index
  for (int i = 0; i < n && ok; ++i) {
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