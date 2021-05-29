#pragma once
#include<exception>
class InsufficentFundsException :public std::exception
{
public:
	InsufficentFundsException();
	virtual ~InsufficentFundsException();
	virtual char const* what() const {
		return "no enugh money bro/sis (tuff to be you)"
	}
private:

};

InsufficentFundsException::InsufficentFundsException()
{
}

InsufficentFundsException::~InsufficentFundsException()
{
}