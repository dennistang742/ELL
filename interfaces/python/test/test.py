import sys

sys.path.append('.')
sys.path.append('./..')
sys.path.append('./../Release')
sys.path.append('./../Debug')

import lossfunctions_test
import model_test
import common_test
import trainers_test
import predictors_test
import nodes_test
import linear_test
import evaluators_test
import dataset_test
import treelayout_test

tests = [   
            lossfunctions_test.test, 
            model_test.test, 
            common_test.test,
            trainers_test.test,
            predictors_test.test,
            nodes_test.test,
            linear_test.test,
            evaluators_test.test,
            dataset_test.test,
            treelayout_test.test
        ]

def interface_test():
    rc = 0
    for test in tests:
        rc = rc | test()
    sys.exit(rc)

interface_test()