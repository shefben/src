#ifndef BackForwardList_h
#define BackForwardList_h
#include <wtf/RefCounted.h>
#include <wtf/PassRefPtr.h>
#include "HistoryItem.h"
namespace WebCore {
class BackForwardList : public WTF::RefCounted<BackForwardList> {
public:
    void addItem(PassRefPtr<HistoryItem>) {}
    void goToItem(HistoryItem*) {}
    HistoryItem* itemAtIndex(int) { return 0; }
    int backListCount() { return 0; }
    int forwardListCount() { return 0; }
    bool isActive() { return false; }
    void close() {}
    HistoryItem* backItem() { return 0; }
    HistoryItem* currentItem() { return 0; }
    HistoryItem* forwardItem() { return 0; }
};
}
#endif
