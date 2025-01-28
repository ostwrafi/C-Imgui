#pragma once
#include <unordered_map>
#include <iostream>

class c_globals {
public:

	bool active = true;

	char Username[255] = "";
	char Password[255] = "";
	char license[255] = "";
	char Key[255] = "";

	std::string MemoryLogs = "Undetect";




};

inline c_globals globals;
