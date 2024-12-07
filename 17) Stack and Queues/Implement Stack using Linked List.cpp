#include <bits/stdc++.h>
using namespace std;

struct stackNode {
    int data;
    stackNode* next;

    stackNode(int d) {
        data = d;
        next = NULL;
    }
};

struct stack {
    stackNode* top;
    int size;

    stack() {
        top = NULL;
        size = 0;
    }

    void stackPush(int x) {
        stackNode* element = new stackNode(x);
        element->next = top;
        top = element;
        cout << "Element pushed\n";
        size++;
    }

    int stackPop() {
        if (top == NULL) return -1;
        int topData = top->data;
        stackNode* temp = top;
        top = top->next;
        delete temp; // Proper deletion
        size--;
        return topData;
    }

    int stackSize() {
        return size;
    }

    bool stackIsEmpty() {
        return top == NULL;
    }

    int stackPeek() {
        if (top == NULL) return -1;
        return top->data;
    }

    void printStack() {
        stackNode* current = top;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next; // Properly iterate
        }
        cout << "\n";
    }
};

int main() {
    stack s;
    s.stackPush(10);
    s.stackPush(20);
    s.printStack();
    cout << "Element popped: " << s.stackPop() << "\n";
    s.printStack();
    cout << "Stack size: " << s.stackSize() << "\n";
    cout << "Stack empty or not? " << s.stackIsEmpty() << "\n";
    cout << "Stack's top element: " << s.stackPeek() << "\n";
    return 0;
}
