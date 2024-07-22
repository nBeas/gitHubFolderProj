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
    cout << half(5.6f) << endl;     //should give 2.8
    int i = 5;
    cout << half(i) << endl;        //should give 3

    double dub = 5.3;
    cout << half(dub) << endl;       //should give 2.65

}
