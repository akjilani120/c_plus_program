// #include <bits/stdc++.h>
// using namespace std;

// void replaceAll(std::string &str, const std::string &from, const std::string &to)
// {
//     size_t start_pos = 0;
//     while ((start_pos = str.find(from, start_pos)) != std::string::npos)
//     {
//         str.replace(start_pos, from.length(), to);
//         start_pos += to.length(); // In case 'to' contains 'from', avoids infinite loop
//     }
// }

// int main()
// {
//     string S, X;
//     cin >> S >> X;

//     replaceAll(S, X, "$");

//     std::cout << S << std::endl;

//     return 0;
// }
#include <iostream>
#include <string>

int main()
{
    std::string str = "The quick brown fox jumps over the lazy dog";

    std::string substring = "fox";
    size_t pos = str.find(substring);

    if (pos != str.size())
    {
        std::cout << "Substring found at position: " << pos << std::endl;
    }
    else
    {
        std::cout << "Substring not found" << std::endl;
    }

    return 0;
}
