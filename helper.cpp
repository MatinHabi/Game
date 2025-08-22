#include <iostream>
#include "helper.h"

void Helper::setGrid(){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            std::cout << " X " ;
        }
        std::cout << "\n";
    }
}