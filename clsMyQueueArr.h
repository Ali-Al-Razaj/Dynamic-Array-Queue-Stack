#pragma once


#include "clsDynamicArray.h"

template <class T>
class clsMyQueueArr
{
protected:

    clsDynamicArray <T> _Queue;

public:

    void Push(T Item)
    {
        _Queue.InsertAtEnd(Item);
    }
    void Pop()
    {
        _Queue.DeleteFirstItem();
    }
    void Print()
    {
        _Queue.PrintList();
    }
    int Size()
    {
        return _Queue.Size();
    }
    bool IsEmpty()
    {
        return _Queue.IsEmpty();
    }
    T Front()
    {
        return _Queue.GetItem(0);
    }
    T Back()
    {
        return _Queue.GetItem(Size() - 1);
    }

    T GetItem(int index)
    {
        return _Queue.GetItem(index);
    }

    void Reverse()
    {
        _Queue.Reverse();
    }

    void UpdateItem(int index, T NewValue)
    {
        _Queue.SetItem(index, NewValue);
    }

    void InsertAfter(int index, T Value)
    {
        _Queue.InsertAfter(index, Value);
    }

    void InsertAtFront(T Value)
    {
        _Queue.InsertAtBeginning(Value);
    }

    void InsertAtBack(T Value)
    {
        _Queue.InsertAtEnd(Value);
    }

    void Clear()
    {
        _Queue.Clear();
    }
};



