#include <iostream>
#include "finding_def.hpp"
bool matchFunctionDef(const std::string& input)
{
    std::smatch func_def_match;
    std::regex regex_def("(virtual|friend)?[ ]?(bool|void|double|int)[ ]([[:alpha:]][[:alpha:][:digit:]_]*)\\((((.*)[ ]*([[:alpha:]][[:alpha:]]*)[,])*(.*)[ ]*([[:alpha:]][[:alpha:]]*)*)\\)");
    if(std::regex_match(input,func_def_match,regex_def)) {
        std::string func_name(func_def_match.str(3)); //Extracting function name
        std::string func_param(func_def_match.str(4)); //Extracting function params
        return true;
    }
    else
        return false;
}
