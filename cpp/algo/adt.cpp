//
// Created by pgt6 on 1/10/2020.
//

#include<typeinfo>
template<class T>
void LinkedList<T>::append(T val) {
    Node* current = head;
    Node* newNode = new Node(val);

    while(current->next){
        current= current->next;
    }

    current->next = newNode;
};

template <class T>
void LinkedList<T>::appendFront(T val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

template<class T>
void LinkedList<T>::print() {
    Node *current;
    current = head;
    while (current) {
        std::cout << current->value << std::endl;
        current = current->next;
    }
}

template <class T>
T LinkedList<T>::next() {
    if(_next==NULL) {_next = head;}
    else{_next = _next->next;}
    return _next->value;
}
template <class T>
T LinkedList<T>::operator+(Node tot1) const{
    T tot;
    tot = *this->value + tot1.value;
    return tot;
}


