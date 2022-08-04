#include <exception>

class PositionException : public std::exception
{
    char *what()
    {
        return "Sorry pal wrong coordinates.";
    }
};