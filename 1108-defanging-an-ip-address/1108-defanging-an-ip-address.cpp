#include<bits/stdc++.h>
#include<string>

using namespace std;
class Solution {
public:
    string defangIPaddr(string str) {
        string defangIP = "";
     
    // Loop to iterate over the
    // characters of the string
    for (char c : str)
        (c == '.') ? defangIP += "[.]" :
                     defangIP += c;
    return defangIP;
        
    }
};