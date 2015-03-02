#include "finding_function_calls.h"
bool matchFunctionCall(const std::string& input)
{
	const char *for_const ="for(";
	if(input.rfind(for_const,0)!=0)
	{
		std::regex regex_call("[[:alpha:]][[:alpha:][:digit:]_]*\\(([[:alpha:]][[:alpha:][:digit:]_]*:[^:]*)(,[[:alpha:]][[:alpha:][:digit:]_]*:[^:]*)*\\)");
		if(std::regex_match(input,regex_call))
			return true;
		else
			return false;
	}
}
