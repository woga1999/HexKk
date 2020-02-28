//
//  TemplateParamDefaultValue.cpp
//  C++ Xcode
//
//  Created by 김종혁 on 2020/02/28.
//  Copyright © 2020 김종혁. All rights reserved.
//

/*
#include <iostream>

using namespace std;

template <typename T=int, int len=7>    // Default Value 지정!
class SimpleArray
{
private:
    T arr[len];
    
public:
    T& operator[] (int idx) { return arr[idx];}
    SimpleArray<T, len>& operator=(const SimpleArray<T, len>& ref)
    {
        for(int i=0; i<len; i++)
            arr[i] = ref.arr[i];
        
        return *this;
    }
};
    
int main(void)
{
    SimpleArray<> arr;
    
    for(int i=0; i<7; i++)
        arr[i] = i+1;
    
    for(int i=0; i<7; i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;
    
    
    return 0;
}
*/
