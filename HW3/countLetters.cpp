#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE = 50;
void input(int arr[], int &arraySize);
void sort(int arr[], int arraySize);
void swap(int &a, int &b);
void repeating(int arr[], int times[], int &arraySize);
void results(int arr[], int times[], int arraySize);
int main(){
    int arr[SIZE];
    int times[SIZE];
    int arraySize;
    input(arr, arraySize);
    sort(arr, arraySize);
    repeating(arr, times, arraySize);
    results(arr, times, arraySize);
    cout << endl;
    return 0;
}
void input(int arr[], int &arraySize){
    cout << "How many values do you want to enter?";
    cin >> arraySize;
    for(int i = 0; i < arraySize; i++){
        cout << "Enter a value: ";
        cin >> arr[i];
    }
    return;
}
void sort(int arr[], int arraySize){
    for(int i = 0; i<arraySize; i++){
        for(int j = i+1; j<arraySize; j++){
            if(arr[i] < arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    return;
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
void repeating(int arr[], int times[], int &arraySize){
    int repeat = 1;
    for(int i = 0; i<arraySize; i++){
        for(int j = i+1; j<arraySize; j++){
            if(arr[i] == arr[j]){
                for(int c = j; c<arraySize-1; c++){
                    if(arr[c] == arr[c+1]){
                        repeat++;
                    }
                    arr[c] = arr[c+1];
                }
                arraySize--;
            }
        }
        times[i] = repeat;
    }
    return;
}
void results(int arr[], int times[], int arraySize){
    cout << setw(10) << "Number" << setw(20) << "Count"<< endl << endl;
    for(int i = 0; i<arraySize; i++){
        cout << setw(10) << arr[i] << setw(20) << times[i] << endl;
    }
    return;
}
