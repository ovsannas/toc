#include <iostream>
#include <string>
#include <vector>
#include <cctype>

void splitLine (std::string &, std::vector<std::string> &);

int main()
{
    std::string Line = "Hello, how are you?";
    std::vector<std::string> Words;

    splitLine (Line, Words);

    for(auto s: Words)
        std::cout << s << std::endl;


    return 0;
}


void splitLine (std::string & line, std::vector<std::string> & words)
{
    std::string bar;

    for (char c : line)
    {
        if (isalpha(c))
        {
            bar = bar + c;
        }

        else
        {
            if(!bar.empty())
                words.push_back(bar);
            bar = "";
        }

    }
    if(!bar.empty())
        words.push_back(bar);

}
