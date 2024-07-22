#include <iostream>

using namespace std;



template <typename T>
T half (T num) {
    return num/2;
}

template <>
int half<int>(int value) {
    return static_cast<int>(std::round(value / 2.0));
}

int main()
{

}
