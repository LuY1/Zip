
#ifndef ZIP_FUNCTION
#define ZIP_FUNCTION

/*******************************************************************************
**  AREA1  :  include header files area
*******************************************************************************/

#include "zip/unzip.h"
#include "zip/zip.h"
#include <string>
#include <vector>

#pragma warning(disable : 4996) 

/*******************************************************************************
**  AREA2  : code function declare area
*******************************************************************************/

ZRESULT ExtractZipToDir(const char* unzipSrcPath, const char* unzipDestPath = NULL, std::string unzipPassw = "");
ZRESULT CompressDirToZip(const char* zipSrcPath, const char* zipDestPath = NULL);
ZRESULT CompressDirToZip(std::vector<std::string> vzipSrcPath, const char* czipDestPath);
ZRESULT ExtractZipToDir(LPCTSTR unzipSrcPath, LPCTSTR unzipDestPath = NULL, std::string unzipPassw = "");
ZRESULT CompressDirToZip(LPCTSTR zipSrcPath, LPCTSTR zipDestPath = NULL);


std::string GetZipErrorMessage(ZRESULT code);
void SetZipEncode(int mode);
#endif
