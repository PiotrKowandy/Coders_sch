#include <iostream>
#include <string>

bool palindrom(std::string napis)
{
    float dlugosc = napis.size();
    for(float i = 0; i < (dlugosc / 2); ++i)
    {
        if(napis[i] != napis[dlugosc - (i + 1)])
            return false;
    }
    return true;
}


int main (){

        std::string word_sentence;
        std::cout << "Give me word or sentence: \n";
        std::getline(std::cin, word_sentence);
       
        if (palindrom(word_sentence)){
	       	std::cout<<"It is palindrome.\n";
	}
        else{
	       	std::cout<<"It isn't palindrome.\n";
	}

        return 0;
}
