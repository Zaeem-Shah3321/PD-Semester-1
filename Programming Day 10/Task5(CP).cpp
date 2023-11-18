#include<iostream>
using namespace std;
main()
{
    string sorted = "[";
    cout << "Enter the weights of the 10 packages:"<< endl;
    int weight[10];;    

     for (int i = 0; i < 10; i++)
     cin >> weight[i]; 
    
    int min = 0;
    for (int i = 0; i < 10; i++) 
    {
        int minIndex = i;
        for (int j = i + 1; j < 10; j++) 
        {
            if (weight[j] < weight[minIndex])
                minIndex = j;
        }
        int temp = weight[i]; 
        weight[i] = weight[minIndex]; 
        weight[minIndex] = temp;
        sorted += to_string(weight[i]) + ", ";
    }
    sorted = sorted.substr(0, sorted.length() - 2); 
    sorted += "]";
    cout << "Sorted array in ascending order: " << sorted;
}