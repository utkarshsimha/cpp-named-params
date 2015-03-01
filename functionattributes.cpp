#include "functionattributes.hpp"

FunctAttr::FunctAttr()
: m_overloaded(false),m_virtual(false),formal_params( new std::queue<std::string> )
{
}

FunctAttr::~FunctAttr()
{
    delete formal_params;
}

FunctAttr::FunctAttr( const FunctAttr& rhs )
{
    delete formal_params;
    formal_params = new std::queue<std::string>(*rhs.formal_params);
    m_overloaded = rhs.m_overloaded;
    m_virtual = rhs.m_virtual;
}

FunctAttr& FunctAttr::operator=( const FunctAttr& rhs )
{
    delete formal_params;
    formal_params = new std::queue<std::string>(*rhs.formal_params);
    m_overloaded = rhs.m_overloaded;
    m_virtual = rhs.m_virtual;
}

bool FunctAttr::isOverloaded() const
{
    return m_overloaded; 
}

bool FunctAttr::isVirtual() const
{
    return m_virtual; 
}

int FunctAttr::numberOfParams() const
{
    return formal_params->size();
}

void FunctAttr::setOverloaded()
{
    m_overloaded = true;
}

void FunctAttr::setVirtual()
{
    m_virtual = true;
}
