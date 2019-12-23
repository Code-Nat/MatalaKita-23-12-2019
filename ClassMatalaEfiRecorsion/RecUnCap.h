#pragma once

void RecUnCap(char* str)
{
	if (!*str)
		return;
	if (*str > 'A' && *str < 'Z')
		*str += ' ';
	RecUnCap(str + 1);
}