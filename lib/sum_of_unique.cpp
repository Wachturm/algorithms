#include <unordered_map>

#include "sum_of_unique.hpp"    
	
    size_t sumOfUnique(std::vector<int> const& nums) {
        std::unordered_map<size_t,size_t> m;
        
        for(auto&& n : nums) {
            m[n]++;
        }

        size_t sum = 0;
        for(auto [k, v] : m) {
            if(v == 1) {
                sum += k; 
            }
        }

        return sum;
    }
