// Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

#include <string>

std::string removeExclamationMarks(std::string str){
    std::string result;
    for (char ch : str) {
        if (ch != '!') {
            result += ch;
        }
    }
    return result;
}