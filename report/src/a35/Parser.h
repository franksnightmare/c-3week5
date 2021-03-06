// Generated by Bisonc++ V4.13.01 on Mon, 20 Feb 2017 15:09:45 +0100

#ifndef Parser_h_included
#define Parser_h_included

// $insert baseclass
#include "Parserbase.h"


#undef Parser
class Parser: public ParserBase
{
        
    public:
        int parse();

    private:
        void error(char const *msg);    // called on (syntax) errors
        int lex();                      // returns the next token from the
                                        // lexical scanner. 
        void print();                   // use, e.g., d_token, d_loc

    // support functions for parse():
        void executeAction(int ruleNr);
        void errorRecovery();
        int lookup(bool recovery);
        void nextToken();
        void print__();
        void exceptionHandler__(std::exception const &exc);
};


#endif
