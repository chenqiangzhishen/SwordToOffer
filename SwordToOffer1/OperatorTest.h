#pragma once
#ifndef _OPERATOR_TEST_H_
#define _OPERATOR_TEST_H_
class String{  
    friend ostream& operator<< (ostream&,String&);//����<<�����  
    friend istream& operator>> (istream&,String&);//����>>�����  
public:  
    String(const char* str=NULL);                //��ֵ�����Ĭ�Ϲ��캯��(char)  
    String(const String &other);                 //��ֵ���캯��(String)  
    String& operator=(const String& other);       //operator=  
    String operator+(const String &other)const;  //operator+  
    bool operator==(const String&);              //operator==  
    char& operator[](unsigned int);              //operator[]  
    size_t size(){return strlen(m_data);};  
    ~String(void) {delete[] m_data;}  
private:  
    char *m_data; // ���ڱ����ַ���  
};  
#endif //_OPERATOR_TEST_H_