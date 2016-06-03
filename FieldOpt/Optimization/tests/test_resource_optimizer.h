//
// Created by einar on 6/2/16.
//

#ifndef FIELDOPT_TEST_RESOURCE_OPTIMIZER_H
#define FIELDOPT_TEST_RESOURCE_OPTIMIZER_H

#include "Model/tests/test_resource_model.h"
#include "Optimization/case.h"

namespace TestResources {
    class TestResourceOptimizer : public TestResourceModel {
    protected:
        TestResourceOptimizer() {
            base_case_ = new Optimization::Case(model_->variables()->GetBinaryVariableValues(),
                                                model_->variables()->GetDiscreteVariableValues(),
                                                model_->variables()->GetContinousVariableValues());
            base_case_->set_objective_function_value(1000.0);
        }

        Optimization::Case *base_case_;
    };
}

#endif //FIELDOPT_TEST_RESOURCE_OPTIMIZER_H