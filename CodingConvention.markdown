Coding Convention
=================

Coding Conventions used in all of WarBots' coding projects

Namespacing
-----------
WarBots::{project}::{module}
+ ex. /RCSSLSIM/Movable/Ball.h -> WarBots::RCSSLSIM::Movable::Ball

Documentation
-------------
We will document using [doxygen](http://www.doxygen.org), a list of tags can be found [here](http://www.stack.nl/~dimitri/doxygen/commands.html).

Our templates (for setting up your own text editors, is as follows):
If you're using gedit, you can find a snippet tar ball [here](https://github.com/uWaterloo-IEEE-StudentBranch/WarBots-CodeRepo/blob/master/Documents/SnippetCplusplus.tar.gz).

The doxygen style comments are written in the header (.h) files. Regular comments in the implementation are also encouraged.

#### File
    /*!
     * \file     [File Name]
     * \author   [Your Name]
     * \date     [Current Year]
     * \brief    [Brief Description of the File]
     */
For example:

    /*!
     * \file     CodingConvention.markdown
     * \author   Cong Wang
     * \date     2012
     * \brief    Outlines the coding conventions use in WarBots
    */
#### Inline comments
    /*! [This describes the variable on the line after] */
For example:

    /*! The ID of the Robot */
    int id;
#### Post-line comments
    /*!< [This describes the variable on the same line] */
For example:

    int id;     /*!< The ID of the Robot */
#### Classes
    /*!
     *    \class    ClassName
     *    \brief    Demo class
     */
    class ClassName{
      public:
      
        /*!
         *    \brief        default constructor
         *    \param        none
         *    \details      nothing special
         */
        ClassName();
            
        /*!
         *    \brief        default destructor
         *    \param        none
         *    \details      nothing special
         */    
        virtual ~ClassName();
    
        /*! 
         *  \fn         member
         *  \brief      getter function for member_
         *  \details
         *  \param      none
         *  \return     int
         *  \bug        none
         *  \warning    none
         */
        int member() const;
    
      private:
      
        int member_;     /*!< private member */
    };    
and in .cc:

    int ClassName::member() const{
        return member_;
    }
#### Functions
    /*! 
     *  \fn         FunctionName
     *  \brief      Demo function
     *  \details    Nothing really special about it
     *  \param      none
     *  \return     void
     *  \bug        none
     *  \warning    none
     */
    void FunctionName();
#### Structs
    /*!
     *    \struct    StructName
     *    \brief     Demo structure
     */
    struct StructName{
        /* data */
    };
#### Enums
    /*!
     *    \enum    EnumName
     *    \brief   Demo enum
     */
    enum EnumName{
        /* data */
    };
