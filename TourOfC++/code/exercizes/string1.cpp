#include <iostream>
#include <string>
#include <vector>

bool isLetter (char);

int main()
{
    std::string line = "abcdsg, sdkjsd, ksdjasd";

    std::vector<std::string> words;

    std::string bar;

    for (char c : line)
    {
        if (isLetter(c))
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

    for(int i = 0; i < words.size(); i++)
        std::cout << words[i] << std::endl;


    return 0;
}

bool isLetter(char c)
{
    return ((c >= 'a')&& (c <= 'z')) || ((c >= 'A')&&(c <= 'Z'));
}
