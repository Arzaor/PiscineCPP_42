#pragma once
#ifndef B_H

#include "Base.hpp"

class B : public Base
{
	public:
		B(void);
		B(B const & rhs);
		virtual ~B(void);

		B&	operator=(B const & rhs);
};

#endif