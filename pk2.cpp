/*
#include <iostream>
#include <list>

int main(){
	std::list<int> l{10 , 15 ,20};
	auto iter = l.begin();
	std::cout<< *iter <<"\n";
	++iter;
	std::cout<< *iter <<"\n";
	--iter;
	std::cout<< *iter <<"\n";
	
	}
*/

#include <iostream>
#include <list>

int main(){
	std::list<int> l{10 ,20 ,30};
	for(auto iter = l.begin(); iter != l.end(); ++iter)
		std::cout<<*iter<<"\n";
	for(auto iter = l.rbegin(); iter != l.rend(); ++iter)
		std::cout<<*iter<<"\n";
		
	return 0;
}
