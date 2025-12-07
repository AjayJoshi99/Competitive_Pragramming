struct Node {
    int key, val;
    Node *prev, *next;
    Node(int k, int v) : key(k), val(v), prev(nullptr), next(nullptr) {}
};
class LRUCache {
public:
    int cap;
    unordered_map<int, Node*> m;
    Node *head, *tail;

    LRUCache(int capacity) {
        cap = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head; 

    }
    void removeNode(Node* node) {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }
    void addToFront(Node* node) {
        Node* temp = head->next;
        head->next = node;
        node->prev = head;
        node->next = temp;
        temp->prev = node;
    }
    int get(int key) {
       if (!m.count(key)) return -1;
        Node* node = m[key];
        int value = node->val;
        removeNode(node);
        addToFront(node);

        return value;
    }
    
    void put(int key, int value) {
        if (m.count(key)) {
            Node* node = m[key];
            node->val = value;
            removeNode(node);
            addToFront(node);
            return;
        }

        if (m.size() == cap) {
            Node* lru = tail->prev; 
            m.erase(lru->key);
            removeNode(lru);
            delete lru;
        }
        Node* newNode = new Node(key, value);
        addToFront(newNode);
        m[key] = newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */