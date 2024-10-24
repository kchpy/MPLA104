#pragma once
#include "user.h"

using namespace System;

public ref class Request {

public:
	int id;
	String^ userId;
	String^ exptId;
	String^ requestDate;
	bool approved;
	String^ section;
};