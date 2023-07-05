#include <iostream>
#include <string>
#include <map>

int main(int argc, char const *argv[])
{
    std::string str = "Hellowwww";
    std::map<char, int> myMap;
    for(int i = 0; i < str.length(); ++i)
    {
        ++myMap[str[i]];
    }

    std::cout << myMap['w'];
}
