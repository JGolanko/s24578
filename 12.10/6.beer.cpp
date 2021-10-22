#include <iostream>
#include <string>

auto main (int argc, char* argv[]) -> int{

int beer = 99;

if(argc>1){
	beer = std::stoi(argv[1]);
}

do{

std::cout<<beer<<" bottles of beer on the wall, "<<beer<<" bottles of beer.\n";
std::cout<<"Take one down, pass it around, ";

}
while (beer !=1);

std::cout<<"1 bottle of beer on the wall, 1 bottle of beer.\n";
std::cout<<"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, "<< beer << " bottles of beer on the wall...\n";
}

return 0;

}