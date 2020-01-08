//
// Created by Priyank on 12/29/2019.
//

#include "exp.h"

#if 0 // If block 1
void Exp::print(){
    std::cout << last << ", " << first << std::endl;
}

void Exp_extend::print(){
    std::cout << "Last name given is: " << last << "  ||  First name given is: " << first << std::endl;
}
#endif
#include<cmath>
bool palindromFinder::pali(const std::vector<int> &vec) {
    int mid = floor(vec.size()/2);
    const size_t size= vec.size();
    bool ans = true;
    std::cout << vec[3] << std::endl;
    for(size_t i=0;i<mid;i++){
        std::cout << "i:" << i << "  size: " << size << "  mid: " << mid << std::endl;
        if(vec[i] != vec[size-i-1]){
            std::cout << "vec[i]: " << vec[i] << " | " << "  vec[size-i]: " << vec[size-i-1] << std::endl;
            ans = false;
            return ans;
            break;
        }
    }
    return ans;
}

