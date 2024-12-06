#include <iostream>
#include <string> 

enum Keyword
{
    SET,
    GET,
    DELETE
};

struct DBCommand
{
    Keyword command;
    std::string key;
    std::string value;
};