#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include "CihperMode.hpp"
#include <string>
#include <vector>


/**
 * \file CaesarCipher.hpp
 * \brief Contains the declarations of the class CaesarCipher for performing Caesar cipher encryption and decryption.
 */

/**
 * \class CaesarCipher
 * \brief Has the data member key and the constructor for the Caesar cipher class.
 */

class CaesarCipher {
    public:
        /**
         * \brief CaesarCipher constructors can take either size_t or string keys (and convert to size_t)
         * \param key
         */

        explicit CaesarCipher(const std::size_t key);
        explicit CaesarCipher(const std::string key);

        /**
         * \brief apply cipher completes the caesar cipher to the input text using the given key.
         * \param inputText
         * \param encrypt
         */
        void applyCipher(const std::string& inputText, const CipherMode encrypt);
        
        /**
         * \param string to hold result of applyCipher
         */
        std::string outputText_;
    private:
        /**
         * \param private size_t to hold the key 
         */
        std::size_t key_;
        /**
         * \param const vector of chars to hold the alphabet
         */
        const std::vector<char> alphabet_ = {
            'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
            'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; 

};

#endif    // MPAGSCIPHER_CAESARCIPHER_HPP
