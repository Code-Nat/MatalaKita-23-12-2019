#pragma once

int RecAppernceOfChar(char* str, char c)
{
	if (*str == '\0')
		return 0;
	if (*str == c)
		return 1 + RecAppernceOfChar(str + 1, c);
	return 0 + RecAppernceOfChar(str + 1, c);
}