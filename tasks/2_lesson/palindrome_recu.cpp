#include <iostream>
#include <string>
#include <string_view>

bool palindrom(std::string_view napis)
{
    std::string_view word = napis;
    if(word.size() < 2) return true;

    return word.front() == word.back()
        && palindrom(word.substr(1, word.size() - 2));
}

int main (){

        std::string word_sentence;
        //std::cout << "Give me word or sentence: \n";
        //std::getline(std::cin, word_sentence);
        word_sentence = "madam";
	std::string_view word_sentence_view = word_sentence;

        if (palindrom(word_sentence_view)){
	       	std::cout<<"It is palindrome.\n";
	}
        else{
	       	std::cout<<"It isn't palindrome.\n";
	}

        return 0;
}
