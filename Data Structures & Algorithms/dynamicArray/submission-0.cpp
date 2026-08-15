class DynamicArray {
public:
int count;
int* data;
int size;
    DynamicArray(int capacity) {
        count=0;
        if(capacity==0){
             size=1;
        }
        else{
            size=capacity;
        }
        data = new int[size];
    }

    int get(int i) {
        return data[i];
    }

    void set(int i, int n) {
        data[i]=n;
    }

    void pushback(int n) {
        if(count== size){
            resize();
        }
        data[count]=n;
        count++;

        
    }

    int popback() {
        count--;
        int n = data[count];
        return n;
    }

    void resize() {
        size *= 2;

        int* old = data;

        data = new int[size];

        int i=0;
        while( i <count)
        {
            data[i]=old[i];
            i++;
        }
        delete[] old;
    }

    int getSize() {
        return count;
    }

    int getCapacity() {
        return size;
    }
};
