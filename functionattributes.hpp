#ifndef FUNCATTR_H
#define FUNCATTR_H

#include <string>
#include <queue>

/**
 * @brief The FunctAttr class
    * It is a container to store all the
    * attributes and details of a function
 * @author Utkarsh Simha
 */
class FunctAttr
{
    public:

        FunctAttr();

        ~FunctAttr();

        FunctAttr( const FunctAttr& );

        FunctAttr& operator=( const FunctAttr& );
        
        //Queue to maintain the formal params in order
        std::queue<std::string> *formal_params;

        /**
         * @brief Check if function is overloaded
         */
        bool isOverloaded() const;

        /**
         * @brief Check if function is virtual
         */
        bool isVirtual() const;

        /**
         * @brief Get number of params in the function's
            * formal parameter list
         */
        int numberOfParams() const;

    private:

        bool m_overloaded;

        bool m_virtual;

        /**
         * @brief Sets the overloaded flag
         */
        void setOverloaded();

        /**
         * @brief Sets the virtual flag
         */
        void setVirtual();
};

#endif
