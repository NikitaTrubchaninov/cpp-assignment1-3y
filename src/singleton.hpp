#pragma once

namespace a1 {

template <typename T>
class Singleton
{
public:
    static T& getInstance()
    {
        static T& getInstance(){
        static T instance;
        return instance; // IMPLEMENT
        }
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    Singleton() = default;
    ~Singleton() = default;
};

}
