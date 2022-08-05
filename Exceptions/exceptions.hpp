#include <exception>

class PositionException : public std::exception
{
    char *what()
    {
        return (char *)"Sorry pal, wrong coordinates.";
    }
};