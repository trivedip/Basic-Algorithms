#include<typeinfo>
#include <iostream>
#include "bst.h"
template class BST<int>;
template class BST<float>;
template<typename T>
void BST<T>::append(T val){
    std::cout <<"Finally this shit works" << std::endl;
    
}

