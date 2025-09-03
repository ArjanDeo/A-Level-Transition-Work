#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    std::string states[5] = { "Florida", "Georgia", "Delaware", "Alabama", "California" };
    std::string userState;
    std::cout << "Enter the state to find:\n";
    std::cin >> userState;
std::transform(userState.begin(), userState.end(), userState.begin(), ::tolower);
for (int i = 0; i < 5; i++)
{
std::transform(states[i].begin(), states[i].end(), states[i].begin(), ::tolower);
if (states[i] == userState)
{
std::cout << "Item found at position " << i << std::endl;
return 0;
}
}
std::cout << "Item not found" << std::endl;
}
