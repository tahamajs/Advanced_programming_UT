//
// Created by tahamajs on 8/16/24.
//

#include "../include/GateAnd.hpp"


GateAnd::GateAnd(int numOfInputs) : Gate(numOfInputs) {
    //
}

LogicValue GateAnd::compute(vector<LogicValue> inputs) {
    if (inputs.size() != numOfInputs) {
        throw invalid_argument("Invalid number of inputs");
    }

    for (int i = 0; i < inputs.size(); i++) {
        if (inputs[i] == LogicValue::Z) {
            return LogicValue::Z;
        } else if (inputs[i] != LogicValue::ONE) {
            return LogicValue::ZERO;
        }
    }

    return LogicValue::ONE;
}
