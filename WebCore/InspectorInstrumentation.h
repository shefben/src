#ifndef InspectorInstrumentation_h
#define InspectorInstrumentation_h
namespace WebCore {
struct InspectorInstrumentationCookie { };
class InspectorInstrumentation {
public:
    template<typename... Args> static InspectorInstrumentationCookie willEvaluateScript(Args...) { return {}; }
    template<typename... Args> static void didEvaluateScript(Args...) {}
    template<typename... Args> static void willSendXMLHttpRequest(Args...) {}
    template<typename... Args> static void didSendXMLHttpRequest(Args...) {}
    template<typename... Args> static void scriptImported(Args...) {}
    template<typename... Args> static void didCreateWorker(Args...) {}
    template<typename... Args> static bool willStartWorkerContext(Args...) { return false; }
    template<typename... Args> static void didStartWorkerContext(Args...) {}
    template<typename... Args> static void didDestroyWorker(Args...) {}
    template<typename... Args> static bool handleMousePress(Args...) { return false; }
    template<typename... Args> static InspectorInstrumentationCookie willPaint(Args...) { return {}; }
    template<typename... Args> static void didPaint(Args...) {}
    template<typename... Args> static InspectorInstrumentationCookie willRecalculateStyle(Args...) { return {}; }
    template<typename... Args> static void didRecalculateStyle(Args...) {}
    template<typename... Args> static void domContentLoadedEventFired(Args...) {}
    template<typename... Args> static InspectorInstrumentationCookie willDispatchEvent(Args...) { return {}; }
    template<typename... Args> static void didDispatchEvent(Args...) {}
    template<typename... Args> static InspectorInstrumentationCookie willDispatchEventOnWindow(Args...) { return {}; }
    template<typename... Args> static void didDispatchEventOnWindow(Args...) {}
    template<typename... Args> static InspectorInstrumentationCookie willLayout(Args...) { return {}; }
    template<typename... Args> static void didLayout(Args...) {}
    template<typename... Args> static InspectorInstrumentationCookie willFireTimer(Args...) { return {}; }
    template<typename... Args> static void didFireTimer(Args...) {}
    template<typename... Args> static void loadEventFired(Args...) {}
    template<typename... Args> static void networkStateChanged(Args...) {}
    template<typename... Args> static void inspectedPageDestroyed(Args...) {}
};
}
#endif
