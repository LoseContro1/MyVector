#pragma once

template<typename T>
class MyVector
{
private:
	T* arr;
	int var_size;
	int var_capacity;

public:
	MyVector()
	{
		var_size = 0;
		var_capacity = 10;
		arr = new T[var_capacity];
	};

	~MyVector()
	{
		delete[] arr;
	};

    int size()
    {
        return var_size;
    };

    int capacity()
    {
        return var_capacity;
    };

    void reserve(int newCapacity)
    {
        T* newData = new T[newCapacity];

        std::copy(arr, arr + var_size, newData);
        delete[] arr;
        arr = newData;
        var_capacity = newCapacity;
    };

    void resize(int newSize)
    {
        T* newData = new T[newSize];

        std::copy(arr, arr + var_size, newData);
        delete[] arr;
        arr = newData;
        var_size = var_capacity = newSize;
    };

    void resize(int newSize, const T& value)
    {
        T* newData = new T[newSize];


        std::copy(arr, arr + var_size, newData);
        delete[] arr;
        arr = newData;
        var_size = var_capacity = newSize;

        for (int i = 0; i < var_size; i++)
        {
            arr[i] = value;
        }
    };

    void push_back(const T& element)
    {
        if (var_capacity == var_size)
        {
            reserve(var_capacity * 2);
        }
        arr[var_size++] = element;
    };

    void pop_back()
    {
        if (var_size == 0)
        {
            return;
        }
        arr[var_size--] = 0;
    };

    void clear()
    {
        var_size = 0;
    };
 
    T& shrink_to_fit()
    {
        return var_capacity = var_size;
    };

    bool empty()
    {
        return var_size == 0;
    };

    T& at(const int index)
    {
        try
        {
            if (index >= var_size)
            {
                throw std::out_of_range("Index out of range");
            }
            return arr[index];
        }
        catch (const std::exception&ex)
        {
            std::cout << ex.what() << std::endl;
        }
    };

    T& operator[](const int index)
    {
        return arr[index];
    };

    T& back()
    {
        try
        {
            if (empty())
            {
                throw std::exception("Expresion: back() called on empty vector");
            }
            else
            {
                return at(var_size - 1);
            }
        }
        catch (const std::exception& ex)
        {
            std::cout << ex.what() << std::endl;
        }
    };

    T& front()
    {
        try
        {
            if (empty())
            {
                throw std::exception("Expresion: front() called on empty vector");
            }
            else
            {
                return at(0);
            }
        }
        catch (const std::exception& ex)
        {
            std::cout << ex.what() << std::endl;
        }
    };

    T* data()
    {
        if (!empty())
        {
            return arr;
        }
        else
        {
            arr = nullptr;
            return arr;
        }
        
    }

    void print()
    {
        if (var_size == 0)
        {
            std::cout << "Vector has empty!" << std::endl;
        }
        for (int i = 0; i < var_size; i++)
        {
            std::cout << arr[i] << std::endl;
        }
    };
};

