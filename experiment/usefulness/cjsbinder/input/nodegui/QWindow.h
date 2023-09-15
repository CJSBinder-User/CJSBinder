class QScreen;
class Edges;
class WindowState;
class Visibility;
class QWindow{
public:
    QScreen* screen();
    void showFullScreen();
    void showMaximized();
    void showMinimized();
    void showNormal();
    bool startSystemMove();
    bool startSystemResize(Edges);
    void setWindowState(WindowState);
    WindowState windowState();
    Visibility visibility();
    void setVisibility(Visibility);
};
