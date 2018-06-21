#ifndef H_UTIL_H
#define H_UTIL_H

#include "hcos.h"

int month_atoi(const char* month);
const char* month_itoa(int month);

datetime_t get_compile_datetime();

int vscprintf(const char* fmt, va_list ap);

#endif // H_UTIL_H