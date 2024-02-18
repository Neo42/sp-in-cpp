#include <bits/stdc++.h>
using namespace std;

int front = 0, rear = 1, q[101];

void push(int x) { q[++rear] = x; }

void pop() { ++front; }

int query(int k) { return q[front + k - 1]; }