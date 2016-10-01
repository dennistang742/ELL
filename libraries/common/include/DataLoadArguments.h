////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Machine Learning Library (EMLL)
//  File:     DataLoadArguments.h (common)
//  Authors:  Ofer Dekel
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

// utilities
#include "CommandLineParser.h"

// stl
#include <string>

namespace emll
{
/// <summary> common namespace </summary>
namespace common
{
    /// <summary> A struct that holds command line parameters for loading data. </summary>
    struct DataLoadArguments
    {
        /// <summary> The filename for the input data file. </summary>
        std::string inputDataFilename = "";

        /// <summary> The number of elements in an input data vector. </summary>
        std::string dataDimension = "";

        // not exposed on the command line
        uint64_t parsedDataDimension = 0;
    };

    /// <summary> A version of DataLoadArguments that adds its members to the command line parser. </summary>
    struct ParsedDataLoadArguments : public DataLoadArguments, public utilities::ParsedArgSet
    {
        /// <summary> Adds the arguments to the command line parser. </summary>
        ///
        /// <param name="parser"> [in,out] The parser. </param>
        virtual void AddArgs(utilities::CommandLineParser& parser) override;

        /// <summary> Checks the parsed arguments. </summary>
        ///
        /// <param name="parser"> The parser. </param>
        ///
        /// <returns> An utilities::CommandLineParseResult. </returns>
        virtual utilities::CommandLineParseResult PostProcess(const utilities::CommandLineParser& parser) override;
    };
}
}
