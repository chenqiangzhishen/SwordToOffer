#pragma once
#ifndef _OPERATOR_TEST_H_
#define _OPERATOR_TEST_H_
class String{  
    friend ostream& operator<< (ostream&,String&);//重载<<运算符  
    friend istream& operator>> (istream&,String&);//重载>>运算符  
public:  
    String(const char* str=NULL);                //赋值构造兼默认构造函数(char)  
    String(const String &other);                 //赋值构造函数(String)  
    String& operator=(const String& other);       //operator=  
    String operator+(const String &other)const;  //operator+  
    bool operator==(const String&);              //operator==  
    char& operator[](unsigned int);              //operator[]  
    size_t size(){return strlen(m_data);};  
    ~String(void) {delete[] m_data;}  
private:  
    char *m_data; // 用于保存字符串  
};  
#endif //_OPERATOR_TEST_H_