#include <bit>
#include <bitset>
#include <cstdint>
#include <iostream>

inline void SHR32(long long& val)
{
	val >> 32;
}

std::uint64_t rotr(std::uint64_t v, std::int32_t shift) {
	std::int32_t s = shift >= 0 ? shift % 32 : -((-shift) % 32);
	return (v >> s) | (v << (32 - s));
}
int main()
{
	using namespace std;
	cout << bitset<64>(rotr(1, 2)) << endl; // 4
	
	cout << bitset<4>(2) << endl;
	cout << bitset<4>(1) << endl;
	cout << bitset<4>(2 | 1) << endl;
}