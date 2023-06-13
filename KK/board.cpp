#include <iostream>
#include <bits/stdc++.h>
int main()
{
    int i = 1;
    int t;
    std::cin >> t;
    while (t--)
    {
        int vowel = 0;
        int conso = 0;
        std::string letter;
        std::cin >> letter;
        std::unordered_map<char, int> lett;
        for (int i = 0; i < letter.size(); i++)
        {
            lett[letter[i]]++;
        }
        auto maxElement = std::max_element(
            lett.begin(),
            lett.end(),
            [](const std::pair<char, int> &a, const std::pair<char, int> &b)
            {
                return a.second < b.second;
            });
        std::cout << maxElement->first;
        if (maxElement->first == 'A' || maxElement->first == 'E' || maxElement->first == 'I' || maxElement->first == 'O' || maxElement->first == 'U')
        {
            vowel++;
        }
        else
        {
            conso++;
        }

        int ansCount = 0;
        int maxValue=-1;
        for (auto it = lett.begin(); it != lett.end(); ++it)
        {
            if (it->second > maxValue)
            {
                maxValue = it->second;
            }
        }

        for (int i = 0; i < letter.size(); i++)
            if (maxValue == 1)
            {   
                std::cout << "case #"<<i<<": " <<letter.size() << std::endl;
                break;
            }
            else
            {
                if (letter[i] == maxElement->first)
                {
                    continue;
                }
                else if (letter[i] == 'A' || letter[i] == 'E' || letter[i] == 'I' || letter[i] == 'O' || letter[i] == 'U' && vowel == 1)
                {
                    ansCount += 2;
                }
                else if (letter[i] == 'A' || letter[i] == 'E' || letter[i] == 'I' || letter[i] == 'O' || letter[i] == 'U' && vowel == 0)
                {
                    ansCount += 1;
                }
                else if (vowel == 1)
                {
                    ansCount += 1;
                }
                else if (vowel = 0)
                {
                    ansCount += 2;
                }
                std::cout << "case #" << i << ":" << ansCount << std::endl;
                i++;
            }
    }
}