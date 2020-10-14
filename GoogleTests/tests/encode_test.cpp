//
// Created by esevre on 10/14/2020.
//
#include "gtest/gtest.h"

#include "../../encode.hpp"

TEST(EncodeAscii, lowercaseTest)
{
    EXPECT_EQ(1, 1);
}

TEST(EncodeAscii, uppercaseTest)
{
    EXPECT_EQ(2, 2);
}

TEST(ConvertCase, toUppercaseBasic)
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int letter = 0; letter < alphabet.size(); ++letter) {
        const char computed = to_uppercase(alphabet[letter]);
        const char expected = ALPHABET[letter];
        ASSERT_EQ(computed, expected);
    }
}
TEST(ConvertCase, toLowercaseBasic)
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int letter = 0; letter < alphabet.size(); ++letter) {
        const char computed = to_lowercase(ALPHABET[letter]);
        const char expected = alphabet[letter];
        ASSERT_EQ(computed, expected);
    }
}



