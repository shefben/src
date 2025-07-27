#ifndef BackForwardController_h
#define BackForwardController_h
#include "BackForwardList.h"
#include <wtf/PassRefPtr.h>
namespace WebCore {
class Page;
class BackForwardController {
public:
    BackForwardController(Page*, PassRefPtr<BackForwardList>) {}
    BackForwardList* client() const { return 0; }
    bool canGoBackOrForward(int) const { return false; }
    void goBackOrForward(int) {}
    bool goBack() { return false; }
    bool goForward() { return false; }
    void addItem(PassRefPtr<HistoryItem>) {}
    void setCurrentItem(HistoryItem*) {}
    int count() const { return 0; }
    int backCount() const { return 0; }
    int forwardCount() const { return 0; }
    HistoryItem* itemAtIndex(int) { return 0; }
    bool isActive() { return false; }
    void close() {}
    HistoryItem* backItem() { return 0; }
    HistoryItem* currentItem() { return 0; }
    HistoryItem* forwardItem() { return 0; }
};
}
#endif
