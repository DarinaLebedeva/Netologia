#ifndef MY_EXCEPTION_H
#define MY_EXCEPTION_H

#include <stdexcept>
#include <string>

class ShapeCreationException : public std::domain_error {
public:
    explicit ShapeCreationException(const std::string& msg)
        : std::domain_error(msg) {}
};

#endif 