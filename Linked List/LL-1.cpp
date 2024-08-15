// Implementation of linked list
#include <bits/stdc++.h>
using namespace std;

struct Node {
public:
  int data;
  Node *next;

  Node(int data1, Node *next1) {
    data = data1;
    next = next1;
  }
};

int main() {
  vector<int> v = {1, 2, 3};

  Node *x = new Node(v[2], nullptr);
  cout << x->data << " " << x->next;
}