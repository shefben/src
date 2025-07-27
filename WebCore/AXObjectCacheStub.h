#ifndef AXObjectCacheStub_h
#define AXObjectCacheStub_h

#include <wtf/Forward.h>

namespace WebCore {

class Document;
class Node;
class RenderObject;
class ScrollView;
class Widget;
class AccessibilityObject;
class String;

class AXObjectCache {
public:
    explicit AXObjectCache(const Document*) {}
    ~AXObjectCache() {}

    enum PostType { PostSynchronously, PostAsynchronously };

    enum AXNotification {
        AXActiveDescendantChanged,
        AXAutocorrectionOccured,
        AXCheckedStateChanged,
        AXChildrenChanged,
        AXFocusedUIElementChanged,
        AXLayoutComplete,
        AXLoadComplete,
        AXSelectedChildrenChanged,
        AXSelectedTextChanged,
        AXValueChanged,
        AXScrolledToAnchor,
        AXLiveRegionChanged,
        AXMenuListValueChanged,
        AXRowCountChanged,
        AXRowCollapsed,
        AXRowExpanded,
        AXInvalidStatusChanged,
    };

    enum AXTextChange {
        AXTextInserted,
        AXTextDeleted,
    };

    static bool accessibilityEnabled() { return false; }

    void removeNodeForUse(Node*) {}
    void handleActiveDescendantChanged(RenderObject*) {}
    void handleAriaRoleChanged(RenderObject*) {}
    void handleFocusedUIElementChanged(RenderObject*, RenderObject* = 0) {}
    void postNotification(RenderObject*, AXNotification, bool, PostType = PostAsynchronously) {}
    void postNotification(AccessibilityObject*, Document*, AXNotification, bool, PostType = PostAsynchronously) {}
    void postNotificationToElement(RenderObject*, const String&) {}
    void selectedChildrenChanged(RenderObject*) {}
    void contentChanged(RenderObject*) {}
    void handleAriaExpandedChange(RenderObject*) {}
    void childrenChanged(RenderObject*) {}
    void handleScrollbarUpdate(ScrollView*) {}
    void nodeTextChangeNotification(RenderObject*, AXTextChange, unsigned, unsigned) {}
};

} // namespace WebCore

#endif // AXObjectCacheStub_h
