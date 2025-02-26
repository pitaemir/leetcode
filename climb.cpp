#include <cstddef>

class Solution {
public:
    int climbStairs(int n) {
        int primeiroPasso = 1;
        int segundoPasso = 1;
        int temp;

        for (size_t i = 0; i< n-1; i++){
            temp = primeiroPasso + segundoPasso;
            primeiroPasso = temp;
            segundoPasso = primeiroPasso;
        }

        return temp;

        }
    };
