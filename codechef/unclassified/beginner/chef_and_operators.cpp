#include <iostream>

using namespace std;

inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    use_io_optimizations();

    unsigned int test_cases;
    cin >> test_cases;

    for (unsigned int test {0}; test < test_cases; ++test)
    {
        unsigned int first;
        unsigned int second;

        cin >> first >> second;

        if (first < second)
        {
            cout << '<';
        }
        else if (first > second)
        {
            cout << '>';
        }
        else
        {
            cout << '=';
        }

        cout << '\n';
    }

    return 0;
}
