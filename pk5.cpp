#include <iostream>
#include <forward_list>
#include <iterator>


int main (){
	std::forward_list<int> fl {3, 42, 5};
	fl.push_front(2);
	//fl.push_back(3);  Mistake
	auto iter  = std::next(fl.begin());
	iter = fl.erase_after(iter);
	fl.insert_after(iter ,4);
	
	for(int x : fl)
		std::cout<<x<<"\n";
	
	return 0;

}
	
