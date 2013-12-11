#include <string>

#ifndef LEXER_H
#define LEXER_H

#define YYCTYPE unsigned char
#define YYCURSOR yycursor
#define YYLIMIT yylimit
#define YYMARKER yymarker
#define YYFILL(n) 


namespace SSC {

class Lexer {
    public:
        Lexer();
        ~Lexer();
        void prepare(unsigned char* source, unsigned int length);
        int scan(Node* node);
    private:
        unsigned char* yycursor;
        unsigned char* yylimit;
        unsigned char* yymarker;
};

}; /* namespace SSC */

int SSClex(Node* node, SSC::Lexer* lexer);

#endif /* LEXER_H */