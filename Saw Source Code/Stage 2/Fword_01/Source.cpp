#include <stdio.h>
#include <windows.h>
#include <stdint.h>

#pragma warning(disable:4996)

int input_check(unsigned char* x)
{
	int tmp = 0;
	_asm {
		mov edi, [x]
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 363]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 323]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 68]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 372]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 299]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 249]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 346]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 301]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 68]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 91]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 185]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 304]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 91]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 281]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 224]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 189]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 280]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 251]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 310]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 118]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 251]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 313]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 59]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 207]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 354]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 111]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 85]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 381]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 179]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 195]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 330]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 105]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 101]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 46]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 347]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 142]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 65]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 223]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 277]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 222]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 362]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 77]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 370]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 207]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 268]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 64]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 30]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 121]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 188]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 114]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 300]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 312]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 86]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 258]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 97]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 339]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 58]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 96]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 54]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 316]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 242]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 201]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 51]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 168]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 172]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 192]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 306]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 159]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 292]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 330]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 247]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 288]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 380]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 296]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 137]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 377]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 148]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 276]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 297]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 389]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 210]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 70]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 209]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 229]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 332]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 384]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 91]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 74]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 118]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 7]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 217]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 200]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 72]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 102]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 368]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 220]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 328]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 94]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 344]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 161]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 117]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 134]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 366]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 149]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 336]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 291]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 351]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 200]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 385]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 219]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 33]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 113]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 28]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 299]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 83]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 244]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 344]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 212]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 111]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 87]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 196]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 322]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 261]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 328]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 108]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 201]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 356]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 279]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 37]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 62]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 115]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 373]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 32]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 79]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 214]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 194]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 182]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 281]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 301]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 71]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 89]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 135]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 76]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 318]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 40]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 83]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 13]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 1]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 56]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 218]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 154]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 353]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 283]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 247]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 390]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 85]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 161]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 239]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 225]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 388]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 212]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 193]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 57]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 78]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 93]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 287]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 383]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 34]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 244]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 82]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 40]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 61]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 376]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 103]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 74]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 215]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 115]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 191]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 180]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 182]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 54]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 213]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 10]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 35]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 66]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 183]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 136]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 327]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 271]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 221]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 249]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 13]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 36]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 389]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 282]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 346]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 297]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 271]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 343]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 78]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 35]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 399]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 125]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 77]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 386]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 318]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 99]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 395]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 162]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 184]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 185]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 183]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 222]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 373]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 264]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 198]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 386]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 252]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 235]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 22]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 293]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 115]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 263]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 239]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 138]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 38]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 376]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 91]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 345]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 127]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 160]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 70]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 206]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 82]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 241]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 356]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 154]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 190]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 396]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 228]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 321]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 140]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 45]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 152]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 328]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 130]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 155]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 100]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 61]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 332]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 371]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 271]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 296]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 341]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 191]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 358]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 225]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 94]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 58]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 153]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 204]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 327]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 39]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 109]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 162]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 335]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 157]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 49]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 46]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 220]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 276]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 205]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 19]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 235]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 170]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 145]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 252]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 64]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 163]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 366]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 364]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 129]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 311]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 388]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 375]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 68]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 31]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 270]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 396]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 106]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 259]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 397]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 189]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 248]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 226]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 273]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 317]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 139]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 214]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 1]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 370]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 207]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 141]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 96]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 40]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 127]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 309]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 12]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 103]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 197]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 211]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 363]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 209]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 331]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 171]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 35]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 360]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 168]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 75]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 150]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 321]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 331]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 243]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 370]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 23]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 145]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 315]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 242]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 185]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 291]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 397]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 231]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 242]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 286]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 214]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 379]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 251]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 282]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 155]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 156]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 246]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 218]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 319]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 143]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 159]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 14]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 42]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 270]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 239]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 148]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 193]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 31]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 239]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 76]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 130]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 228]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 39]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 43]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 198]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 195]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 374]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 19]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 241]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 111]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 43]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 184]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 64]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 75]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 8]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 302]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 180]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 134]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 7]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 335]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 260]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 177]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 377]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 281]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 119]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 124]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 290]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 95]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 65]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 169]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 12]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 123]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 323]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 102]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 245]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 293]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 240]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 361]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 223]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 221]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 205]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 56]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 235]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 247]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 243]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 116]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 21]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 243]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 3]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 291]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 397]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 377]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 40]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 367]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 318]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 294]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 220]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 360]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 219]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 273]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 312]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 272]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 34]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 109]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 280]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 232]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 255]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 161]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 131]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 186]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 192]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 1]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 278]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 170]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 363]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 334]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 253]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 80]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 362]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 372]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 381]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 174]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 329]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 53]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 209]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 93]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 66]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 178]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 185]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 144]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 34]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 313]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 216]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 248]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 256]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 238]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 396]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 11]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 303]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 127]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 213]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 162]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 52]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 10]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 365]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 248]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 391]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 267]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 382]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 305]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 391]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 108]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 175]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 35]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 322]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 164]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 123]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 218]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 321]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 314]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 329]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 243]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 274]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 81]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 4]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 16]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 266]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 271]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 389]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 23]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 142]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 391]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 184]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 337]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 368]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 224]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 23]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 110]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 106]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 151]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 392]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 88]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 26]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 309]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 21]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 209]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 338]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 93]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 97]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 265]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 38]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 278]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 229]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 114]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 2]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 92]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 132]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 293]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 290]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 219]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 169]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 261]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 20]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 272]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 97]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 319]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 369]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 39]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 300]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 50]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 109]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 307]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 124]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 376]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 22]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 187]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 164]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 377]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 129]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 306]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 272]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 172]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 124]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 298]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 349]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 106]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 20]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 47]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 90]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 42]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 211]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 295]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 6]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 388]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 2]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 192]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 135]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 53]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 196]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 225]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 369]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 209]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 302]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 0]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 256]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 304]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 117]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 239]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 104]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 329]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 324]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 374]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 113]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 90]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 3]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 100]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 48]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 223]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 148]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 245]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 71]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 292]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 139]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 61]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 149]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 399]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 232]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 5]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 86]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 307]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 279]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 138]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 201]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 255]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 342]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 386]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 19]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 226]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 234]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 256]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 149]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 245]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 150]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 387]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 177]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 8]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 218]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 95]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 113]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 110]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 395]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 226]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 203]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 12]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 299]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 306]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 384]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 1]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 230]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 283]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 88]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 389]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 249]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 349]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 88]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 213]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 208]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 351]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 141]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 141]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 33]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 224]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 75]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 66]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 224]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 89]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 26]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 142]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 352]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 367]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 199]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 320]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 16]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 253]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 124]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 63]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 279]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 168]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 100]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 229]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 40]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 147]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 140]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 187]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 238]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 230]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 255]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 139]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 246]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 257]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 268]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 243]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 2]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 53]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 226]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 371]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 218]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 1]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 299]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 383]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 360]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 277]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 19]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 183]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 219]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 176]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 122]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 263]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 331]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 345]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 289]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 333]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 122]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 168]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 349]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 359]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 263]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 397]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 149]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 255]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 229]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 235]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 343]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 337]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 350]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 278]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 172]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 206]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 374]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 174]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 365]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 366]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 141]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 107]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 211]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 33]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 239]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 71]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 347]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 30]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 358]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 69]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 284]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 164]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 190]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 74]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 154]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 266]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 137]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 350]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 279]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 86]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 273]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 31]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 251]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 224]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 350]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 59]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 66]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 330]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 88]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 211]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 373]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 311]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 25]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 143]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 160]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 364]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 326]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 117]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 179]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 3]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 351]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 282]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 17]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 375]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 110]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 124]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 31]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 24]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 290]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 342]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 89]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 233]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 261]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 318]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 352]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 232]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 18]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 106]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 344]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 64]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 334]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 55]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 234]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 119]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 306]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 30]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 393]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 228]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 221]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 199]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 31]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 158]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 358]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 194]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 339]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 131]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 208]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 379]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 165]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 0]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 131]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 100]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 341]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 380]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 275]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 211]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 327]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 207]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 69]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 245]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 92]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 289]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 200]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 30]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 23]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 325]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 72]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 13]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 301]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 90]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 132]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 320]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 350]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 383]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 284]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 320]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 367]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 85]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 126]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 342]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 273]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 353]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 159]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 15]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 250]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 297]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 350]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 50]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 62]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 147]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 0]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 113]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 170]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 175]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 116]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 173]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 345]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 166]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 247]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 313]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 250]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 232]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 362]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 200]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 166]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 306]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 220]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 9]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 143]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 53]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 178]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 392]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 303]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 371]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 150]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 210]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 268]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 295]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 391]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 85]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 297]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 220]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 241]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 257]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 155]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 83]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 163]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 139]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 136]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 308]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 3]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 41]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 138]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 157]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 52]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 302]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 1]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 27]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 286]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 395]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 362]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 392]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 239]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 10]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 266]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 307]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 61]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 361]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 29]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 161]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 68]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 321]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 220]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 228]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 184]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 208]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 332]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 20]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 46]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 361]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 384]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 344]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 188]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 269]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 249]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 24]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 3]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 145]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 0]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 288]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 348]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 88]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 8]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 73]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 56]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 173]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 349]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 69]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 258]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 132]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 230]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 304]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 39]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 395]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 288]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 235]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 231]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 266]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 121]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 203]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 156]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 356]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 283]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 102]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 80]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 179]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 16]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 297]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 169]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 260]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 105]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 308]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 202]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 254]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 275]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 49]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 48]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 37]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 270]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 369]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 380]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 158]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 24]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 55]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 127]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 154]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 155]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 36]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 63]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 269]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 157]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 302]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 44]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 60]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 393]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 397]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 151]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 17]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 348]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 112]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 192]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 80]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 267]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 147]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 143]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 64]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 296]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 376]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 387]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 334]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 63]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 5]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 33]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 58]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 310]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 81]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 236]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 308]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 246]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 84]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 218]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 236]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 108]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 79]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 195]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 121]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 271]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 301]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 391]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 89]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 132]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 378]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 175]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 271]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 166]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 231]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 174]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 292]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 210]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 364]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 283]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 176]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 333]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 172]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 215]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 57]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 249]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 162]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 333]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 344]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 298]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 16]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 212]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 216]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 173]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 205]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 47]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 81]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 333]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 9]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 84]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 260]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 370]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 29]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 79]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 78]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 164]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 137]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 5]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 387]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 277]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 75]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 181]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 336]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 97]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 173]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 146]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 150]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 161]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 394]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 59]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 151]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 364]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 7]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 285]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 117]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 334]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 398]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 209]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 362]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 4]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 379]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 378]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 287]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 136]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 12]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 368]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 50]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 388]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 48]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 172]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 29]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 244]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 256]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 92]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 104]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 305]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 317]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 58]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 147]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 103]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 32]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 284]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 188]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 388]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 256]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 238]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 191]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 118]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 183]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 150]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 178]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 106]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 134]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 381]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 206]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 194]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 13]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 334]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 287]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 232]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 199]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 316]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 30]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 339]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 146]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 47]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 42]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 298]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 234]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 185]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 315]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 334]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 128]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 82]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 125]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 340]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 339]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 240]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 115]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 25]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 54]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 112]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 137]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 159]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 309]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 210]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 142]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 45]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 371]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 253]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 320]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 86]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 81]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 195]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 134]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 325]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 367]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 225]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 373]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 217]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 183]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 168]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 395]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 280]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 124]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 238]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 12]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 256]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 313]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 392]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 283]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 103]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 300]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 71]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 33]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 37]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 179]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 110]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 192]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 134]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 394]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 186]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 392]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 164]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 125]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 202]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 187]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 247]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 100]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 136]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 397]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 201]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 47]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 252]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 125]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 149]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 254]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 158]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 245]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 349]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 166]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 315]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 276]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 41]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 164]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 111]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 208]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 146]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 31]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 11]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 301]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 388]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 259]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 167]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 366]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 322]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 72]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 323]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 279]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 50]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 300]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 46]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 45]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 339]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 221]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 178]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 305]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 62]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 328]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 245]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 281]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 146]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 376]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 212]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 265]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 11]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 225]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 377]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 270]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 265]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 24]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 96]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 2]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 251]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 231]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 114]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 189]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 237]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 148]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 132]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 121]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 131]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 273]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 390]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 377]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 125]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 98]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 21]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 346]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 80]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 348]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 332]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 320]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 354]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 2]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 339]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 32]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 120]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 60]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 41]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 22]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 307]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 213]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 15]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 134]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 52]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 177]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 158]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 68]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 356]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 93]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 112]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 306]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 211]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 101]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 144]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 199]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 94]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 28]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 295]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 50]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 267]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 197]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 300]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 383]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 79]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 54]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 282]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 341]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 328]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 378]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 42]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 180]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 387]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 105]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 232]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 49]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 178]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 399]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 360]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 72]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 237]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 67]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 395]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 176]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 142]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 316]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 83]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 244]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 145]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 159]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 273]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 383]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 174]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 55]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 373]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 134]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 30]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 382]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 214]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 392]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 322]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 202]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 181]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 382]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 291]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 301]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 278]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 260]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 335]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 357]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 56]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 94]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 15]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 206]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 21]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 255]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 196]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 382]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 180]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 167]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 123]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 205]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 157]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 304]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 194]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 285]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 328]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 38]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 236]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 49]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 116]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 319]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 310]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 155]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 336]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 332]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 220]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 384]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 12]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 269]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 325]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 14]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 275]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 138]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 66]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 10]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 252]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 201]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 359]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 47]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 193]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 332]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 279]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 29]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 171]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 129]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 55]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 210]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 317]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 119]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 156]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 102]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 326]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 383]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 365]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 261]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 375]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 190]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 281]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 85]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 213]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 289]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 368]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 23]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 277]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 381]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 349]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 16]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 286]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 48]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 235]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 91]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 221]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 330]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 382]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 65]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 178]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 72]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 109]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 162]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 304]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 142]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 75]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 22]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 133]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 340]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 180]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 173]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 67]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 17]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 375]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 171]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 147]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 346]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 78]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 330]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 2]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 83]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 268]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 323]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 49]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 10]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 142]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 276]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 127]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 26]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 352]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 285]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 70]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 54]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 198]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 326]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 204]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 1]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 234]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 372]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 121]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 65]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 43]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 3]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 225]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 366]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 315]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 36]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 32]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 385]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 111]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 36]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 325]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 84]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 263]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 101]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 228]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 320]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 141]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 255]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 147]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 141]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 380]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 129]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 342]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 6]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 268]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 297]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 39]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 347]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 322]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 117]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 289]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 337]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 91]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 51]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 209]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 103]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 51]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 394]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 12]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 241]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 37]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 152]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 43]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 247]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 103]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 288]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 128]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 264]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 255]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 361]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 261]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 317]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 344]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 8]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 36]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 188]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 55]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 115]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 340]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 20]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 381]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 133]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 28]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 17]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 148]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 227]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 34]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 44]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 115]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 177]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 120]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 94]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 317]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 104]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 291]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 266]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 332]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 357]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 129]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 305]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 66]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 46]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 366]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 185]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 87]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 205]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 299]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 338]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 214]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 204]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 253]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 189]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 105]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 44]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 250]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 295]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 114]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 27]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 165]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 90]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 76]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 107]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 321]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 340]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 153]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 13]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 221]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 112]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 16]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 233]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 244]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 197]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 112]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 374]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 122]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 304]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 254]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 286]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 310]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 9]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 126]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 261]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 271]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 310]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 337]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 248]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 257]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 303]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 346]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 90]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 294]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 293]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 322]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 32]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 135]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 348]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 369]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 179]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 182]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 113]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 385]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 206]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 298]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 183]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 163]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 111]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 181]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 257]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 288]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 112]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 4]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 305]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 23]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 300]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 151]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 57]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 129]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 215]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 314]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 303]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 130]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 69]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 162]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 297]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 87]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 90]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 54]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 233]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 358]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 328]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 195]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 218]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 70]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 145]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 359]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 357]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 140]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 109]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 326]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 234]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 248]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 219]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 199]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 120]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 216]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 278]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 379]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 319]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 319]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 336]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 138]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 144]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 295]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 135]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 347]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 38]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 147]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 2]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 327]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 84]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 92]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 167]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 191]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 212]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 99]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 315]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 2]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 193]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 216]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 114]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 183]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 290]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 264]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 354]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 254]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 106]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 79]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 21]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 398]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 229]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 9]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 387]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 207]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 165]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 22]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 120]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 391]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 126]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 281]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 363]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 306]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 226]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 302]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 133]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 262]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 341]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 89]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 277]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 338]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 227]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 262]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 230]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 19]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 306]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 293]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 87]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 52]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 331]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 314]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 340]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 129]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 254]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 167]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 302]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 235]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 144]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 393]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 389]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 282]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 48]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 137]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 26]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 135]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 70]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 7]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 152]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 343]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 175]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 341]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 339]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 73]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 187]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 18]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 298]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 270]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 202]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 323]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 398]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 174]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 260]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 41]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 359]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 46]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 370]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 121]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 316]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 363]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 383]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 27]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 387]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 193]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 244]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 372]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 327]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 378]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 215]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 210]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 178]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 228]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 333]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 17]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 7]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 213]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 140]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 89]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 296]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 158]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 312]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 7]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 319]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 253]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 196]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 344]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 6]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 326]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 108]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 44]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 264]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 53]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 335]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 13]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 389]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 74]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 61]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 181]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 266]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 378]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 5]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 314]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 35]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 152]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 264]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 366]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 62]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 55]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 253]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 149]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 185]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 184]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 331]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 326]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 259]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 68]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 120]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 113]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 191]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 222]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 133]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 358]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 71]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 58]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 398]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 73]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 234]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 307]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 28]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 43]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 153]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 69]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 307]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 47]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 379]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 8]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 368]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 394]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 280]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 217]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 234]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 317]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 71]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 219]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 205]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 284]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 48]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 385]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 96]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 393]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 305]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 152]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 6]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 334]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 369]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 188]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 378]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 371]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 56]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 277]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 337]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 368]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 165]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 371]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 258]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 199]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 156]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 285]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 394]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 344]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 125]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 85]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 261]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 353]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 267]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 212]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 263]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 310]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 18]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 374]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 82]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 9]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 33]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 182]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 37]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 122]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 165]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 56]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 163]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 105]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 24]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 14]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 206]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 58]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 172]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 224]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 189]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 180]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 240]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 348]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 173]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 13]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 1]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 362]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 387]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 110]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 88]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 6]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 102]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 51]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 327]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 27]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 0]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 198]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 57]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 283]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 275]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 312]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 368]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 7]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 163]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 240]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 262]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 254]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 67]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 189]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 384]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 353]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 342]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 34]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 265]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 42]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 310]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 105]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 308]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 88]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 123]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 102]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 250]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 250]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 290]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 118]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 143]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 227]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 56]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 177]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 9]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 258]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 197]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 246]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 76]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 351]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 229]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 368]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 107]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 343]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 132]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 267]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 72]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 42]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 379]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 249]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 32]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 158]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 354]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 324]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 40]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 320]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 136]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 155]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 355]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 352]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 25]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 191]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 173]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 63]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 301]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 260]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 186]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 215]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 99]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 228]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 270]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 170]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 227]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 210]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 77]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 45]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 189]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 295]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 334]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 25]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 39]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 324]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 95]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 45]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 323]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 292]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 217]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 49]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 226]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 169]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 72]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 92]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 172]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 292]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 160]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 370]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 187]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 209]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 197]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 11]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 265]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 262]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 122]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 345]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 63]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 258]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 222]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 60]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 303]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 203]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 299]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 119]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 274]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 64]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 114]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 272]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 131]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 390]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 38]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 29]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 358]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 394]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 386]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 317]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 198]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 95]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 150]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 294]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 268]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 73]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 116]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 265]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 325]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 90]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 362]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 390]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 161]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 288]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 106]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 257]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 53]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 14]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 29]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 101]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 365]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 157]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 199]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 236]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 292]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 84]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 311]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 396]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 226]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 223]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 135]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 137]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 63]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 246]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 128]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 92]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 100]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 64]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 83]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 379]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 8]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 97]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 206]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 317]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 10]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 221]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 99]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 39]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 313]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 11]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 285]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 16]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 385]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 262]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 361]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 364]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 137]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 359]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 168]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 367]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 57]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 285]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 296]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 95]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 65]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 302]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 365]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 124]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 309]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 352]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 375]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 264]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 189]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 18]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 329]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 196]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 200]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 94]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 101]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 352]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 230]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 44]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 280]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 294]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 72]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 191]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 166]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 65]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 370]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 24]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 175]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 102]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 138]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 160]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 20]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 232]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 21]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 363]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 282]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 87]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 393]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 356]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 119]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 399]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 203]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 173]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 49]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 321]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 78]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 78]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 197]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 141]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 347]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 22]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 184]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 336]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 342]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 220]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 311]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 293]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 186]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 65]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 399]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 213]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 131]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 350]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 290]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 65]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 376]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 254]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 337]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 74]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 354]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 312]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 26]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 224]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 56]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 61]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 357]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 37]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 38]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 294]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 55]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 29]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 234]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 243]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 389]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 363]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 97]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 325]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 22]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 101]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 335]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 347]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 214]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 333]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 378]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 119]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 81]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 35]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 29]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 22]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 353]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 98]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 358]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 223]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 275]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 66]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 316]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 343]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 208]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 269]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 90]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 348]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 342]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 287]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 171]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 227]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 285]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 236]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 303]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 288]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 130]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 128]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 283]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 67]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 159]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 312]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 93]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 270]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 132]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 37]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 341]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 286]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 321]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 218]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 82]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 166]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 272]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 177]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 390]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 336]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 299]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 76]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 87]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 51]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 286]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 67]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 75]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 128]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 108]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 125]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 289]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 156]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 83]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 309]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 329]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 258]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 93]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 207]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 225]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 381]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 315]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 96]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 94]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 352]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 280]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 62]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 300]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 215]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 249]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 338]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 19]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 91]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 89]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 126]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 203]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 41]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 385]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 289]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 181]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 171]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 127]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 186]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 284]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 151]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 333]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 240]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 184]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 340]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 94]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 380]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 88]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 15]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 273]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 251]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 158]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 230]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 150]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 36]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 174]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 274]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 346]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 28]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 256]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 160]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 162]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 338]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 114]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 396]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 26]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 375]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 340]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 165]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 43]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 222]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 82]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 251]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 201]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 41]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 291]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 58]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 382]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 28]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 276]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 74]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 8]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 110]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 345]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 276]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 120]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 153]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 165]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 159]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 329]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 248]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 132]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 265]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 15]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 60]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 17]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 331]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 84]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 242]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 96]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 108]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 67]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 238]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 3]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 44]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 318]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 217]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 144]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 123]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 140]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 237]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 331]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 5]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 327]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 356]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 238]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 323]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 33]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 377]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 360]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 359]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 282]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 355]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 372]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 131]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 355]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 137]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 222]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 283]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 24]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 275]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 324]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 388]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 242]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 274]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 369]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 191]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 126]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 136]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 291]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 200]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 318]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 69]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 166]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 319]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 11]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 38]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 165]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 240]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 229]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 293]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 27]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 276]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 308]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 76]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 206]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 152]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 129]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 284]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 171]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 25]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 295]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 236]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 109]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 120]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 380]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 201]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 52]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 83]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 143]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 40]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 303]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 3]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 153]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 312]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 294]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 293]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 111]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 75]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 109]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 308]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 120]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 267]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 98]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 170]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 244]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 98]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 312]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 331]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 140]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 243]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 247]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 265]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 340]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 78]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 5]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 44]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 279]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 279]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 204]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 126]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 156]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 216]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 107]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 213]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 196]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 111]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 104]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 70]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 241]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 122]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 0]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 274]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 325]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 19]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 20]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 167]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 20]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 50]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 98]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 214]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 324]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 99]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 61]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 324]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 255]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 321]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 193]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 263]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 105]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 159]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 182]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 364]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 375]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 304]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 23]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 167]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 292]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 134]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 154]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 315]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 311]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 154]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 9]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 204]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 169]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 97]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 367]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 361]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 307]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 249]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 281]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 246]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 39]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 232]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 146]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 361]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 14]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 76]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 289]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 301]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 121]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 200]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 0]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 372]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 92]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 356]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 36]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 170]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 230]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 60]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 361]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 325]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 333]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 35]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 182]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 313]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 386]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 355]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 153]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 372]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 208]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 274]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 157]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 178]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 76]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 322]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 47]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 363]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 250]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 43]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 205]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 215]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 151]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 110]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 107]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 197]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 233]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 269]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 164]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 4]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 253]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 135]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 398]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 351]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 154]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 112]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 387]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 37]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 309]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 114]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 144]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 360]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 104]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 52]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 353]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 370]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 98]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 68]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 322]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 115]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 48]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 256]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 190]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 305]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 260]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 241]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 35]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 207]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 359]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 175]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 187]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 328]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 319]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 82]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 357]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 380]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 77]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 236]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 236]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 398]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 217]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 168]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 79]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 118]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 372]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 6]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 399]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 202]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 254]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 86]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 128]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 110]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 102]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 119]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 187]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 202]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 148]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 393]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 127]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 194]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 156]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 28]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 135]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 24]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 67]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 32]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 169]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 243]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 104]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 242]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 146]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 95]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 395]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 15]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 385]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 195]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 69]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 81]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 316]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 34]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 4]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 17]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 176]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 180]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 4]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 272]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 233]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 354]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 33]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 101]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 286]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 176]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 61]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 174]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 190]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 188]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 252]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 338]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 367]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 374]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 13]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 364]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 277]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 199]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 100]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 248]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 357]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 212]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 200]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 241]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 27]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 146]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 326]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 225]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 393]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 182]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 238]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 329]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 95]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 186]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 381]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 170]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 45]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 384]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 228]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 95]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 299]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 127]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 247]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 14]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 136]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 62]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 38]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 343]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 162]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 197]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 296]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 290]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 337]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 253]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 235]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 67]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 84]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 221]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 19]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 15]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 133]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 260]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 267]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 122]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 396]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 175]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 177]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 384]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 57]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 57]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 93]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 318]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 257]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 216]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 185]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 59]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 339]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 367]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 246]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 217]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 81]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 308]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 307]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 195]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 133]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 46]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 384]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 273]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 108]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 282]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 49]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 63]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 196]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 112]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 374]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 141]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 198]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 25]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 188]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 274]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 119]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 305]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 62]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 373]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 350]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 194]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 158]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 113]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 71]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 369]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 262]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 264]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 109]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 323]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 365]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 174]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 73]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 169]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 190]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 386]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 28]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 276]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 262]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 398]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 349]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 32]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 139]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 347]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 161]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 157]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 242]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 85]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 295]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 146]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 77]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 168]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 130]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 215]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 163]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 182]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 335]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 113]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 73]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 346]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 385]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 30]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 139]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 144]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 171]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 4]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 124]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 298]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 378]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 195]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 17]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 212]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 74]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 55]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 284]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 86]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 172]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 18]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 390]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 77]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 227]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 63]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 15]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 181]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 116]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 46]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 193]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 343]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 287]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 297]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 296]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 237]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 365]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 34]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 351]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 121]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 341]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 290]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 326]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 11]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 287]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 289]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 96]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 304]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 231]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 355]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 27]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 59]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 184]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 337]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 89]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 16]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 196]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 258]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 390]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 138]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 81]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 266]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 353]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 357]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 302]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 80]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 380]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 123]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 101]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 149]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 14]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 84]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 259]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 117]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 52]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 373]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 188]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 79]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 330]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 163]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 352]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 75]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 118]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 99]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 68]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 80]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 93]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 329]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 346]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 330]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 155]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 154]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 161]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 98]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 350]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 204]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 85]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 281]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 360]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 298]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 14]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 107]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 99]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 30]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 280]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 314]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 133]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 187]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 59]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 259]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 160]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 314]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 203]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 351]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 60]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 116]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 278]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 34]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 383]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 125]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 392]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 396]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 394]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 324]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 250]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 399]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 6]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 280]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 357]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 100]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 397]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 130]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 223]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 31]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 258]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 202]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 269]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 335]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 50]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 107]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 240]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 275]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 104]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 216]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 310]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 353]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 259]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 26]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 261]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 128]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 358]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 143]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 10]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 376]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 198]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 351]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 25]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 130]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 157]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 53]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 237]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 278]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 269]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 338]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 386]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 87]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 246]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 227]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 393]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 23]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 231]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 18]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 275]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 177]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 208]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 198]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 311]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 375]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 394]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 27]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 4]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 252]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 175]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 147]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 51]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 131]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 390]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 313]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 106]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 399]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 205]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 71]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 203]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 336]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 377]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 229]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 160]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 25]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 31]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 87]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 148]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 145]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 42]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 203]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 251]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 294]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 41]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 91]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 379]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 230]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 271]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 309]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 18]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 130]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 190]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 73]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 285]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 338]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 349]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 292]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 237]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 155]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 314]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 181]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 152]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 169]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 355]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 398]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 211]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 62]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 176]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 122]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 10]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 335]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 257]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 142]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 64]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 118]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 201]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 373]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 347]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 222]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 287]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 231]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 237]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 82]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 43]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 391]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 231]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 193]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 298]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 153]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 148]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 342]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 73]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 164]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 160]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 207]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 167]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 366]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 245]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 180]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 53]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 263]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 151]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 376]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 59]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 163]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 257]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 20]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 144]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 6]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 79]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 70]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 126]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 5]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 116]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 332]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 382]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 202]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 179]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 397]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 315]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 51]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 259]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 26]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 153]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 355]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 362]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 152]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 80]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 18]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 354]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 59]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 381]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 388]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 105]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 308]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 252]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 391]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 219]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 183]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 204]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 140]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 395]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 327]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 386]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 123]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 267]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 233]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 314]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 291]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 233]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 70]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 324]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 66]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 214]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 365]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 103]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 36]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 316]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 272]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 269]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 150]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 396]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 313]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 345]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 239]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 179]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 140]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 77]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 345]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 0]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 369]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 47]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 69]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 74]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 181]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 341]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 136]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 21]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 250]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 284]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 389]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 392]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 138]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 116]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 204]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 272]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 21]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 211]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 216]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 277]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 176]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 117]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 268]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 60]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 45]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 40]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 227]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 41]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 226]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 149]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 278]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 151]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 237]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 330]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 192]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 48]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 145]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 126]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 219]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 210]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 300]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 133]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 80]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 97]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 86]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 355]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 286]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 78]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 270]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 12]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 60]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 139]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 336]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 192]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 311]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 118]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 96]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 98]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 303]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 5]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 139]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 343]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 50]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 359]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 167]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 240]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 143]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 7]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 259]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 52]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 296]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 115]
		shr cx, 4
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 223]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 44]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 145]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 348]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 252]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 262]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 54]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 268]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 222]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 179]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 171]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 263]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 264]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 128]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 54]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 371]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 117]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 42]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 354]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 192]
		shr cx, 2
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 104]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 123]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 176]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 245]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 9]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 316]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 274]
		shr cx, 0
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 51]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 320]
		shr cx, 5
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 11]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 57]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 287]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 345]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 99]
		shr cx, 1
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 360]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 382]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 92]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 238]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 241]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 311]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 233]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 45]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 186]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 107]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 244]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 248]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 190]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 294]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 371]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 217]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 208]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 194]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 156]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 170]
		shr cx, 0
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 364]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 318]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 194]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 223]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 103]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 166]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 108]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 309]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 374]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 77]
		shr cx, 5
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 288]
		shr cx, 1
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 348]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 266]
		shr cx, 6
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 86]
		shr cx, 6
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 8]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 58]
		shr cx, 3
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 186]
		shr cx, 7
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 356]
		shr cx, 3
		and cx, 1
		cmp cx, 0
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 242]
		shr cx, 2
		and cx, 1
		cmp cx, 1
		jnz Wrong
		jnz $ + 13
		jz $ + 7
		_emit 0xe9
		mov cx, [edi + 224]
		shr cx, 4
		and cx, 1
		cmp cx, 0
		jnz Wrong

		Correct:
			mov eax, 1
			mov	esp, ebp;Function Epilogue
			pop	ebp
			ret
		Wrong :
			mov eax, 0
			mov	esp, ebp;Function Epilogue
			pop	ebp
			ret


	}

	
}
int main()
{
	unsigned char input[401] = { 0 };
	int tmp = 0;
	printf("Enter The Secret Code:\n");
	scanf("%400c", &input);
	tmp=input_check(input);
	if (tmp == 1)
	{
		printf("Correct code :)\n");
	}
	else
	{
		printf("Go Away Not The Right Code :(\n");
	}
	return 1;
}