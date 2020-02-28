//
//  PointTemplate.h
//  C++ Xcode
//
//  Created by 김종혁 on 2020/02/28.
//  Copyright © 2020 김종혁. All rights reserved.
//

#ifndef PointTemplate_h
#define PointTemplate_h

template <typename T>

class Point
{
private:
    T xpos, ypos;
    
public:
    Point(T x=0, T y=0);
    void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{}

template <typename T>
void Point<T>::ShowPosition() const
{
    cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
}


#endif /* PointTemplate_h */
