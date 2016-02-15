////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  [projectName]
//  File:     DataFlowGraph.cpp (compile)
//  Authors:  Ofer Dekel
//
//  [copyright]
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "DataFlowGraph.h"

void DataFlowGraph::AddLayer(uint64 numNodes)
{
    std::vector<std::vector<DataFlowNode>>::emplace_back(numNodes);
}
