#include "opp.h"

int main(){
    calculator* pCalc = new calculator;
    pCalc -> launch();
    while (pCalc -> run()){
        pCalc -> input();
        pCalc -> output();
    }
    return 0;
}