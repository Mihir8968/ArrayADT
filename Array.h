#include<iostream>
using namespace std;
class Array{
private:
    int *A;
    int size;
    int length;
public:
    Array(int sz){
        this->size = sz;
        A = new int[size];
        length = 0;
    }
    void create(){
        cout<<"Enter length of array : ";
        cin>>length;
        if(length > size){
            cout<<"Too large please type '1' if you want to re-enter the length and '2' if you want to end the creation"<<endl;
            int input;
            cin>>input;
            if(input == 1){
                create();
            }
            else{
                return;
            }
        }
        else{
            for(int i = 0; i < length; i++){
                cin>>A[i];
            }
        }
    }
    void display(){
        for(int i = 0; i < length; i++){
            cout<<A[i]<<"\t";
        }
        cout<<endl;
    }
    void append(int ele){
        if(length + 1 > size){
            cout<<"Not possible to append as length will exceed size"<<endl;
            return;
        }
        else{
            A[length] = ele;
            ++length;
        }
    }
    void insert(int index, int ele){
        if(length + 1 > size){
            cout<<"Not possible to insert as length will exceed size"<<endl;
            return;
        }
        else{
            for(int i = length-1; i >= index; i--){
                A[i+1] = A[i];
            }
            A[index] = ele;
            ++length;
        }
    }
    void remove(int index){
        for(int i = index; i < length-1; i++){
            A[i] = A[i+1];
        }
        --length;
    }
    int search(int ele){
        //returns index if element present otherwise returns -1

        for(int i = 0; i < length; i++){
            if(A[i] == ele){
                return i;
            }
        }
        return -1;
    }
    int get(int index){
        return A[index];
    }
    void set(int index, int ele){
        A[index] = ele;
    }
    int max(){
        //returns maximum value, not the corresponding index
        int mx = A[0];
        for(int i = 1; i < length; i++){
            if(A[i] > mx){
                mx = A[i];
            }
        }
        return mx;
    }
    int min(){
        //returns minimum value, not the corresponding index
        int mn = A[0];
        for(int i = 1; i < length; i++){
            if(A[i] < mn){
                mn = A[i];
            }
        }
        return mn;
    }
    void reverse(){
        int m = length / 2;
        for(int i = 0; i < m; i++){
            //swapping symmetric indices
            int temp = A[i];
            A[i] = A[length - i - 1];
            A[length - i - 1] = temp;
        }
    }
};
