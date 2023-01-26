#include <iostream>
#include <vector>
#include "functions_to_implement.cpp"

int main(){
	std::cout << Factorial (5) <<std::endl;
	std::vector<int> v{1,2,3};
	std::vector<int> res = AddN(v, 5);
	for(int i=0;i<res.size();i++){
		std::cout<<res[i]<<" ";
	}
    
    std::cout << Factorial (5) <<std::endl;
    
    std::vector<int> x{1,2,3,4,5};
    
    std::cout << Sum(x) << std::endl;
    
    std::vector<string> y{"jo","n"};
    
    std::cout << Join(y, "i") << std::endl;
    
    std::cout << NthFibonacci(6) << std::endl;
    
}
