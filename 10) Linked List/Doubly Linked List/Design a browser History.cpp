#include <iostream>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node* back;

    // Constructors
    Node() : data(""), next(nullptr), back(nullptr) {}
    Node(string x) : data(x), next(nullptr), back(nullptr) {}
    Node(string x, Node* next, Node* random) : data(x), next(next), back(random) {}
};

class Browser {
    Node* currentPage;

public:
    Browser(string& homepage) {
        currentPage = new Node(homepage);
    }

    void visit(string& url) {
        Node* newNode = new Node(url);
        currentPage->next = newNode;
        newNode->back = currentPage;
        currentPage = newNode;
    }

    string back(int steps) {
        while (steps && currentPage->back) {
            currentPage = currentPage->back;
            steps--;
        }
        return currentPage->data;
    }

    string forward(int steps) {
        while (steps && currentPage->next) {
            currentPage = currentPage->next;
            steps--;
        }
        return currentPage->data;
    }
};
