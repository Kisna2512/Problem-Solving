class RandomizedSet
{
    set<int> st;
    public:

   
   
    RandomizedSet()
    {
        
    }

    bool insert(int val)
    {
        if(st.find(val)!=st.end())
        {
             return false;
        }
        
        st.insert(val);
        return true;
       
    }

    bool remove(int val)
    {
        if(st.find(val)==st.end())
        {
             return false;
        }
        st.erase(val);
        return true;
    }

    int getRandom()
    {
        int a = rand() % st.size();
        auto it = st.begin();
        
        while(a--)
            it++;
        
        return *it;
    }
};

/**
 *Your RandomizedSet object will be instantiated and called as such:
 *RandomizedSet* obj = new RandomizedSet();
 *bool param_1 = obj->insert(val);
 *bool param_2 = obj->remove(val);
 *int param_3 = obj->getRandom();
 */