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

void answer(std::string data, int num, std::string kingdom)
{
    std::cout << "Case #" << num << ": "
      << kingdom << " is ruled by " << data << std::endl;
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

        int n = s_input.length();
        char c = s_input[s_input.size() - 1];
        
        std::list some_list = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        
        std::string ans = ""; 
        if (c == 'y' || c == 'Y')
        {
            answer("nobody.", case_num, s_input);
            continue;
        }
        
        // for (int i = 0; i < some_list.size(); i++)
        bool is_printed = false;
        for (char const& i : some_list)
        {
            if (c == i && !is_printed)
            {
                answer("Alice.", case_num, s_input);
                is_printed = true;
                break;
            }
        }
        
        if (!is_printed)
        {
            answer("Bob.", case_num, s_input);    
        }
    }
}
