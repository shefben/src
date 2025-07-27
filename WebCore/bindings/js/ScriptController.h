#ifndef ScriptController_h
#define ScriptController_h

namespace WebCore {
class Frame;

class ScriptController {
public:
    ScriptController(Frame*) {}
    ~ScriptController() {}

    static bool processingUserGesture() { return false; }
    bool canExecuteScripts(int) { return false; }
    void clearWindowShell(bool = false) {}
};

} // namespace WebCore

#endif // ScriptController_h
