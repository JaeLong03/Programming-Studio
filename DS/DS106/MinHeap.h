class MinHeap{ 
    int arr[30]; 
    int length; 

    public: 
    MinHeap(); 
    ~MinHeap(); 
    void insertKey(int value); 
    int deleteKey(); 
    int peek(); 
    int size(); 
    bool isEmpty(); 
    void minHeapifyUp(int index); 
    void minHeapifyDown(int root); 
    void printHeap(); 
}; 