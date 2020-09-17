#include <iostream>
#include <algorithm>
#include <vector>

int toss_biased()
{
    // We can modify this to 1 or random assignment
    return 0;
}

int toss_unbiased()
{
    int diff = toss_biased() - toss_biased();
    if (diff < 0)
        return 0;
    else if (diff > 0)
        return 1;
    return toss_biased();
}

int main()
{
    return 0;
}