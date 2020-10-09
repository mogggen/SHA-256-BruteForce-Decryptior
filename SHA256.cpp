#include <bit>
#include <bitset>
#include <cstdint>
#include <iostream>
#include "SHA256.h"

class Digest
{
	uint64_t val;
public:
	Digest(uint64_t val);
	void shr(int32_t shift);
	void rotr(int32_t shift);

	void sigma0();
	void sigma1();

	void usigma0();
	void usigma1();
};

Digest::Digest(uint64_t val) : val(val){}

inline void Digest::shr(int32_t shift)
{
	val >> shift;
}

inline void Digest::rotr(int32_t shift) {
	int32_t s = shift >= 0 ? shift % 32 : -((-shift) % 32);
	val = (val >> s) | (val << (32 - s));
}

inline void Digest::sigma0()
{

}

int main()
{
	using namespace std;
	uint64_t val = 3;
	Digest::rotr(val, 2);
	cout << bitset<4>(val) << endl; // 4
	
	cout << bitset<4>(2) << endl;
	cout << bitset<4>(1) << endl;
	cout << bitset<4>(2 | 1) << endl;
}