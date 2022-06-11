#pragma once

#define ENCRYPT(O, X) O = X; \
{  \
	uint64_t __a; \
	uint64_t __b; \
	__a = (O & 2147483136) >> 9ull; \
	__b = (O & 18014394214514688) >> 32ull; \
	O &= ~2147483136; \
	O &= ~18014394214514688; \
	O |= __a << 32ull; \
	O |= __b << 9ull; \
	O ^= 138194867740816; \
	__a = (O & 2147481600) >> 11ull; \
	__b = (O & 72057525318451200) >> 36ull; \
	O &= ~2147481600; \
	O &= ~72057525318451200; \
	O |= __a << 36ull; \
	O |= __b << 11ull; \
	__a = (O & 2130706432) >> 24ull; \
	__b = (O & 69818988363776) >> 39ull; \
	O &= ~2130706432; \
	O &= ~69818988363776; \
	O |= __a << 39ull; \
	O |= __b << 24ull; \
}

#define DECRYPT(O, X) O = X; \
{  \
	uint64_t __a; \
	uint64_t __b; \
	__a = (O & 2130706432) >> 24ull; \
	__b = (O & 69818988363776) >> 39ull; \
	O &= ~2130706432; \
	O &= ~69818988363776; \
	O |= __a << 39ull; \
	O |= __b << 24ull; \
	__a = (O & 2147481600) >> 11ull; \
	__b = (O & 72057525318451200) >> 36ull; \
	O &= ~2147481600; \
	O &= ~72057525318451200; \
	O |= __a << 36ull; \
	O |= __b << 11ull; \
	O ^= 138194867740816; \
	__a = (O & 2147483136) >> 9ull; \
	__b = (O & 18014394214514688) >> 32ull; \
	O &= ~2147483136; \
	O &= ~18014394214514688; \
	O |= __a << 32ull; \
	O |= __b << 9ull; \
}

