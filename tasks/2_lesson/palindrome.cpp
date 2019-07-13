#include <iostream>
#include <string>

bool check_palindrome(std::string word){

	std::size_t length = word.size();
        for (std::size_t i=0; i < (length/2); ++i)
		{
   			 if (word[i] != word[length-(i+1)])
			 return false;
              	 }
        return true;
}


int main (){

        std::string word_sentence;
        std::cout << "Give me word or sentence: \n";
        std::getline(std::cin, word_sentence);
       
        if (check_palindrome(word_sentence)){
	       	std::cout<<"It is palindrome.\n";
	}
        else{
	       	std::cout<<"It isn't palindrome.\n";
	}

        return 0;
}
