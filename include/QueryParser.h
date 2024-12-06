#include "../include/CommonTypes.h"


class QueryParser
{
public: 
    QueryParser() = default;
    DBCommand parseInput(std::string inputCommand);

};