/**
 * Copyright (C) 2020-2021 KeyboardSlayer (Jordan Dalcq)
 * 
 * This file is part of Navy.
 * 
 * Navy is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Navy is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Navy.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <string.h>
#include <stddef.h>
#include <libk/debug.h>

size_t 
strlen(const char *s)
{
	size_t i;

	for (i = 0; s[i] != '\0'; i++);
	return i;
}

char *
strrev(char *s)
{
	char tmp;
	size_t end = strlen(s) - 1;
	size_t start = 0;

	while (start < end)
	{
		tmp = s[start];
		s[start++] = s[end];
		s[end--] = tmp;
	}

	return s;
}

char *
strcpy(char *dest, const char *src)
{
	size_t i;
	
	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}

	return dest;
}

void *
memset(void *s, int c, size_t n)
{
    if (n)
    {
        char *d = (char *) s;
        do 
        {
            *d++ = c;
        } while(--n);
    }

    return s;
}