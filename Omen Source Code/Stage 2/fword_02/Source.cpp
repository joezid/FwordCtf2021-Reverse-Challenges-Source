#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)
int input_check(unsigned char* x)
{
	_asm {
		mov edi, [x]
		mov cl, [edi + 0]
		xor cl, [edi + 78]
		xor cl, [edi + 49]
		xor cl, [edi + 3]
		add cl, [edi + 33]
		sub cl, [edi + 49]
		sub cl, [edi + 26]
		cmp cl, 28
		jnz Wrong
		mov cl, [edi + 1]
		and cl, [edi + 58]
		and cl, [edi + 42]
		add cl, [edi + 21]
		add cl, [edi + 43]
		xor cl, [edi + 69]
		or cl, [edi + 44]
		cmp cl, 247
		jnz Wrong
		mov cl, [edi + 2]
		and cl, [edi + 13]
		xor cl, [edi + 64]
		add cl, [edi + 45]
		xor cl, [edi + 26]
		sub cl, [edi + 34]
		sub cl, [edi + 70]
		cmp cl, 202
		jnz Wrong
		mov cl, [edi + 3]
		sub cl, [edi + 41]
		or cl, [edi + 40]
		and cl, [edi + 82]
		add cl, [edi + 80]
		add cl, [edi + 71]
		and cl, [edi + 76]
		cmp cl, 49
		jnz Wrong
		mov cl, [edi + 4]
		xor cl, [edi + 35]
		xor cl, [edi + 20]
		xor cl, [edi + 85]
		sub cl, [edi + 64]
		or cl, [edi + 14]
		xor cl, [edi + 30]
		cmp cl, 163
		jnz Wrong
		mov cl, [edi + 5]
		xor cl, [edi + 22]
		xor cl, [edi + 32]
		add cl, [edi + 65]
		xor cl, [edi + 60]
		add cl, [edi + 55]
		add cl, [edi + 70]
		cmp cl, 94
		jnz Wrong
		mov cl, [edi + 6]
		sub cl, [edi + 6]
		and cl, [edi + 12]
		xor cl, [edi + 74]
		xor cl, [edi + 62]
		xor cl, [edi + 19]
		xor cl, [edi + 18]
		cmp cl, 0
		jnz Wrong
		mov cl, [edi + 7]
		xor cl, [edi + 52]
		add cl, [edi + 38]
		xor cl, [edi + 48]
		xor cl, [edi + 37]
		xor cl, [edi + 81]
		xor cl, [edi + 3]
		cmp cl, 207
		jnz Wrong
		mov cl, [edi + 8]
		xor cl, [edi + 78]
		and cl, [edi + 26]
		and cl, [edi + 82]
		sub cl, [edi + 91]
		or cl, [edi + 49]
		sub cl, [edi + 53]
		cmp cl, 160
		jnz Wrong
		mov cl, [edi + 9]
		xor cl, [edi + 15]
		and cl, [edi + 63]
		sub cl, [edi + 3]
		xor cl, [edi + 90]
		add cl, [edi + 55]
		sub cl, [edi + 88]
		cmp cl, 199
		jnz Wrong
		mov cl, [edi + 10]
		or cl, [edi + 33]
		xor cl, [edi + 24]
		add cl, [edi + 72]
		xor cl, [edi + 84]
		add cl, [edi + 78]
		or cl, [edi + 13]
		cmp cl, 95
		jnz Wrong
		mov cl, [edi + 11]
		or cl, [edi + 11]
		xor cl, [edi + 78]
		sub cl, [edi + 71]
		sub cl, [edi + 41]
		and cl, [edi + 4]
		or cl, [edi + 5]
		cmp cl, 99
		jnz Wrong
		mov cl, [edi + 12]
		and cl, [edi + 71]
		add cl, [edi + 1]
		sub cl, [edi + 66]
		xor cl, [edi + 92]
		and cl, [edi + 89]
		xor cl, [edi + 91]
		cmp cl, 1
		jnz Wrong
		mov cl, [edi + 13]
		xor cl, [edi + 16]
		add cl, [edi + 38]
		add cl, [edi + 21]
		xor cl, [edi + 32]
		add cl, [edi + 22]
		sub cl, [edi + 59]
		cmp cl, 13
		jnz Wrong
		mov cl, [edi + 14]
		add cl, [edi + 20]
		sub cl, [edi + 0]
		xor cl, [edi + 76]
		or cl, [edi + 90]
		sub cl, [edi + 40]
		sub cl, [edi + 72]
		cmp cl, 200
		jnz Wrong
		mov cl, [edi + 15]
		sub cl, [edi + 84]
		sub cl, [edi + 23]
		add cl, [edi + 8]
		add cl, [edi + 60]
		and cl, [edi + 76]
		xor cl, [edi + 76]
		cmp cl, 32
		jnz Wrong
		mov cl, [edi + 16]
		or cl, [edi + 5]
		and cl, [edi + 8]
		xor cl, [edi + 82]
		xor cl, [edi + 39]
		and cl, [edi + 90]
		and cl, [edi + 12]
		cmp cl, 32
		jnz Wrong
		mov cl, [edi + 17]
		or cl, [edi + 43]
		add cl, [edi + 30]
		add cl, [edi + 70]
		or cl, [edi + 63]
		or cl, [edi + 79]
		xor cl, [edi + 36]
		cmp cl, 57
		jnz Wrong
		mov cl, [edi + 18]
		sub cl, [edi + 87]
		or cl, [edi + 83]
		xor cl, [edi + 36]
		or cl, [edi + 19]
		xor cl, [edi + 2]
		sub cl, [edi + 80]
		cmp cl, 183
		jnz Wrong
		mov cl, [edi + 19]
		sub cl, [edi + 63]
		xor cl, [edi + 10]
		add cl, [edi + 82]
		xor cl, [edi + 20]
		xor cl, [edi + 6]
		xor cl, [edi + 64]
		cmp cl, 174
		jnz Wrong
		mov cl, [edi + 20]
		or cl, [edi + 57]
		xor cl, [edi + 71]
		or cl, [edi + 39]
		or cl, [edi + 13]
		add cl, [edi + 80]
		xor cl, [edi + 91]
		cmp cl, 201
		jnz Wrong
		mov cl, [edi + 21]
		xor cl, [edi + 54]
		add cl, [edi + 71]
		xor cl, [edi + 72]
		and cl, [edi + 86]
		xor cl, [edi + 85]
		xor cl, [edi + 86]
		cmp cl, 93
		jnz Wrong
		mov cl, [edi + 22]
		sub cl, [edi + 58]
		xor cl, [edi + 14]
		xor cl, [edi + 65]
		xor cl, [edi + 19]
		xor cl, [edi + 57]
		sub cl, [edi + 38]
		cmp cl, 94
		jnz Wrong
		mov cl, [edi + 23]
		xor cl, [edi + 73]
		and cl, [edi + 72]
		xor cl, [edi + 26]
		sub cl, [edi + 1]
		xor cl, [edi + 6]
		xor cl, [edi + 21]
		cmp cl, 244
		jnz Wrong
		mov cl, [edi + 24]
		sub cl, [edi + 76]
		and cl, [edi + 16]
		add cl, [edi + 52]
		xor cl, [edi + 36]
		and cl, [edi + 69]
		and cl, [edi + 29]
		cmp cl, 4
		jnz Wrong
		mov cl, [edi + 25]
		add cl, [edi + 42]
		xor cl, [edi + 38]
		and cl, [edi + 55]
		sub cl, [edi + 80]
		or cl, [edi + 12]
		or cl, [edi + 10]
		cmp cl, 254
		jnz Wrong
		mov cl, [edi + 26]
		and cl, [edi + 71]
		add cl, [edi + 20]
		and cl, [edi + 16]
		sub cl, [edi + 47]
		and cl, [edi + 47]
		add cl, [edi + 24]
		cmp cl, 131
		jnz Wrong
		mov cl, [edi + 27]
		and cl, [edi + 80]
		and cl, [edi + 76]
		xor cl, [edi + 91]
		or cl, [edi + 20]
		and cl, [edi + 88]
		sub cl, [edi + 13]
		cmp cl, 245
		jnz Wrong
		mov cl, [edi + 28]
		xor cl, [edi + 89]
		and cl, [edi + 1]
		or cl, [edi + 79]
		xor cl, [edi + 7]
		and cl, [edi + 4]
		add cl, [edi + 12]
		cmp cl, 116
		jnz Wrong
		mov cl, [edi + 29]
		xor cl, [edi + 58]
		sub cl, [edi + 54]
		add cl, [edi + 68]
		xor cl, [edi + 22]
		xor cl, [edi + 32]
		xor cl, [edi + 95]
		cmp cl, 76
		jnz Wrong
		mov cl, [edi + 30]
		xor cl, [edi + 41]
		xor cl, [edi + 44]
		or cl, [edi + 40]
		and cl, [edi + 26]
		xor cl, [edi + 59]
		xor cl, [edi + 69]
		cmp cl, 19
		jnz Wrong
		mov cl, [edi + 31]
		and cl, [edi + 24]
		and cl, [edi + 16]
		add cl, [edi + 28]
		sub cl, [edi + 36]
		sub cl, [edi + 86]
		xor cl, [edi + 50]
		cmp cl, 192
		jnz Wrong
		mov cl, [edi + 32]
		sub cl, [edi + 33]
		xor cl, [edi + 36]
		xor cl, [edi + 54]
		xor cl, [edi + 69]
		xor cl, [edi + 37]
		xor cl, [edi + 50]
		cmp cl, 155
		jnz Wrong
		mov cl, [edi + 33]
		add cl, [edi + 22]
		add cl, [edi + 45]
		add cl, [edi + 94]
		xor cl, [edi + 52]
		and cl, [edi + 12]
		xor cl, [edi + 56]
		cmp cl, 46
		jnz Wrong
		mov cl, [edi + 34]
		xor cl, [edi + 6]
		add cl, [edi + 89]
		sub cl, [edi + 23]
		sub cl, [edi + 20]
		sub cl, [edi + 42]
		xor cl, [edi + 19]
		cmp cl, 107
		jnz Wrong
		mov cl, [edi + 35]
		xor cl, [edi + 91]
		add cl, [edi + 27]
		or cl, [edi + 72]
		or cl, [edi + 33]
		add cl, [edi + 60]
		or cl, [edi + 10]
		cmp cl, 105
		jnz Wrong
		mov cl, [edi + 36]
		xor cl, [edi + 42]
		and cl, [edi + 19]
		and cl, [edi + 24]
		xor cl, [edi + 24]
		and cl, [edi + 3]
		xor cl, [edi + 94]
		cmp cl, 42
		jnz Wrong
		mov cl, [edi + 37]
		or cl, [edi + 88]
		xor cl, [edi + 7]
		sub cl, [edi + 19]
		or cl, [edi + 71]
		or cl, [edi + 57]
		xor cl, [edi + 17]
		cmp cl, 142
		jnz Wrong
		mov cl, [edi + 38]
		sub cl, [edi + 9]
		xor cl, [edi + 76]
		xor cl, [edi + 71]
		and cl, [edi + 76]
		xor cl, [edi + 0]
		xor cl, [edi + 56]
		cmp cl, 57
		jnz Wrong
		mov cl, [edi + 39]
		add cl, [edi + 57]
		xor cl, [edi + 4]
		add cl, [edi + 20]
		add cl, [edi + 11]
		xor cl, [edi + 8]
		xor cl, [edi + 22]
		cmp cl, 12
		jnz Wrong
		mov cl, [edi + 40]
		add cl, [edi + 67]
		xor cl, [edi + 38]
		sub cl, [edi + 78]
		add cl, [edi + 85]
		or cl, [edi + 77]
		add cl, [edi + 91]
		cmp cl, 47
		jnz Wrong
		mov cl, [edi + 41]
		or cl, [edi + 78]
		xor cl, [edi + 11]
		and cl, [edi + 51]
		xor cl, [edi + 85]
		xor cl, [edi + 86]
		add cl, [edi + 84]
		cmp cl, 146
		jnz Wrong
		mov cl, [edi + 42]
		xor cl, [edi + 0]
		xor cl, [edi + 27]
		sub cl, [edi + 65]
		add cl, [edi + 90]
		xor cl, [edi + 31]
		xor cl, [edi + 12]
		cmp cl, 227
		jnz Wrong
		mov cl, [edi + 43]
		xor cl, [edi + 2]
		and cl, [edi + 40]
		xor cl, [edi + 63]
		add cl, [edi + 64]
		xor cl, [edi + 71]
		xor cl, [edi + 75]
		cmp cl, 33
		jnz Wrong
		mov cl, [edi + 44]
		sub cl, [edi + 9]
		xor cl, [edi + 81]
		or cl, [edi + 35]
		xor cl, [edi + 27]
		xor cl, [edi + 93]
		sub cl, [edi + 76]
		cmp cl, 9
		jnz Wrong
		mov cl, [edi + 45]
		or cl, [edi + 30]
		and cl, [edi + 71]
		xor cl, [edi + 78]
		and cl, [edi + 85]
		and cl, [edi + 61]
		or cl, [edi + 88]
		cmp cl, 127
		jnz Wrong
		mov cl, [edi + 46]
		and cl, [edi + 89]
		sub cl, [edi + 90]
		xor cl, [edi + 76]
		xor cl, [edi + 21]
		xor cl, [edi + 41]
		xor cl, [edi + 24]
		cmp cl, 66
		jnz Wrong
		mov cl, [edi + 47]
		xor cl, [edi + 36]
		xor cl, [edi + 61]
		sub cl, [edi + 18]
		add cl, [edi + 28]
		xor cl, [edi + 86]
		sub cl, [edi + 68]
		cmp cl, 252
		jnz Wrong
		mov cl, [edi + 48]
		or cl, [edi + 23]
		xor cl, [edi + 61]
		xor cl, [edi + 46]
		or cl, [edi + 8]
		add cl, [edi + 24]
		xor cl, [edi + 95]
		cmp cl, 167
		jnz Wrong
		mov cl, [edi + 49]
		xor cl, [edi + 67]
		xor cl, [edi + 32]
		add cl, [edi + 95]
		or cl, [edi + 25]
		sub cl, [edi + 42]
		add cl, [edi + 19]
		cmp cl, 246
		jnz Wrong
		mov cl, [edi + 50]
		xor cl, [edi + 19]
		xor cl, [edi + 85]
		xor cl, [edi + 90]
		sub cl, [edi + 36]
		sub cl, [edi + 46]
		xor cl, [edi + 67]
		cmp cl, 97
		jnz Wrong
		mov cl, [edi + 51]
		add cl, [edi + 59]
		xor cl, [edi + 60]
		sub cl, [edi + 56]
		and cl, [edi + 4]
		xor cl, [edi + 39]
		xor cl, [edi + 29]
		cmp cl, 67
		jnz Wrong
		mov cl, [edi + 52]
		add cl, [edi + 23]
		xor cl, [edi + 69]
		xor cl, [edi + 10]
		add cl, [edi + 91]
		and cl, [edi + 36]
		and cl, [edi + 91]
		cmp cl, 0
		jnz Wrong
		mov cl, [edi + 53]
		xor cl, [edi + 81]
		add cl, [edi + 52]
		and cl, [edi + 45]
		xor cl, [edi + 19]
		and cl, [edi + 28]
		xor cl, [edi + 88]
		cmp cl, 31
		jnz Wrong
		mov cl, [edi + 54]
		and cl, [edi + 82]
		sub cl, [edi + 60]
		or cl, [edi + 44]
		add cl, [edi + 27]
		xor cl, [edi + 57]
		xor cl, [edi + 62]
		cmp cl, 183
		jnz Wrong
		mov cl, [edi + 55]
		xor cl, [edi + 81]
		xor cl, [edi + 11]
		add cl, [edi + 10]
		sub cl, [edi + 17]
		xor cl, [edi + 12]
		and cl, [edi + 69]
		cmp cl, 94
		jnz Wrong
		mov cl, [edi + 56]
		xor cl, [edi + 93]
		xor cl, [edi + 19]
		xor cl, [edi + 53]
		sub cl, [edi + 36]
		xor cl, [edi + 51]
		add cl, [edi + 88]
		cmp cl, 57
		jnz Wrong
		mov cl, [edi + 57]
		xor cl, [edi + 18]
		xor cl, [edi + 11]
		add cl, [edi + 13]
		xor cl, [edi + 16]
		or cl, [edi + 69]
		or cl, [edi + 61]
		cmp cl, 255
		jnz Wrong
		mov cl, [edi + 58]
		xor cl, [edi + 67]
		xor cl, [edi + 39]
		xor cl, [edi + 61]
		xor cl, [edi + 61]
		xor cl, [edi + 60]
		or cl, [edi + 89]
		cmp cl, 122
		jnz Wrong
		mov cl, [edi + 59]
		sub cl, [edi + 86]
		sub cl, [edi + 46]
		and cl, [edi + 4]
		xor cl, [edi + 69]
		xor cl, [edi + 40]
		add cl, [edi + 10]
		cmp cl, 108
		jnz Wrong
		mov cl, [edi + 60]
		xor cl, [edi + 84]
		xor cl, [edi + 76]
		sub cl, [edi + 66]
		xor cl, [edi + 18]
		or cl, [edi + 68]
		and cl, [edi + 40]
		cmp cl, 95
		jnz Wrong
		mov cl, [edi + 61]
		sub cl, [edi + 87]
		xor cl, [edi + 81]
		add cl, [edi + 56]
		xor cl, [edi + 82]
		xor cl, [edi + 53]
		and cl, [edi + 54]
		cmp cl, 66
		jnz Wrong
		mov cl, [edi + 62]
		xor cl, [edi + 41]
		sub cl, [edi + 42]
		xor cl, [edi + 67]
		sub cl, [edi + 3]
		xor cl, [edi + 56]
		sub cl, [edi + 44]
		cmp cl, 120
		jnz Wrong
		mov cl, [edi + 63]
		xor cl, [edi + 53]
		or cl, [edi + 23]
		or cl, [edi + 90]
		xor cl, [edi + 30]
		or cl, [edi + 55]
		xor cl, [edi + 14]
		cmp cl, 11
		jnz Wrong
		mov cl, [edi + 64]
		and cl, [edi + 29]
		or cl, [edi + 71]
		xor cl, [edi + 46]
		xor cl, [edi + 44]
		xor cl, [edi + 59]
		and cl, [edi + 60]
		cmp cl, 34
		jnz Wrong
		mov cl, [edi + 65]
		and cl, [edi + 88]
		and cl, [edi + 58]
		xor cl, [edi + 43]
		sub cl, [edi + 49]
		sub cl, [edi + 73]
		or cl, [edi + 85]
		cmp cl, 181
		jnz Wrong
		mov cl, [edi + 66]
		sub cl, [edi + 89]
		add cl, [edi + 16]
		xor cl, [edi + 18]
		xor cl, [edi + 40]
		add cl, [edi + 88]
		add cl, [edi + 12]
		cmp cl, 173
		jnz Wrong
		mov cl, [edi + 67]
		xor cl, [edi + 3]
		xor cl, [edi + 9]
		xor cl, [edi + 30]
		sub cl, [edi + 48]
		and cl, [edi + 90]
		xor cl, [edi + 59]
		cmp cl, 127
		jnz Wrong
		mov cl, [edi + 68]
		xor cl, [edi + 4]
		xor cl, [edi + 36]
		xor cl, [edi + 11]
		xor cl, [edi + 51]
		or cl, [edi + 0]
		and cl, [edi + 50]
		cmp cl, 86
		jnz Wrong
		mov cl, [edi + 69]
		xor cl, [edi + 55]
		xor cl, [edi + 81]
		xor cl, [edi + 4]
		sub cl, [edi + 19]
		xor cl, [edi + 0]
		xor cl, [edi + 73]
		cmp cl, 179
		jnz Wrong
		mov cl, [edi + 70]
		xor cl, [edi + 37]
		or cl, [edi + 15]
		and cl, [edi + 63]
		xor cl, [edi + 12]
		xor cl, [edi + 81]
		xor cl, [edi + 48]
		cmp cl, 116
		jnz Wrong
		mov cl, [edi + 71]
		xor cl, [edi + 87]
		xor cl, [edi + 77]
		xor cl, [edi + 6]
		sub cl, [edi + 80]
		xor cl, [edi + 57]
		xor cl, [edi + 51]
		cmp cl, 154
		jnz Wrong
		mov cl, [edi + 72]
		and cl, [edi + 89]
		xor cl, [edi + 93]
		xor cl, [edi + 57]
		xor cl, [edi + 76]
		and cl, [edi + 12]
		sub cl, [edi + 92]
		cmp cl, 6
		jnz Wrong
		mov cl, [edi + 73]
		xor cl, [edi + 94]
		xor cl, [edi + 65]
		xor cl, [edi + 6]
		add cl, [edi + 87]
		sub cl, [edi + 56]
		xor cl, [edi + 49]
		cmp cl, 200
		jnz Wrong
		mov cl, [edi + 74]
		xor cl, [edi + 60]
		or cl, [edi + 12]
		add cl, [edi + 35]
		sub cl, [edi + 58]
		xor cl, [edi + 10]
		sub cl, [edi + 80]
		cmp cl, 72
		jnz Wrong
		mov cl, [edi + 75]
		add cl, [edi + 37]
		sub cl, [edi + 50]
		xor cl, [edi + 71]
		add cl, [edi + 94]
		xor cl, [edi + 68]
		xor cl, [edi + 49]
		cmp cl, 160
		jnz Wrong
		mov cl, [edi + 76]
		add cl, [edi + 83]
		and cl, [edi + 15]
		xor cl, [edi + 65]
		or cl, [edi + 53]
		sub cl, [edi + 15]
		xor cl, [edi + 66]
		cmp cl, 44
		jnz Wrong
		mov cl, [edi + 77]
		add cl, [edi + 56]
		xor cl, [edi + 30]
		xor cl, [edi + 8]
		xor cl, [edi + 30]
		and cl, [edi + 91]
		xor cl, [edi + 18]
		cmp cl, 101
		jnz Wrong
		mov cl, [edi + 78]
		or cl, [edi + 79]
		xor cl, [edi + 58]
		sub cl, [edi + 46]
		xor cl, [edi + 46]
		xor cl, [edi + 55]
		add cl, [edi + 45]
		cmp cl, 224
		jnz Wrong
		mov cl, [edi + 79]
		or cl, [edi + 93]
		or cl, [edi + 23]
		and cl, [edi + 24]
		xor cl, [edi + 94]
		xor cl, [edi + 31]
		xor cl, [edi + 86]
		cmp cl, 4
		jnz Wrong
		mov cl, [edi + 80]
		sub cl, [edi + 55]
		or cl, [edi + 67]
		and cl, [edi + 63]
		xor cl, [edi + 46]
		xor cl, [edi + 7]
		and cl, [edi + 21]
		cmp cl, 64
		jnz Wrong
		mov cl, [edi + 81]
		and cl, [edi + 30]
		xor cl, [edi + 20]
		xor cl, [edi + 44]
		xor cl, [edi + 53]
		xor cl, [edi + 48]
		or cl, [edi + 1]
		cmp cl, 119
		jnz Wrong
		mov cl, [edi + 82]
		xor cl, [edi + 70]
		xor cl, [edi + 23]
		add cl, [edi + 1]
		sub cl, [edi + 51]
		sub cl, [edi + 14]
		or cl, [edi + 25]
		cmp cl, 119
		jnz Wrong
		mov cl, [edi + 83]
		or cl, [edi + 39]
		xor cl, [edi + 60]
		or cl, [edi + 5]
		or cl, [edi + 58]
		xor cl, [edi + 22]
		xor cl, [edi + 37]
		cmp cl, 2
		jnz Wrong
		mov cl, [edi + 84]
		or cl, [edi + 9]
		xor cl, [edi + 74]
		or cl, [edi + 91]
		sub cl, [edi + 6]
		and cl, [edi + 51]
		xor cl, [edi + 51]
		cmp cl, 42
		jnz Wrong
		mov cl, [edi + 85]
		xor cl, [edi + 71]
		add cl, [edi + 47]
		and cl, [edi + 62]
		xor cl, [edi + 19]
		xor cl, [edi + 2]
		xor cl, [edi + 81]
		cmp cl, 20
		jnz Wrong
		mov cl, [edi + 86]
		add cl, [edi + 84]
		xor cl, [edi + 70]
		xor cl, [edi + 58]
		xor cl, [edi + 94]
		and cl, [edi + 33]
		xor cl, [edi + 72]
		cmp cl, 2
		jnz Wrong
		mov cl, [edi + 87]
		and cl, [edi + 44]
		xor cl, [edi + 36]
		or cl, [edi + 20]
		xor cl, [edi + 88]
		and cl, [edi + 80]
		or cl, [edi + 44]
		cmp cl, 125
		jnz Wrong
		mov cl, [edi + 88]
		sub cl, [edi + 0]
		xor cl, [edi + 50]
		and cl, [edi + 25]
		xor cl, [edi + 94]
		xor cl, [edi + 38]
		xor cl, [edi + 81]
		cmp cl, 56
		jnz Wrong
		mov cl, [edi + 89]
		xor cl, [edi + 63]
		and cl, [edi + 66]
		or cl, [edi + 11]
		xor cl, [edi + 93]
		or cl, [edi + 84]
		or cl, [edi + 3]
		cmp cl, 115
		jnz Wrong
		mov cl, [edi + 90]
		or cl, [edi + 67]
		xor cl, [edi + 95]
		add cl, [edi + 16]
		and cl, [edi + 85]
		xor cl, [edi + 13]
		and cl, [edi + 52]
		cmp cl, 32
		jnz Wrong
		mov cl, [edi + 91]
		add cl, [edi + 51]
		xor cl, [edi + 80]
		add cl, [edi + 74]
		xor cl, [edi + 78]
		xor cl, [edi + 68]
		xor cl, [edi + 44]
		cmp cl, 78
		jnz Wrong
		mov cl, [edi + 92]
		sub cl, [edi + 59]
		xor cl, [edi + 87]
		and cl, [edi + 30]
		or cl, [edi + 33]
		xor cl, [edi + 15]
		xor cl, [edi + 18]
		cmp cl, 104
		jnz Wrong
		mov cl, [edi + 93]
		xor cl, [edi + 15]
		xor cl, [edi + 58]
		sub cl, [edi + 6]
		add cl, [edi + 76]
		xor cl, [edi + 39]
		and cl, [edi + 67]
		cmp cl, 4
		jnz Wrong
		mov cl, [edi + 94]
		xor cl, [edi + 80]
		xor cl, [edi + 72]
		or cl, [edi + 0]
		xor cl, [edi + 66]
		and cl, [edi + 77]
		and cl, [edi + 65]
		cmp cl, 116
		jnz Wrong
		mov cl, [edi + 95]
		xor cl, [edi + 8]
		and cl, [edi + 70]
		xor cl, [edi + 7]
		sub cl, [edi + 28]
		or cl, [edi + 55]
		xor cl, [edi + 83]
		cmp cl, 160
		jnz Wrong
		mov cl, [edi + 79]
		cmp cl, 95
		jnz Wrong
		mov cl, [edi + 47]
		cmp cl, 52
		jnz Wrong
		mov cl, [edi + 61]
		cmp cl, 117
		jnz Wrong
		Correct:
		mov eax,1
		mov esp,ebp
		pop ebp
		ret
		Wrong:
		mov eax, 0
		mov esp, ebp
		pop ebp
		ret
	}

}
int main()
{
	unsigned char input[100] = { 0 };
	printf("Enter The Flag:\n");
	scanf("%s", &input);
	if (input_check(input))
	{
		printf("Correct Flag :)\n");
	}
	else
	{
		printf("Go Away Not The Right Flag :(\n");
	}
	return 1;
}