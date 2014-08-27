/*
 * Copyright (c) 2014 Eran Pe'er.
 *
 * This program is made available under the terms of the MIT License.
 *
 * Created on August, 2014
 */
#ifndef ErrorFormatter_h__
#define ErrorFormatter_h__

#include <string>

namespace fakeit {

struct UnexpectedMethodCallEvent;
struct SequenceVerificationEvent;
struct NoMoreInvocationsVerificationEvent;

struct ErrorFormatter {

	virtual std::string format(const fakeit::UnexpectedMethodCallEvent& e) = 0;

	virtual std::string format(const fakeit::SequenceVerificationEvent& e) = 0;

	virtual std::string format(const fakeit::NoMoreInvocationsVerificationEvent& e) = 0;

};

}
#endif
