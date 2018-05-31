#include <assert.h>

using namespace std;

template <typename T>
class MyVector {

private:
    T* data;
    int capacity;       //存储数组中最大可容纳元素个数
    int size;           //存储数组中当前元素的个数

    void resize(int newCapacity){
        assert(newCapacity >= size);
        T* newData = new T[newCapacity];
        for(int i=0;i<size;i++){
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    MyVector() {
        data = new T[10];
        capacity = 10;
        size = 0;
    }

    ~MyVector() {
        delete[] data;
    }

    void push_back(T e){
        //assert( size < capacity);
        if( size == capacity){
            resize( 2 * capacity);
        }

        data[size++] = e;
    }

    T pop_back(){
        assert(size > 0);
        return data[--size];
    }
};
