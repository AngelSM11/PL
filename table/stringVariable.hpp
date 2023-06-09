#ifndef _STRINGVARIABLE_HPP_
#define _STRINGVARIABLE_HPP_

#include <iostream>
#include <string>

#include "variable.hpp"

/*!
	\namespace lp
	\brief Name space for the subject Language Processors
*/
namespace lp {

/*!
  \class StringVariable
  \brief Definition of atributes and methods of StringVariable class
  \note  StringVariable Class publicly inherits from Variable class
*/
class StringVariable : public lp::Variable {
    /*!
\name Private atributes of StringVariable class
*/
private:
    std::string _value; //!< \brief Alphanumeric value of the StringVariable

    /*!
\name Public methods of StringVariable class
*/
public:
    /*!
	\name Constructors
*/

    /*!
	\brief Constructor with arguments with default values
	\note  Inline function that uses Variable's constructor as members initializer
	\param name: name of the StringVariable
	\param token: token of the StringVariable
	\param type: type of the StringVariable
	\param value: alphanumeric value of the StringVariable
	\pre   None
	\post  A new StringVariable is created with the values of the parameters
	\sa   setName, setValue
*/
    inline StringVariable(const std::string& name = "", int token = 0, int type = 0, const std::string& value = "")
        : Variable(name, token, type)
    {
        this->setValue(value);
    }

    /*!
	\brief Copy constructor
	\note  Inline function
	\param n: StringVariable object
	\pre   None
	\post  A new StringVariable is created with the values the parameter StringVariable
	\sa    setName, setValue
*/
    StringVariable(const StringVariable& n)
    {
        // Inherited methods
        this->setName(n.getName());

        this->setToken(n.getToken());

        this->setType(n.getType());

        // Own method
        this->setValue(n.getValue());
    }

    /*!
	\name Observer
*/

    /*!
	\brief  Public method that returns the value of the StringVariable
	\note   Función inline
	\pre    None
	\post   None
    \return Value of the StringVariable
	\sa		getValue
*/
    inline std::string getValue() const
    {
        return this->_value;
    }

    /*!
	\name Modifier
*/

    /*!
	\brief   This functions modifies the value of the StringVariable
	\note    Inline function
	\param   value: new value of the StringVariable
	\pre     None
	\post    The value of the StringVariable is equal to the parameter
	\return  void
	\sa 	 setValue
*/
    inline void setValue(const std::string& value)
    {
        this->_value = value;
    }

    /*!
	\name I/O Functions
*/

    /*!
	\brief Read a StringVariable
	\pre   None
	\post  The atributes of the StringVariable are set to the read values
    \sa    write
*/
    void read();

    /*!
	\brief Write a StringVariable
	\pre   None
	\post  None
    \sa    read
*/
    void write() const;

    /*!
	\name Operators
*/

    /*!
	\brief  Assignment Operator
	\param  n: StringVariable object
	\post   The atributes of this object are equal to the atributes of the parameter
	\return Reference to this object
*/
    StringVariable& operator=(const StringVariable& n);

    //! \name Friend functions
    /*!
	\brief  Insertion operator
	\param  i: input stream
	\param  n: StringVariable object
	\pre    nome
	\post   The atributes of the StringVariable are modified with the inserted values from the input stream
	\return The input stream
*/
    friend std::istream& operator>>(std::istream& i, StringVariable& n);

    /*!
	\brief  Extraction operator
	\param  o: output stream
	\param  n: StringVariable object
	\pre    nome
	\post   The atributes of the StringVariable are written in the output stream
	\return The output stream
*/
    friend std::ostream& operator<<(std::ostream& o, StringVariable const& n);

    // End of StringVariable class
};

// End of name space lp
}

// End of _STRINGVARIABLE_HPP_
#endif