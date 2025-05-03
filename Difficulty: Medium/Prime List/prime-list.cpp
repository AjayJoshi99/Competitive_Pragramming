//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

class Solution {
  public:
    Node *primeList(Node *head) {
        Node* ptr = head;
        while(ptr!=nullptr){
            int num = ptr->val, p1 = before(num), p2 = after(num);
            
            if(abs(num-p1)>abs(num-p2)) ptr->val = p2;
            else ptr->val = p1;
            
            ptr = ptr->next;
        }
        return head;
    }
    int before(int val){
        for (int i = val; i>0; i--) {
        if (isPrime(i)) return i;
    }
    }
    int after(int val){
    for (int i = val; i > 0; ++i) {
        if (isPrime(i)) return i;
    }
    }
    bool isPrime(int n){
        if (n < 2) return false;
        for(int i = 2; i <= sqrt(n); ++i)
            if (n % i == 0) return false;
    return true;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        head = ob.primeList(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends