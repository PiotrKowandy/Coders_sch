#include <cstdint>
#include <iostream>

struct LongInt
{

    LongInt(int left, int right) : left(left, right(right))
    {
	//this->left = left;
	//this->right = right;
    }

    std::string to String()
    {
	return std::to_string(left) + std::to_string(right);
    }

    void add(const LongInt& r)
    {
        left += r.left;
        right += r.right;
        left += right / 100;
        right = right % 100;
    }

    int left;
    int right;
};

int main()
{
    LongInt int1(1, 70);
    //int1.left = 1;
    //int1.right = 70;
    // 170

    LongInt int2(5,70);
    //int2.left = 5;
    //int2.right = 70;
    // 570

    

    //int1.add(int2);

    //740
    std::cout << int1.left << int1.right << std::endl;
}
