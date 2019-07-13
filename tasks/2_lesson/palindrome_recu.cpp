#include <iostream>
#include <string>

bool check_palindrome(std::string word){

	if (word.empty()==false)
	{
		std::string::iterator it_start = word.begin();
		std::string::iterator it_end = word.end();

		if (*it_start != *it_end )
		{
			return false;
		}
		else
		{
			word.erase(*it_start);
			word.erase(*it_end);
		
			if (word.empty())
			{
				return true;
			}
			else
			{
				return check_palindrome(word);
			}

		}	
	}
	else
	{
		return true;
	}
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
