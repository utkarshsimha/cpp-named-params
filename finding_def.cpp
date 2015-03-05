#include <iostream>
#include "finding_def.hpp"
bool matchFunctionDef(const std::string& input)
{
	std::regex regex_call("(virtual|friend)?[ ]?((bool|void|double|int))[ ]([[:alpha:]][[:alpha:][:digit:]_]*)\\(((.*)[ ]*([[:alpha:]][[:alpha:]]*)[,])*(.*)[ ]*([[:alpha:]][[:alpha:]]*)*\\)");
	if(std::regex_match(input,regex_call))
		return true;
	else
		return false;
}
