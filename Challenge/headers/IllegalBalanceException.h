#pragma once
#include<exception>
class IllegalBalanceException :public std::exception
{
public:
    IllegalBalanceException() {}
    ~IllegalBalanceException() {}
    virtual const char* what() const noexcept {
        return "Illegal balance exception"; 
    }
};
