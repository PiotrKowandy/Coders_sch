#include <iostream>
#include <cstdint>


void sum(LongInt& l, LongInt& r)
{
	l.left += r.left;
	l.right += r.right;
	l.left += l.right / 100;
	r.right += l.right % 100;

}

struct LongInt
{
	int left;
	int right;
	void sum(LongInt& int2)
	{
		left += int2.left;
		right += int2.right;
		left += int2.right / 100;
		right += int2.right % 100;

	}
};

int main ()
{
	LongInt int1;
	int1.left = 1;
	int1.right = 70;

	LongInt int2;
	int2.left = 5;
	int2.right = 70;
/*
	int l, r;
	l=1;
	r=7;
	//107

	int l_next, r_next;
	l_next =5;
	r_next =7;
	// 507
	
	l += l_next;
	r += r_next;
	//614
	
	l += r / 100;
	r += r % 100;
*/

	int1.sum(int2);

	std::cout<<int1.left << int1.right << std::endl;

	return 0;
}
