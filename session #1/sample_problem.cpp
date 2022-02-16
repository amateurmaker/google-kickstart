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

int main()
{
    // This will read the input
    int T;
    std::cin >> T;

    // Iterate through each of the test cases
    for (int case_num = 1; case_num <= T; case_num++)
    {

        std::string s_input;
        std::string f_input;

        std::cin >> s_input;
        std::cin >> f_input;
        
        std::vector<int> orange;
        
        for (int i = 0; i < std::stoi(s_input); i++)
        {
            std::string lala_input;
            std::cin >> lala_input;
            
            orange.push_back(std::stoi(lala_input));
        }
        

        int n = s_input.length();
        
        int sum_of_sweets = accumulate(orange.begin(),orange.end(),0);
        int number_of_children = std::stoi(f_input);
        
        
        
        int max_sweets =  sum_of_sweets / number_of_children;
        int remain = sum_of_sweets - (max_sweets * std::stoi(f_input));
      
        std::cout << "Case #" << case_num << ": "
                  << remain << std::endl;
    }
}
