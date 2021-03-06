#ifndef TEST_PARSER_H
#define TEST_PARSER_H

#include <paramparser.h>
#include <testparameters.h>

// DO NOT MODIFY - This file is automatically generated during compilation.

class TestParser : ParamParser{
  public:
    TestParser() : ParamParser(1){}

    virtual ~TestParser(){}

    virtual bool updateParameters(std::string fname, Parameters* params);
};

#endif
