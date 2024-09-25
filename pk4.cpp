#include <iostream>
#include <iterator>
#include <list>

int main (){
	
	std::list<int> l {0 ,10 ,15 ,20};
	auto iter = std::next(l.begin());
	std::advance(iter ,2);
	auto iter2 = iter;
	std::cout<<*iter<<"\n";
	std::cout<<*iter2<<"\n";
	
	
	return 0;
}

