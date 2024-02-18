#include <bits/stdc++.h>
using namespace std;

int top, s[100001];  // FILO

void push(int x) { s[++top] = x; }

void pop(int x) { top--; }
