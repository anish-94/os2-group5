#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};

class linkedList {
    private:
        node *head, *tail;
    
    public:
        linkedList() {
            head = NULL;
            tail = NULL;
        }
}

void search(node *head) {

}

void insert(int n) {
    node *tmp = new node;
    tmp->data = n;
    tmp->next = NULL;

    if(head == NULL) {
        head = tmp;
        tail = tmp;
    }
    else {
        tail->next = tmp;
        tail = tail->next;
    }
}

void delete(node *head) {

}

int main() {
    linkedList a;
    return 0;
}