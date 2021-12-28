#include "Heap.h"

Heap::Heap() {
    root = new Node;
    root->data = '0';
    root->freq = 0;
    root->right = nullptr;
    root->left = nullptr;

    size = 0;
    active = 0;
}

Heap::Heap(vector<pair<char, int>> alpha)
{
    size = alpha.size();
    elems.resize(alpha.size());
}

void Heap::swapNode(struct Node** a, struct Node** b)
{

    struct Node* t = *a;
    *a = *b;
    *b = t;
}

void Heap::heapify(int idx)

{

    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < size && elems[left]->freq < elems[smallest]->freq)
        smallest = left;

    if (right < size && elems[right]-> freq < elems[smallest]->freq)
        smallest = right;

    if (smallest != idx) {
        swap(elems[smallest], elems[idx]);
        heapify(smallest);
    }
}