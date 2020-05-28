#ifndef TEST_PARAMETERS_H
#define TEST_PARAMETERS_H

#include <parameters.h>
#include <types.h>
#include <string>

// DO NOT MODIFY - This file is automatically generated during compilation.

class TestParameters : public Parameters {
  public:
    enum InitialConditions{
      GAUSSIAN,
      FLAT,
    };

    TestParameters() : Parameters(1){
      mInitialConditions = GAUSSIAN;
      mGridPointsX = 101;
      mGridPointsY = 101;
      mDomainMinX = -1.0;
      mDomainMaxX = 1.0;
      mDomainMinY = -1.0;
      mDomainMaxY = 1.0;
      mProjectName = "Parameters Test";
    }

    inline void setInitialConditions(InitialConditions val){
      mInitialConditions = val;
    }

    inline InitialConditions getInitialConditions(){
      return mInitialConditions;
    }

    inline void setGridPointsX(int GridPointsX){
      mGridPointsX = GridPointsX;
    }

    inline int getGridPointsX(){
      return mGridPointsX;
    }

    inline void setGridPointsY(int GridPointsY){
      mGridPointsY = GridPointsY;
    }

    inline int getGridPointsY(){
      return mGridPointsY;
    }

    inline void setDomainMinX(double DomainMinX){
      mDomainMinX = DomainMinX;
    }

    inline double getDomainMinX(){
      return mDomainMinX;
    }

    inline void setDomainMaxX(double DomainMaxX){
      mDomainMaxX = DomainMaxX;
    }

    inline double getDomainMaxX(){
      return mDomainMaxX;
    }

    inline void setDomainMinY(double DomainMinY){
      mDomainMinY = DomainMinY;
    }

    inline double getDomainMinY(){
      return mDomainMinY;
    }

    inline void setDomainMaxY(double DomainMaxY){
      mDomainMaxY = DomainMaxY;
    }

    inline double getDomainMaxY(){
      return mDomainMaxY;
    }

    inline void setProjectName(std::string ProjectName){
      mProjectName = ProjectName;
    }

    inline std::string getProjectName(){
      return mProjectName;
    }

    Result broadcastParameters();

  private:
    InitialConditions mInitialConditions;
    int mGridPointsX;
    int mGridPointsY;
    double mDomainMinX;
    double mDomainMaxX;
    double mDomainMinY;
    double mDomainMaxY;
    std::string mProjectName;
};

#endif
