#include <waveparser.h>
#include <iostream>

using namespace std;

// DO NOT MODIFY - This file is automatically generated during compilation.

bool WaveParser::updateParameters(string fname, Parameters* params){
  if(!checkId(params)){
    return false;
  }
  reader.clearData();
  ParamReader::ParamResult result = reader.readFile(fname);
  if(result != ParamReader::SUCCESS){
    cout << "An error occurred while trying to read " << fname << ".\n";
    return false;
  }
  WaveParameters *pars = (WaveParameters*) params;

  if(!reader.hasSection(string("Wave"))){
    return true;
  }

  if(reader.hasParameter(string("Wave"),string("InitialConditions"))){
    string result = reader.readAsString(string("Wave"),string("InitialConditions"));
    if(result.compare("GAUSSIAN") == 0){
      pars->setInitialConditions(WaveParameters::GAUSSIAN);
    }
    else if(result.compare("FLAT") == 0){
      pars->setInitialConditions(WaveParameters::FLAT);
    }
    else {
      cout << "The value for parameter InitialConditions is out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("GridPointsX"))){
    int result = reader.readAsInt(string("Wave"),string("GridPointsX"));
    if(result <= 128000 && result >= 7){
      pars->setGridPointsX(result);
    }
    else{
      cout << "Parameter GridPointsX out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("GridPointsY"))){
    int result = reader.readAsInt(string("Wave"),string("GridPointsY"));
    if(result <= 128000 && result >= 7){
      pars->setGridPointsY(result);
    }
    else{
      cout << "Parameter GridPointsY out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("DomainMinX"))){
    double result = reader.readAsDouble(string("Wave"),string("DomainMinX"));
    if(result <= 1.000000e+06 && result >= -1.000000e+06){
      pars->setDomainMinX(result);
    }
    else{
      cout << "Parameter DomainMinX out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("DomainMaxX"))){
    double result = reader.readAsDouble(string("Wave"),string("DomainMaxX"));
    if(result <= 1.000000e+06 && result >= -1.000000e+06){
      pars->setDomainMaxX(result);
    }
    else{
      cout << "Parameter DomainMaxX out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("DomainMinY"))){
    double result = reader.readAsDouble(string("Wave"),string("DomainMinY"));
    if(result <= 1.000000e+06 && result >= -1.000000e+06){
      pars->setDomainMinY(result);
    }
    else{
      cout << "Parameter DomainMinY out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("DomainMaxY"))){
    double result = reader.readAsDouble(string("Wave"),string("DomainMaxY"));
    if(result <= 1.000000e+06 && result >= -1.000000e+06){
      pars->setDomainMaxY(result);
    }
    else{
      cout << "Parameter DomainMaxY out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("ProjectName"))){
    string result = reader.readAsString(string("Wave"),string("ProjectName"));
    pars->setProjectName(result);
  }

  if(reader.hasParameter(string("Wave"),string("TimeStart"))){
    double result = reader.readAsDouble(string("Wave"),string("TimeStart"));
    if(result <= 1.000000e+06 && result >= 0.000000e+00){
      pars->setTimeStart(result);
    }
    else{
      cout << "Parameter TimeStart out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("TimeEnd"))){
    double result = reader.readAsDouble(string("Wave"),string("TimeEnd"));
    if(result <= 1.000000e+06 && result >= 0.000000e+00){
      pars->setTimeEnd(result);
    }
    else{
      cout << "Parameter TimeEnd out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("GhostPoints"))){
    int result = reader.readAsInt(string("Wave"),string("GhostPoints"));
    if(result <= 10 && result >= 1){
      pars->setGhostPoints(result);
    }
    else{
      cout << "Parameter GhostPoints out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("MinCFL"))){
    double result = reader.readAsDouble(string("Wave"),string("MinCFL"));
    if(result <= 1.000000e+00 && result >= 1.000000e-02){
      pars->setMinCFL(result);
    }
    else{
      cout << "Parameter MinCFL out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("MaxCFL"))){
    double result = reader.readAsDouble(string("Wave"),string("MaxCFL"));
    if(result <= 1.000000e+00 && result >= 1.000000e-02){
      pars->setMaxCFL(result);
    }
    else{
      cout << "Parameter MaxCFL out of range.\n";
    }
  }

  if(reader.hasParameter(string("Wave"),string("ErrorTolerance"))){
    double result = reader.readAsDouble(string("Wave"),string("ErrorTolerance"));
    if(result <= 1.000000e+00 && result >= 1.000000e-16){
      pars->setErrorTolerance(result);
    }
    else{
      cout << "Parameter ErrorTolerance out of range.\n";
    }
  }

  return true;
}

