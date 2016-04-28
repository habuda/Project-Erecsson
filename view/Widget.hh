//==================================================================================================
/* 
 * File:   Widget.hh
 * Author: kdur
 *
 * Created on April 28, 2016, 9:25 AM
 */
//==================================================================================================

#ifndef WIDGET_HH
#define WIDGET_HH

//==================================================================================================

#include <Wt/WContainerWidget>
#include <Wt/WTemplate>

#include "Controller.hh"

//==================================================================================================

using namespace Wt;

//==================================================================================================

class Widget : public WContainerWidget
{
public:
    Widget(Controller *a_pController = 0, WContainerWidget *a_pParent = 0);
    virtual ~Widget();
    
protected:
    Controller *m_pController;
    WTemplate *m_pTemplate;
};

//==================================================================================================

#endif /* WIDGET_HH */

//==================================================================================================
