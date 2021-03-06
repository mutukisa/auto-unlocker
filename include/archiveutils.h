#ifndef ARCHIVEUTILS_H
#define ARCHIVEUTILS_H

#include <filesystem>

#include <archive.h>
#include <archive_entry.h>

#ifdef __linux__
#include <cstring>
#endif

#include "debugutils.h"

namespace Archive
{
	int copy_data(struct archive* ar, struct archive* aw);
	bool extract(const char* from, const char* filename, const char* to);
	bool extract_s(std::filesystem::path from, std::string filename, std::filesystem::path to);
}

#endif // ARCHIVEUTILS_H
