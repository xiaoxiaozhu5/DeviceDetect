#include "StdAfx.h"
#include "C_UsbEnumerator.h"

using namespace DeviceDetectLibrary;
using namespace DeviceDetectLibrary::Connection;
using namespace DeviceDetectLibrary;

UsbEnumerator::UsbEnumerator(const NotifyWindow& window, ICollector& collector)
    :  Base(collector)
{ 
    /*NOTE: add specfic device*/
    /*
    GUID guidBlackBerry = { 0x80375827, 0x83b8, 0x4a51, { 0xb3, 0x9b, 0x90, 0x5f, 0xed, 0xd4, 0xf1, 0x18 } };
    AddCollector(guidBlackBerry, IEnumeratorPtr(new ResultEnumerator(collector, L"Blackberry", L"BlackBerry USB Device")), window); 

    GUID guidGarmin = {0x2c9c45c2, 0x8e7d, 0x4c08, {0xa1, 0x2d, 0x81, 0x6b, 0xba, 0xe7, 0x22, 0xc0}}; 
    AddCollector(guidGarmin, IEnumeratorPtr(new ResultEnumerator(collector, L"Garmin GPS device", L"Garmin USB device")), window);

    GUID guidModem = {0x2c7089aa, 0x2e0e, 0x11d1, {0xb1, 0x14, 0x00, 0xc0, 0x4f, 0xc2, 0xaa, 0xe4}}; 
    AddCollector(guidModem, IEnumeratorPtr(new ModemEnumeraror(collector)), window);

    GUID guidUSBDevice = { 0xA5DCBF10, 0x6530, 0x11D2, { 0x90, 0x1F, 0x00, 0xC0, 0x4F, 0xB9, 0x51, 0xED } };
    AddCollector(guidUSBDevice, IEnumeratorPtr(new ResultEnumerator(collector, L"Universal", L"general USB device")), window);
    */
}
