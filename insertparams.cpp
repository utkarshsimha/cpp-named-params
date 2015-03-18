#include "insertparams.hpp"

void insertActualParameters( std::string call_string )
{
    std::unordered_map<std::string,std::string> actual_parameters;
    std::vector<std::string> params;
    boost::split( params, call_string, boost::is_any_of(" ,"), boost::token_compress_on );
    if( params.back() == "" )
        params.pop_back(); //Due to some multiple delimiters problem with boost::split
    for( auto &it : params ) {
        std::vector<std::string> param_pair;
        boost::split( param_pair, it, boost::is_any_of(" :"), boost::token_compress_on );
        std::pair<std::string, std::string> p(param_pair[0],param_pair[1]);
        std::cout << std::get<0>( p ) << " " << std::get<1>( p ) << std::endl;
        actual_parameters.insert( p );
    }
}

void insertFormalParameters( std::string declr_string )
{
    //This object must be got by getting the value of the key i.e. function name
    FunctAttr *f = new FunctAttr();
    std::vector<std::string> params;
    boost::split( params, declr_string, boost::is_any_of(" ,"), boost::token_compress_on );
    if( params.back() == "" )
        params.pop_back();
    for( auto &it : params )
    {
        std::vector<std::string> param_declr;
        boost::split( param_declr, it, boost::is_any_of(" "), boost::token_compress_on );
        f->formal_params->push( param_declr[1] );
    }
    std::cout << f->numberOfParams() << std::endl;
    delete f;
}
