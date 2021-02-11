#include <iostream>

using namespace std;
class ArrayList
{
private:
    struct ControlBlock{
        int capacity;
        int *arr_ptr;


    };
    ControlBlock *s;
public:
    ArrayList(int capacity)
    {
        s = new ControlBlock;
        s -> capacity = capacity;
        s -> arr_ptr = new int [s -> capacity];
    }
    void AddElement(int index, int data)
    {
        if(index>=0 && index <= s->capacity - 1){
                s -> arr_ptr[index] = data;

        }else
        cout<<"Index is Invalid\n";
    }
    void viewElement(int index, int &data)
    {
                if(index>=0 && index <= s->capacity - 1){
                    data = s->arr_ptr[index];
                }else
                cout<<"Not Valid\n";
    }
    void viewList()
    {
        for(int i=0;i<s->capacity;i++){
                cout<<" "<<s->arr_ptr[i];

        }
    }



};

int main()
{
    int data;
    ArrayList list1(4);
    list1.AddElement(0,2);
    list1.AddElement(1,4);
    list1.AddElement(2,5);
    list1.viewList();

}
