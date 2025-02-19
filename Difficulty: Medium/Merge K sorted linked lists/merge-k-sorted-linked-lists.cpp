//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        Node * head = arr[0];
        for(int i = 1; i<arr.size(); i++ ){
            head = merge_two(head, arr[i]);
        }
        return head;
    }
    Node *merge_two(Node * head1, Node *head2){
        Node * head = nullptr;
        if(head1->data > head2->data){
            swap(head1, head2);
        }
        head = head1;
        while(head1->next != nullptr && head2 != nullptr){
            if(head1->next->data > head2->data){
                Node *tmp1 = head1->next, *tmp2= head2;
                head2 = head2->next;
                head1->next = tmp2;
                tmp2->next = tmp1;
            }else{
                head1 = head1->next;
            }
        }
        if(head2!= nullptr){
            while(head1->next != nullptr){
                head1 = head1->next;
            }
            head1->next = head2;
        }
        return head;
    }
};


//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        vector<Node*> v(n);

        for (int i = 0; i < n; i++) {
            string line;
            getline(cin, line);
            stringstream ss(line);

            Node* head = new Node(0);
            Node* temp = head;
            int x;
            while (ss >> x) {
                Node* newNode = new Node(x);
                temp->next = newNode;
                temp = temp->next;
            }
            v[i] = head->next;
        }

        Solution ob;
        Node* head = ob.mergeKLists(v);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends