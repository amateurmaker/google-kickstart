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

int main()
{
    // This will read the input
    int T;
    std::cin >> T;

    // Iterate through each of the test cases
    for (int case_num = 1; case_num <= T; case_num++)
    {

        int R_int, A_int, B_int;

        std::cin >> R_int;
        std::cin >> A_int;
        std::cin >> B_int;
        
        // long long is needed to store the answer to a reasonable precision. long long is 64 bits
        long long int current_radius = R_int;
        long long int ans = 0;
        
        double PI = atan(1)*4;
        
        while (current_radius > 0)
        {
            ans += current_radius * current_radius;
            current_radius *= A_int;
            ans += current_radius * current_radius;
            current_radius /= B_int;
        }

        // Increase the default precision of cout    
        std::cout.precision(17);

        std::cout << "Case #" << case_num << ": "
                  << ans * PI << std::endl;
    }
}
