//p6 Stack
//Rowan Briggs
//May 17, 2018
/* Description:
1)	Create a character stack, CharStack.

2)	Push the characters of array a [ ] into CharStack

3)	Pop the characters of a[] from CharStack to show “hello world!” In reverse:
 */
#include <iostream>
using namespace std;

class CharStack{
    private:
        int size;
        int top;
        char *stackArray;
    public:
        CharStack(int newSize){
            size = newSize;
            stackArray = new char[size];
            top = -1; //because there are no items yet
        }

        //put item on top of stack
        void push(char newValue) {
            stackArray[++top] = newValue; //increment top, insert value
        }

        char pop(){
            return stackArray[top--]; //accesses item, then decrements the top
        }

        char peek(){
            return stackArray[top]; //accesses item
        }

        bool isEmpty(){
            return (top == -1);
        }

        bool isFull() {
            return (top == size - 1);
        }
};

int main() {
    char a[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!'};
    int size = sizeof(a)/sizeof(a[0]);
    CharStack aStack(size);
    for (int i = 0; i < size; i++){
        aStack.push(a[i]);
    }
    //cout << aStack.peek();

    for (int i = size; i > 0; i--) {
        cout << aStack.pop();
    }
}

/* Output:
!dlrow olleh
Process finished with exit code 0

 */