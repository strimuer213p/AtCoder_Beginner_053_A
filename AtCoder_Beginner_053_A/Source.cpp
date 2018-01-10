/*
問題文
すめけくんは現在のレートが 1200 未満ならば AtCoder Beginner Contest (ABC) に、そうでなければ AtCoder Regular Contest (ARC) に参加することにしました。 すめけくんの現在のレート x が与えられます。すめけくんが参加するコンテストが ABC ならば ABC と、そうでなければ ARC と出力してください。
*/

#include<iostream>
#include<string>
int main() {
	int rate;
	std::string result;
	std::cin >> rate;

	rate < 1200 ? result = "ABC" : result = "ARC";
	std::cout << result << std::endl;

	return 0;
}