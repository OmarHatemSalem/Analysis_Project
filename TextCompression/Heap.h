#include <iostream>
#include <vector>

using namespace std;

struct Node {
    char data;

    int freq;

    struct Node* left, * right;
};

class Heap
{
    struct Node* root;
    int size;
    int active;

    vector<Node*> elems;
public:
    Heap();
    Heap(vector<pair<char, int>> alpha);

    void swapNode(struct Node** a, struct Node** b);

    void heapify(int idx);
};

