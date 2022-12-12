/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
  public: Node * copyRandomList(Node * head) {

    Node * iter = head;
    Node * front = head;

    // Step1
    while (iter != nullptr) {

      front = iter -> next;
      Node * copy = new Node(iter -> val);
      iter -> next = copy;
      copy -> next = front;
      iter = front;
    }

    // Step 2

    iter = head;
    while (iter != nullptr) {
      if (iter -> random != NULL) {
        iter -> next -> random = iter -> random -> next;
      }
      iter = iter -> next -> next;
    }

    // Step 3

    Node * dummy = new Node(0);

    Node * copy = dummy;
    iter = head;

    while (iter != NULL) {
      front = iter -> next -> next;
      copy -> next = iter -> next;
      iter -> next = front;
      copy = copy -> next;
      iter = front;
    }

    return dummy -> next;

  }
};
