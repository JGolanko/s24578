#include <iostream>

auto main () -> int{

srand(time(NULL));
int guess-which-number = rand() % 100 + 1;

std::cout<<guess-which-number<<"\n";

int choosen-number;

do{
std::cout<<"Guess which number we choose: ";
std::cin>>choosen-number;

	if (choosen-number > guess-which-number ){
		std::cout<<"number is too big!\n";
	}else if (choosen-number <guess-which-number ){
		std::cout<<"number is too small!\n";
	}else if (choosen-number == guess-which-number){
		break;
	}

}while (true);

std::cout<<"just right!";

return 0;

}