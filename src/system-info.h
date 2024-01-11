#pragma once
#include <iostream>
#include <string>

struct SystemInfo {
	static std::string distroID, logo;
	std::string distro, hostname, kernel, shell, user, uptime, memory, de, wm;
	int packageCount;

	std::string Exec(const char* command);
	void Initialize(bool getLogos);
	void InitializeDistroID();
	std::string GetUser();
	std::string GetHostname();
	std::string GetDistro();
	std::string GetKernel();
	std::string GetUptime();
	std::string GetShell();
	std::string GetDesktopEnv();
	std::string GetWindowManager();
	int GetPackagesByDistro();
	std::string GetMemoryUsage();
};
