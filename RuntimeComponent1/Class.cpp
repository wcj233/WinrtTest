#include "pch.h"
#include "Class.h"
#include "Class.g.cpp"

namespace winrt::RuntimeComponent1::implementation
{
    int32_t Class::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Class::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
    void Class::ChangeLanguage()
    {
        auto text = winrt::Windows::UI::Xaml::Controls::TextBlock();
        cx::FrameworkElement^ cx = to_cx<cx::FrameworkElement>(text);
    }
}
