#pragma once

#define ENCRYPT(O, X) O = X; \
{  \
	uint64_t __a; \
	uint64_t __b; \
	O ^= 66980015011682; \
	__a = (O & 15872) >> 9ull; \
	__b = (O & 34902897112121344) >> 50ull; \
	O &= ~15872; \
	O &= ~34902897112121344; \
	O |= __a << 50ull; \
	O |= __b << 9ull; \
	O ^= 59893318947167; \
	__a = (O & 33030144) >> 19ull; \
	__b = (O & 35465847065542656) >> 49ull; \
	O &= ~33030144; \
	O &= ~35465847065542656; \
	O |= __a << 49ull; \
	O |= __b << 19ull; \
}

#define DECRYPT(O, X) O = X; \
{  \
	uint64_t __a; \
	uint64_t __b; \
	__a = (O & 33030144) >> 19ull; \
	__b = (O & 35465847065542656) >> 49ull; \
	O &= ~33030144; \
	O &= ~35465847065542656; \
	O |= __a << 49ull; \
	O |= __b << 19ull; \
	O ^= 59893318947167; \
	__a = (O & 15872) >> 9ull; \
	__b = (O & 34902897112121344) >> 50ull; \
	O &= ~15872; \
	O &= ~34902897112121344; \
	O |= __a << 50ull; \
	O |= __b << 9ull; \
	O ^= 66980015011682; \
}

