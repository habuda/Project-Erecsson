//==================================================================================================
/* 
 * File:   Singleton.hh
 * Author: kdur
 *
 * Created on April 28, 2016, 9:00 AM
 */
//==================================================================================================

#ifndef SINGLETON_H
#define	SINGLETON_H

//==================================================================================================

template <class T>
class Singleton
{
public:
    static T& Instance()
    {
        static T _instance;
        return _instance;
    }

private:
    Singleton();
    ~Singleton();
    Singleton(Singleton const&);
    Singleton& operator=(Singleton const&);
};

//==================================================================================================

#define SINGLETON(CLASS) Singleton<CLASS>::Instance()

//==================================================================================================

#endif	/* SINGLETON_H */

//==================================================================================================
