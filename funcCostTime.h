#ifndef __FunTimeCal_H__
#define __FunTimeCal_H__
#include <time.h>
#include <string>

class funTimeCal{
	clock_t	startTime;
    std::string strMethodName;
public:
	funTimeCal(const char* pszMethodName);
	~funTimeCal();
};
#endif