#include <iostream>
#include <string>
using namespace std;
string skip(string str,
                           char X)
{
    // Base Case
    if (str.length() == 0) {
        return "";
    }
 
    // Check the first character
    // of the given string
    if (str[0] == X) {
 
        // Pass the rest of the string
        // to recursion Function call
        return skip(str.substr(1), X);
    }
 
    // Add the first character of str
    // and string from recursion
    return str[0]
           + skip(str.substr(1), X);
}
int main()
{
   // Given String
    string str = "baccad";
 
    // Given character
    char X = 'a';
 
    // Function Call
    str = skip(str, X);
    cout << str;
    return 0;
}