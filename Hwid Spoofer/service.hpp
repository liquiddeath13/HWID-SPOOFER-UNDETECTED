#pragma once
#include <Windows.h>
#include <string>
#include <filesystem>
#include "vul_driver.hpp"

namespace service
{
	bool RegisterAndStart(const std::string& driver_path);
	bool StopAndRemove(const std::string& driver_name);
};