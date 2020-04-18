
#include <iostream>
#include <functional>
#include <boost/algorithm/string.hpp>

using namespace std;

int main()
{
    [out = std::ref(std::cout << "Hello ")](){ out.get() << "World\n"; }();

    string temp = "TeSt StRiNg";
    cout << temp << endl;
    boost::to_lower(temp);
    cout << temp << endl;
}
