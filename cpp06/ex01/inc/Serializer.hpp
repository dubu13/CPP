#pragma once

#include <iostream>
#include <cstdint> //for uintptr_t
//not initializable
//struct data
//will use reinterpret_cast: it's a way to convert unrelated types 

struct Data
{
    int rnd_int;
    float rnd_float;
    char rnd_char;
    std::string rnd_string;
};

class Serializer
{
    public:
        Serializer() = delete;
        Serializer(const Serializer &other) = delete;
        Serializer & operator=(const Serializer &other) = delete;
        ~Serializer() = delete;
};