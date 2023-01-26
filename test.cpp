#define CATCH_CONFIG_MAIN
#include <vector>
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE ("NthFibonacci TEST", "NthFibonacci"){
    
    REQUIRE(NthFibonacci(6) == 8);
    REQUIRE(NthFibonacci(7) == 13);
    REQUIRE(NthFibonacci(8) == 21);
    REQUIRE(NthFibonacci(5) == 5);

}

TEST_CASE ("Sum TEST", "Sum"){
    
    std::vector<int> x{1,2,3,4,5};
    std::vector<int> y{10,20,30};
    
    REQUIRE(Sum(x) == 15);
    REQUIRE(Sum(y) == 60);
    

}

std::vector<int> AddN(std::vector<int> v, int n){
    std::vector<int> x;
    for (int i = 0; i < v.size(); i++){

       x.push_back(v[i] + n);

    }

    return x;

}

std::vector<int> v{1,2,3};
	std::vector<int> res = AddN(v, 5);
	for(int i=0;i<res.size();i++){
		std::cout<<res[i]<<" ";
	}

TEST_CASE ("AddN TEST", "AddN"){
    
    
    std::vector<int> v{1,2,3};
    std::vector<int> z{6,7,8};
    std::vector<int> a{3,4,5};
    
    REQUIRE(AddN(v, 2) == a);
    REQUIRE(AddN(v, 5) == z);

}



TEST_CASE ("String AddN TEST", "String AddN"){
    
    std::vector<string> y{jo,n};
    std::vector<string> z{Hel,o};
    
    REQUIRE(Join(y, i) == "join");
    REQUIRE(Join(z, l) == "Hello");
    

}