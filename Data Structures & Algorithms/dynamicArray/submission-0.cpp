class DynamicArray {
private:
    int capacity;
    int length;
    int* arr;

public:
    DynamicArray(int capacity) : capacity(capacity), length(0){
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(capacity == length){
            resize();
        }
        arr[length] = n;
        length++;
    }

    int popback() {
        if(length > 0){
            length-=1;
        }
        return arr[length];
    }

    void resize() {
        int *new_arr = new int[capacity * 2];
        
        for(int i=0; i < capacity; i++){
            new_arr[i] = arr[i];
        }
        delete[] arr;
        arr = new_arr;
        capacity *=2;

    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }

    ~DynamicArray() {
        delete[] arr;
    }
};
