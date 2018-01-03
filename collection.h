#ifndef BANK_COLLECTION_H
#define BANK_COLLECTION_H

#include <map>

template <class T>
class Collection
{
public:
    bool Add(const T& item)
    {
        if(items.find(item.id) != items.end())
            return false;

        items.emplace(item.id, item);
        return true;
    }

    T* Get(const int customerId)
    {
        auto it = items.find(customerId);
        if(it == items.end())
            return nullptr;

        return &it->second;
    }

protected:
    std::map<int, T> items;
};

#endif //BANK_COLLECTION_H
