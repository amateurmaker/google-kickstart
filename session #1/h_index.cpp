#include <iostream>
#include <vector>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <math.h>
#include <cmath>
#include <bits/stdc++.h>
#include <numeric>

void answer(const int& case_info, const std::string& data)
{
    std::cout << "Case #" << case_info << ": "
          << data << std::endl;   
    return;
}

int main()
{
    // This will read the input
    int T;
    std::cin >> T;

    // Iterate through each of the test cases
    for (int case_num = 1; case_num <= T; case_num++)
    {

        std::string s_input;
        std::cin >> s_input;
        
        std::vector<int> orange;
        
        for (int i = 0; i < std::stoi(s_input); i++)
        {
            std::string lala_input;
            std::cin >> lala_input;
            
            orange.push_back(std::stoi(lala_input));
        }
        
        int h_index = 0;
        std::string anwer_string;
        int index = 1;
        for (int i = 0; i < orange.size(); i++)
        {
            int count = 0;
            for (int j = 0; j <= i; j++)
            {
                if (orange[j] >= index)
                {
                    count += 1;
                }
            }
            
            
            if (count >= index)
            {
                h_index = count;
                index++;
            }
            
            anwer_string += " " + std::to_string(h_index);
            
        }
        
      answer(case_num, anwer_string);

    }
    
}
