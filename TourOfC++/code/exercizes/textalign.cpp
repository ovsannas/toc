#include <iostream>
#include <string>
#include <vector>
#include <cctype>

void splitText (std::string &, std::vector<std::string> &);

void alignLeft(const std::vector<std::string> &, int);
void alignRight (const std::vector<std::string> &, int);
void alignCenter (const std::vector<std::string> &, int);

enum class alignment {left, right, center};

void alignText (const std::vector<std::string> &, int, alignment);

int main()
{
    std::string Text = "The standard C++ library provides a string class type that supports all the operations mentioned above, additionally much more functionality. We will study this class in C++ Standard Library but for now let us check following example:";

    std::vector<std::string> Words;

    splitText (Text, Words);

//    alignment a = alignment::left;

    alignText (Words, 36, alignment::left);
    std::cout << std::endl;
    alignText (Words, 36, alignment::right);
    std::cout << std::endl;
    alignText (Words, 36, alignment::center);
    std::cout << std::endl;


 
   return 0;
}

void printSpaces(int n)
{
    for(int i = 0; i < n; ++i)
        putchar(' ');
}

void splitText (std::string & text, std::vector<std::string> & words)
{
    std::string bar;

    for (char c : text)
    {
        if (!isspace(c))
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

void alignText(const std::vector<std::string> & W, int C, alignment A)
{
    std::string line;
    int length_w = 0;

    for (std::string w : W)
    {
        if (length_w + w.size() > C)
        {
            --length_w;
            line.pop_back();

            switch(A)
            {
                case alignment::left:
                    break;
                    
                case alignment::right:
                    printSpaces(C-length_w);
                    break;

                case alignment::center:
                    printSpaces((C - length_w)/2);
                        break;
            }
            
            std::cout << line << std::endl;
            length_w = 0;
            line = ""; 
        }
        length_w += w.size()+ 1;
        line = line + w + ' ';
    }     
            
}
       
void alignLeft (const std::vector<std::string>& W, int C)
{
    std::string line;
    int length_w = 0;

    for (std::string w : W)
    {
        if (length_w + w.size() > C)
        {
            std::cout << line << std::endl;
            length_w = 0;
            line = "";
        } 
        length_w += w.size() + 1;
        line = line + w + ' ';
    }

}


void alignRight (const std::vector<std::string>& W, int C)
{
    std::string line;
    int length_w = 0;

    for (std::string w : W)
    {
        if (length_w + w.size() > C)
        {
            --length_w;
            line.pop_back();
            
            printSpaces(C - length_w);
            std::cout << line << std::endl;

            length_w = 0;
            line = "";
        } 
        length_w += w.size() + 1;
        line = line + w + ' ';
    }

}

void alignCenter (const std::vector<std::string>& W, int C)
{
    std::string line;
    int length_w = 0;

    for (std::string w : W)
    {
        if (length_w + w.size() > C)
        {
            --length_w;
            line.pop_back();
      
            printSpaces((C - length_w)/2);
            std::cout << line << std::endl;
            

            length_w = 0;
            line = "";
        } 
        length_w += w.size() + 1;
        line = line + w + ' ';
    }

}
