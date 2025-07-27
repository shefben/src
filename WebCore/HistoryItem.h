#ifndef HistoryItem_h
#define HistoryItem_h
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
namespace WebCore {
class HistoryItem : public WTF::RefCounted<HistoryItem> {
public:
    static RefPtr<HistoryItem> create() { return adoptRef(new HistoryItem); }
};
}
#endif
