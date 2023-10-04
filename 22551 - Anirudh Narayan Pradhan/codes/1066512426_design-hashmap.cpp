class MyHashMap {
public:
    vector<pair<int,int>> table;
     int i;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
       
        for(i=0;i<table.size();++i)
        {
            if(table[i].first == key)
            {
                table[i].second = value;
                return;
            }
        }

        table.push_back(make_pair(key,value));
    }
    
    int get(int key) {
        for(i=0;i<table.size();++i)
        {
            if(table[i].first == key)
                return table[i].second;
        }
        return -1;
    }
    
    void remove(int key) {
        for(i=0;i<table.size();++i)
        {
            if(table[i].first == key)
            {
                table.erase(table.begin()+i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */