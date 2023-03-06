
/*
стандартные библиотеки С++
crl - common runtime library
stl - standart template library
stl:
	- utilities
	- collections 
	- algorithms
	- streams
*/

/*
поток - инструмент обработки данных 
streams vs thread
stream - поток данных 
thread - поток программы 
компоненты потока данных:
1. источник данных - 
2. буфер потока - 

*/

#include<iostream>
#include<fstream>
#include<sstream>//строковые потоки
#include<string>
#include<vector>


int main() {
	//std::string text{ "to be or not to be. just for example" };
	//std::stringstream ss{ text };//запись текста в поток
	//std::vector<std::string> words;

	//std::string out{};
	//std::ostringstream ss2{ out };//выводной поток
	//while (!ss.eof())
	//{
	//	std::string tmp;
	//	ss >> tmp;
	//	words.push_back(tmp);
	//	//std::cout << tmp << '\n';


	//}
	//for (const auto& word : words) {
	//	std::cout << word << " lenght: " << word.size() << "\n";
	//}
	//std::cout << text << '\n';
	//for (const auto& word : std::vector<std::string>(words.rbegin(), words.rend())) {
	//	ss2 << word << ' ';
	//}
	//for (auto it = words.rbegin(); it != words.rend(); ++it) {
	//	ss2 <<* it << ' ';
	//}//обратный проход по тексту (в обратном порядке)
	//
	//out =ss2.str();//освобождение буфера

	//std::cout << out << '\n';
	std::string text1{ "A major controversy throughout the pandemic was surrounding the efficacy of face masks against the spread of COVID-19. However, a recent study supports that masks may have done little, if anything at all, to stop the spread of the virus" };
	std::stringstream ss3{ text1 };
	std::vector<std::string> expressions;
	std::ifstream iof;
	iof.open(text1);
	std::ofstream outf;
	while (!ss3.eof())
	{
		std::string tmp;
		ss3 >> tmp;
		expressions.push_back(tmp);

	}
	int count{};
	for (const auto& word : expressions) {
		if (word.size() == 2)
		{
			std::cout << word << " ";
			count += 1;
		}

	}
	std::cout << "\ntotal number of two letters words is - " << count;
	outf.open(text1);



	return 0;


}


