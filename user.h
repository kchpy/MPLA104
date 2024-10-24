#pragma once

using namespace System;

public ref class User {

public:
	int id;
	String^ userId;
	String^ userPasskey;
	String^ userEmail;
	String^ name;
	bool isAdmin;
};