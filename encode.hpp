//
// Created by esevre on 10/14/2020.
//
#pragma once

int encodeAscii(char c)
{
    return static_cast<int>(c);
}
char encodeAscii(int i)
{
    return static_cast<char>(i);
}

char to_uppercase(char c)
{
    const char a = 'a';
    const char z = 'z';
    if (c >= a && c <= z) {
        const char A = 'A';
        const int diff = encodeAscii(a) - encodeAscii(A);
        return encodeAscii(encodeAscii(c) - diff);
    }

    return c;
}
char to_lowercase(char c)
{
    const char A = 'A';
    const char Z = 'Z';
    if (c >= A && c <= Z) {
        const char a = 'a';
        const int diff = encodeAscii(a) - encodeAscii(A);
        return encodeAscii(encodeAscii(c) + diff);
    }

    return c;
}

