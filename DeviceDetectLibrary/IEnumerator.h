#ifndef _IENUMERATOR_H_
#define _IENUMERATOR_H_

#include "macros.h"
#include <vector>

namespace DeviceDetectLibrary
{
    class ICollector;
    struct DeviceInfo;


    class IEnumerator : public boost::noncopyable
    {
    public:
        virtual void Collect(const DeviceInfo& ) = 0;
        virtual ~IEnumerator() {}
    };

    typedef std::shared_ptr<IEnumerator> IEnumeratorPtr;
    typedef std::vector<IEnumeratorPtr> IEnumerators;

}

#endif // _IENUMERATOR_H_