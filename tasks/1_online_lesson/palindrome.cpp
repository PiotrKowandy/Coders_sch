#include <iostream>
#include <string>

bool check_palindrome(std::string &word){

	int length = word.size();
        if (length >1){
                 for (int i=0; i < (length/2); i++){
			 if (word[i] != word[length-i-1]){
				 return false;
			 }
		 }
        }
        else{
	       	return false;
	}
        return true;
}


int main (int argc, char *argv[]){

        std::string word_sentence;
        std::cout << "Give me word or sentence: \n";
        std::getline(std::cin, word_sentence);
       
       	int length = word_sentence.length();

        if (check_palindrome(word_sentence)){
	       	std::cout<<"It is palindrome.\n";
	}
        else{
	       	std::cout<<"It isn't palindrome.\n";
	}

        return 0;
}
