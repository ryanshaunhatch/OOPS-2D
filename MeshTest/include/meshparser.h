#ifndef MESH_PARSER_H
#define MESH_PARSER_H

#include <paramparser.h>
#include <meshparameters.h>

// DO NOT MODIFY - This file is automatically generated during compilation.

class MeshParser : ParamParser{
  public:
    MeshParser() : ParamParser(2){}

    virtual ~MeshParser(){}

    virtual void updateParameters(std::string fname, Parameters* params);
};

#endif
