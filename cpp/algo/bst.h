#ifndef CPP_BST_H
#define CPP_BST_H

template <class T>
struct tNode{
    T val;
    tNode* left,*right;
    tNode(T val):val(val), left(NULL), right(NULL){};
};

template <typename T>
class BST{
    public:
    tNode<T>* root = NULL;
    BST(T val){
        root = new tNode<T>(val);
    }
    void append(T val);
    void print(){
        std::cout << root->val << '\n';
    }
};

extern template class BST<int>;
extern template class BST<float>;
#endif // CPP_BST_H