#include <iostream>


// add 'delta' to the provided number
template <class Numeric>
void offset(Numeric& x, const Numeric& delta)
{
    x += delta;
}

// ostensibly this should add delta to the provided number, twice
template <class Numeric>
void offset2(Numeric& x, const Numeric& delta)
{
    offset(x, delta);
    offset(x, delta);
}

int main()
{
    auto x = 3;
    offset2(x, x);
    std::cout << x << std::endl;
}
