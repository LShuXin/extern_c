#ifndef TOKEN_H
#define TOKEN_H

#include <string>

using namespace std;

enum TokenType {NUMBER, OP, LPAREN, RPAREN, ERROR};

class Token
{
  private:
    // save the value and tokeType
    string value;
    TokenType tokeType;
  public:
    Token();

    // get method for private member
    string getValue();
    TokenType getTokenType();

    // set method for private member
    void setValue(string v);
    void setTokenType(TokenType t);
}

#endif // TOKEN_H
